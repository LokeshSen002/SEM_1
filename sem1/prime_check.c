#include <stdio.h>
int main ()
{   int a,b=0;
    printf("Enter a number to check is it prime or not");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        b++;
    }
    if(b==2)
    printf("%d is prime number",a);
    else
    printf("%d is not a prime number",a);

}