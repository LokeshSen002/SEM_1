#include <stdio.h>
int main()
{
    int start,stop,b=0,c=0;
    printf("Enter a start and stop number to display range of prime series\n");
    scanf("%d%d",&start,&stop);
    if(start<=1||stop<=1)
    printf("START AND STOP VALUE SHOULD BE LARGER THAN 1\n");
    else
    {
    printf("Prime numbers are:\n");
    for(int i=start ;i<=stop;i++)
    {
        for(int j=2;j<i;j++){
            if(i%j==0)
            {
                b++;
                break;
            }
            else
            b=0;
        }
        if(b==0)
        printf(" %d ",i);
    }
    }
}