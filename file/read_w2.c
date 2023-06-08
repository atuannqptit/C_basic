

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    char file[30];
    FILE *fptr;

    if((fptr = fopen("F:\\Code_Other\\Code_C\\File\\new_file3.txt","r")) == NULL )
    {
        printf("Error. Opening file \n");           // file trong thi ko doc nua
        exit(1);
    }

    
    fscanf(fptr, "%d", num);
    fscanf(fptr, "%s", file);  // tuong tu nhu cai tren 
    

    printf(" Gia tri num: %s", file);
    fclose(fptr);

    return 0;
}
