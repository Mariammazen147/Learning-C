#include <stdio.h>

void swapUsingPointers(int *num1, int* num2);

int main(){
     int num1,num2;
     printf("Enter two numbers: ");
     scanf(" %d %d", &num1,&num2);
     swapUsingPointers(&num1,&num2);
     printf("After Swapping: %d %d\n",num1,num2);
}

void swapUsingPointers(int *num1, int* num2) {
    int temp =*num1;
    *num1 =*num2;
    *num2=temp;
}