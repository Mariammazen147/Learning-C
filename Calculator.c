#include <stdio.h>

int main()
{
    int num1, num2, res;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    if (op == '+')
    {
        res = num1 + num2;
    }
    else if (op == '-')
    {
        res = num1 - num2;
    }
    else if (op == '*')
    {
        res = num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("It is impossible to divide by zero.");
            return 1;
        }
        res = num1 / num2;
    }
    else if (op == '%')
    {
        res = num1 % num2;
    }
    printf("The answer is: %d\n",res);
    return 0;
}