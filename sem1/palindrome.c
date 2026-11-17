#include <stdio.h>
int main (){
    int a,b,temp,rev=0;
    printf("Enter a number to check it is palindrome or not");
    scanf("%d", &a);
    temp = a;
    while(a > 0)
    {
    b = a%10;
    rev = rev*10+b;
    a = a/10;
    }
    if(temp==rev)
        printf("%d is a palindrome number",temp);
    else 
        printf("%d is not a palindrome number",temp);
    return 0;
    

}