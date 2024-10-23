#include <stdio.h>

int max_of_two(int x, int y);

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf(" %d %d", &num1, &num2);
    printf("The maximum is: %d\n",max_of_two(num1,num2));
}

int max_of_two(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}