#include<stdlib.h>
#include<stdio.h>



int main(void)
{
		
	int n=1;
	char *professor = calloc(1, 256*sizeof(professor));

	


	printf("Professor, Pelase enter your name: ");
	scanf("%s", professor);
	
	printf("Professors name: %s \n",professor);
	printf("Number of students to mark?: ");
	scanf("%d", &n);
	printf("Number of students to mark: %d \n",n);
		
	int *student_id = malloc(n);
	int *grades = malloc(n);
	free(professor);
	free(student_id);
	free(grades);
}