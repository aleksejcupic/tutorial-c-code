#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);

    char name[20]; // can store 20 char
    printf("enter your name: ");
    fgets(name, 20, stdin); // just gets all char, not just up to the first space
    printf("your name is %s", name);

    return 0;
}