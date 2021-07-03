#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str [10];

    printf("I LOVE YOU ? (Y/N): ");
    scanf("%s",str);
    if (!strcmp("Y",str))
    {
        printf("I LOVE YOU TOO!!");
        printf("\n You can proceed!!");
    }
    else
    {

        printf("SORRY !!\n  !!");
    }
}
