#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str,sizeof(str), stdin); // it reads the \n after entering
    printf("You entered : %s",str);
    return 0;
}