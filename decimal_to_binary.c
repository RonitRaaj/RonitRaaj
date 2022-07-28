#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int num,a[10],x;
    printf("Enter the number\n");
    scanf("%d", &num);
    
    for ( int i = 10; i>=0; i--)
    {
        x=num%2;
        a[i]=x;
        num=num/2;
    }
    for (int j = 0; j<11; j++)
    {
        printf("%d",a[j]);
    }
    
    return 0;
}