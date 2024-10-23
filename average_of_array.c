#include <stdio.h>

int main()
{
    int arr[5] = {};
    int sum = 0;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %d", &arr[i]);
        sum += arr[i];
    }
    printf("The average is: %.2f\n",(float)sum/5);
}