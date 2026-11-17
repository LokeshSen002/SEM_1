#include <stdio.h>
int main (){
    int f=0,a=1,b,c;
    printf("Enter the nth term to display fibbonaci series");
    scanf("%d",&b);
    for (int i =0;i<b;i++)
    {
        c= f+a; // f = f(n-1) + f(n-2)
        printf("%d",f);
        f=a;
        a=c;

    }
}