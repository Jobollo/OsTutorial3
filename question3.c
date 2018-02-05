#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char id[127];
    char age[127];
    char year[127];
};

void save_student( struct student student1 );

int main(void)
{

    struct student student1;

    char s_id[127];
    char age[127];
    char year[127];

    printf("What is your UOIT Student ID?");
    scanf("%s", s_id);

    printf("What is your age?");
    scanf("%s", age);

    printf("What year did you start at UOIT?");
    scanf("%s", year);

    strcpy( student1.id, s_id);
    strcpy( student1.age, age);
    strcpy( student1.year, year);

    save_student( student1 );

}

void save_student( struct student student1 )
{
    FILE *file;

    file = fopen("students.txt", "a");

    fprintf(file, "%s,", student1.id);
    fprintf(file, "%s,", student1.age);
    fprintf(file, "%s\n", student1.year);

    fclose(file);

}