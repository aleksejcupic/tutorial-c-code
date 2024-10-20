#include <stdio.h>
int main()
{
    // variables 
    char characterName[] = "John"; 
    int characterAge = 35;
    printf("Hello, %s\n", characterName);
    characterAge = 30; 
    printf("Hello world!\n");

    // types of variables
    int age = 40;
    double gpa = 3.7;
    float number = 2.3;
    char grade = 'A';
    char grades[] = "ABC";

    // printf function
    printf("Hello\"hello.\n");
    printf("%d\n", 500);
    printf("my fav %s is %d\n", "number", 500);
    // %s for char, %d for int, %f for decimal, also %c for char

    // numbers in general
    printf("%f\n", 5.0 + 4.5);
    // printf("%f \n", pow(2, 3));
    /* also has sqrt(num, num2)
    and ceil(35.321) which rounds up
    floor(48.741) rounds down */

    //constants - cant be modified
    int num = 5;
    num = 8;
    const int NUMBER = 5; // or int const

    // getting user input
    int age2;
    printf("Enter your age: "); 
    scanf("%d", &age2);
    return 0;
}