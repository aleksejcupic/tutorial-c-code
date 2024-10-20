#include <stdio.h>
int main()
{
    // CALCULATOR
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Answer: %d \n", num1 + num2);



    //MAD LIBS
        char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("enter a color: ");
    scanf("%s", color);
    printf("enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s \n", celebrityF, celebrityL);



    return 0;
}
