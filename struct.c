#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major [50];
    int age;
    double gpa;

};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "jim");
    strcpy( student1.major, "business");

    printf("%s", student1.name);

    return 0;
}
