#include<stdio.h>
#include<unistd.h>
void main()
{
    int chldid,parentid,x=1;
    printf("\n1st process");
    parentid = getppid();
    printf("\nProcess id = %d\n",parentid);
    while(x<2)

    {
        chldid = fork();
        x++;
        chldid = getpid();
        parentid = getppid();
        printf("\n%d proccess",x);
        printf("\nParent id = %d", parentid);
        printf("\nChild id = %d\n", chldid);
    }

}

