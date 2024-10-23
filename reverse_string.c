#include <string.h>
#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int n = strlen(str);
    char str2[n + 1];
    for (int i = 0; i < n; i++)
    {
        str2[i] = str[n - i - 1];
    }
    str2[n]='\0';
    printf("Reversed string: %s\n",str2);
    return 0;
}