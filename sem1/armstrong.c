#include <stdio.h>
#include <math.h>
int main (){
    int a,b=0,c=0,temp,rev=0,exp=0;
    printf("Enter a number\n");
    scanf("%d", &a);
    temp = a;
    while(a>0)
    {
        b=a%10;
        exp++;
        a=a/10;
    }
    a = temp;
    while(a>0)
    {
        b = a%10;
        c = c+(int)pow(b,exp);
        a = a/10;
    }
    if(c==temp)
        printf("%d is an Armstrong number",temp);
    else 
        printf("%d is not an Armstrong number",temp);

}