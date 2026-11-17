#include <stdio.h>
int main ()
{
    int n=5;
    // printf("Enter your term to print pattern: ");
    // scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("*\n");
        for(int j=1;j<=i;j++)
            printf("*");
    }
    printf("\n");
}