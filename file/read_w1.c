

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("F:\\Code_Other\\Code_C\\File\\new_file0.txt","w");
    
    if(fptr == NULL)
    {
        printf("Error \n");
        exit(1);
    }

     printf("num = ");
     scanf("%d",&num);
    // fscanf(fptr,"%d", num);

    fprintf(fptr,"%d", num);

    fclose(fptr);
    
}

