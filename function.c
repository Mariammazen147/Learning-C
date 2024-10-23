#include <stdio.h>

void myfunction();

int main(){
    printf("This is the main function.\n");
    myfunction();
    return 0;
}

//This is a single-line comment

/*
multi-line comments 
it can span multiple lines
*/

void myfunction() {
    printf("This is a custom function.\n");
}