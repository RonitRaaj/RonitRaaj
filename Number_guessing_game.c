#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("cls");
    int num, number, x = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Guess a number\n");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &number);
        if (number < num)
        {
            x=x+1;
            printf("Higher number please\n");
            continue;
        }
        else if (number > num)
        {
            x=x+1;
            printf("Lower number please\n");
            continue;
        }
        else
        {
            x=x+1;
            printf("Correct guess!!\n");
            break;
        }
        
    }
    printf("\n Total number of attempts=%d", x);
    return 0;
}