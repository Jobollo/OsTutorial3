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
	struct grade grades[num_students];


	printf("Professor, Please enter your name: ");
	scanf("%s", professor);
	
	printf("Professors name: %s \n",professor);
	printf("Number of students to mark: ");
	scanf("%d", &num_students);
	printf("Number of students to mark: %d \n", num_students);
		
	int *grade = malloc(num_students);


	for (int i = 0; i<num_students; i++)
	{
		printf("Enter student id: \n");
		scanf("%d", &grades[i].student_id);
		printf("Enter student grade: \n");
		scanf("%d", &grades[i].mark);	
	}	

	free(professor);
	
	
}