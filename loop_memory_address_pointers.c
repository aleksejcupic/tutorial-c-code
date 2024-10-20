#include <stdio.h>
#include <stdlib.h>

int main()
{
    // LOOPS
    int index = 1;
    while (index <= 5){
        printf("%d\n", index);
        index++;
    }

    do {
        printf("%d\n", index);
        index++;
    } while (index <= 10);

    int i;
    for(i = 1; i <=5; i++){
        printf("%d\n", i);
    }

    int nums[3][2] = {
                        {1,2},
                        {3,4},
                        {5,6}
                    };


    // MEMORY ADDRESS / POITNERS
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;

    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);
    printf("age: %p\ngpa: %p\ngrade: %p\n", pAge, pGpa, pGrade);

    // DEREFERENCING POINTERS
    printf("%d\n", *pAge);

    return 0;
}
