#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("What's your name?\n");
    string name = get_string("name: ");
    printf("hello, %s\n", name);
}