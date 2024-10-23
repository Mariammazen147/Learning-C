#include <string.h>
#include <stdio.h>

int main(){
    char str1[50],str2[50];

    //Input
    printf("Enter the first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);

    //removing the \n from fgets input
    str1[strcspn(str1, "\n")]='\0';
    str2[strcspn(str2, "\n")]='\0';

    //compare 
    if(strcmp(str1,str2)==0){
        printf("The strings are equal\n");
    }else{
        printf("The strings are not equal\n");
    }

    //concatenate
    strcat(str1,str2);
    printf("Concatenated string: %s\n",str1);

    //display length
    printf("Length of concatenated string: %lu\n",strlen(str1));
}