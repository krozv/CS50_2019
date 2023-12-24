#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    printf("This is chapter2 condition & loop.\n");
    while(i < 5)
    {
        printf("Counter is %d\n", i);
        i ++;
    }
    for (int j = 0; j<5; j++)
    {
        printf("This is using for loop.\n");
    }
}