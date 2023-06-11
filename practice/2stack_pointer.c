
/* Hiểu về program counter và stack pointer  */
#include <stdio.h>

#define MAX 10  /* luu tren RAM */
#define tong(a, b) (a) + (b)
#define CREATE_FUNC(name_func, cmd)     \
        void name_func(){               \ 
            printf("%s\n", (char*)cmd); \  
        }

CREATE_FUNC(test1, "Hello everyone\n");
CREATE_FUNC(test2, "How are you\n");

void sum(int a, int b)          /* dia chi luu ham thi du là 0xc1 -> 0xc7 */
{
    printf("Sum = %d\n", a+b);
}

int main(int argc, char *argv[])    /* program counter  0xc1 ,.., 0xc7 */
/* bước nhảy là phụ thuộc kiến trúc của vxl nó , vd 32bit = 4byte, 0x01, 0x05,  */
{                                   /* stack pointer 0x09   */
    int a = 1, b = 12;
    printf("Tong = %d\n", tong(a, b));
    test1();
    test2();
    
    // thí dụ như thế này
    // A(); /* 0x01 0x02 0x03  */
    // B(); /* 0x04 0x05 0x06  */
    // C(); /* 0x07 0x08 */
    // tong(7, 9);         /* hàm chương trình con được lưu trong program counter */

/* A() , B(), C() chỉ là ví dụ các câu lệnh, thuật toán trong main (như if/else, for hay gì đó) chứ không phải gọi các hàm con
hay nội dung của hàm con nhá, Vì hàm con thì có địa chỉ riêng, còn hàm main có địa chỉ riêng, được phân chia
và có chức năng như đề cập ở keyword là program counter và stack pointer 
*/

    return 0;
}

/*
program counter: là dem chuong trình vào các địa chỉ để lấy giá trị mỗi địa chỉ đó : 0x01
0x02 đọc giá trị, 0x03 đọc giá trị  


*/
