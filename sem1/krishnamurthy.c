#include <stdio.h>
int fact(int n)
    {
        if(n==0 || n==1)
            return 1;
        else
            return n*fact(n-1);
    }
int main (){
    int a,b,temp,c=0;
    printf("Enter a number to check it is palindrome or not");
    scanf("%d", &a);
    temp = a;
    while(a > 0)
    {
        b = a%10;
        c = c+fact(b);
        a = a/10;
    }
    if(c==temp)
        printf("%d is a Krishnamurthy number",temp);
    else
        printf("%d is not a Krishnamurthy number",temp);
}