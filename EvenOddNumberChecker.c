#include <stdio.h>

int main(int argc, const char * argv[])
{
    char name[80];
    char number[50];
    int realNumber;

    printf("\n\t==================================\n");
    printf("\t Odd number / Even Number Checker\n");
    printf("\t==================================\n\n");

    printf("Hi, there! Please enter your name: ");
    scanf("%[^\n]s", &name);

    printf("\nWelcome to Odd Number / Even Number Checker, %s!\n", name);

    printf("Please enter a number: ");
    scanf("%s", &number);

    if(sscanf(number, "%d", &realNumber) == 1){
        if(realNumber % 2 == 0){
            printf("\nYou inputted [%d], %s!\n", realNumber, name);
            printf("[%d] is an EVEN NUMBER!\n", realNumber);
        }
        else { //(realNumber % 2 == 1)
            printf("\nYou inputted [%d], %s!\n", realNumber, name);
            printf("[%d] is an ODD NUMBER!\n", realNumber);
        }
    }
    else{
        printf("\n\nYou didn't input a number!\n");
    }
    printf("\nThank you for using my program, %s! :)\n", name);

    return 0;
}