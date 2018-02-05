#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    int numbers[10];
    FILE *q2file;
    q2file = fopen("question2.txt", "r");
    if (q2file == NULL)
    {
        printf("Error: Could not read or find question2.txt\n");
        exit(1);
    }
    int num = 0;
    int n = 0;
    //fscanf (q2file, "%d", &num);
    while (!feof(q2file))
    {
        fscanf (q2file, "%d", &num);
        numbers[n] = num;
        n += 1;
 
    }

    for (int i = 0; i < 10; i ++)
    {
        printf("%d\n", numbers[i]);
    }

    fclose(q2file);

}