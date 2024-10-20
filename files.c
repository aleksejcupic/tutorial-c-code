#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "w"); // a for append, r for read

    fprintf(fpointer, "Jim, Salesman\n Pam, Janitor");

    fgets(line, 255, fpointer);
    printf("%s\n", line);

    fclose(fpointer);
    return 0;
}
