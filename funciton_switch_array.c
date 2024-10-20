#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }


    return result;
}

double cube(double num);

int main()
{
    // SWITCH
    char grade = 'B';

    switch(grade){
    case 'A' :
        printf("You did great! \n");
        break;
    case 'B' :
        printf(" You did not great! \n");
        break;
    default :
        printf("invalid");
    }


    printf("answer %f\n", max(4, 3, 2));
    sayHi("BATA");
    printf("answer %f\n", cube(3.0));
    // ARRAYS
    int luckyNumbers[] = {4, 8, 15};
    int otherNumbers[10];
    otherNumbers[1] = 80;

    luckyNumbers[1] = 200;

    printf("%d", luckyNumbers[1]);


    return 0;
}

double cube(double num)
{
    return num * num * num;
}

void sayHi(char name[]){
    printf("Hello %s\n", name);
}
