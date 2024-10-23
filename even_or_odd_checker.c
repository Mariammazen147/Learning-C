#include <stdio.h>

int main()
{
    int num=1;

    while (num != 0)
    {
        printf("Enter a number (0 to stop): ");
        scanf(" %d", &num);

        if(num==0){
            printf("Exiting program.\n");
            break;
        }
        switch (num % 2 == 0)
        {
        case 1:
            printf("%d is even\n", num);
            break;
        case 0:
            printf("%d is odd\n", num);
            break;
        }
    }
}