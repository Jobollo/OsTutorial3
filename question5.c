#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct grade
{
	int mark;
	int student_id;
};

void grade_students(int grades, int num_students)
{
	FILE *file;
	file = fopen("grades.txt", "w");

}

int main(void)
{
		
	int num_students = 1;
	char *professor = calloc(1, 256*sizeof(professor));
	//int num_students;
	


	printf("Professor, Pelase enter your name: ");
	scanf("%s", professor);
	
	printf("Professors name: %s \n",professor);
	printf("Number of students to mark?: ");
	scanf("%d", &num_students);
	printf("Number of students to mark: %d \n", num_students);
		
	int *student_id = malloc(num_students);
	int *grades = malloc(num_students);
	free(professor);
	free(student_id);
	free(grades);
}