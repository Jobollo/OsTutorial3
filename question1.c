#include <stdlib.h>
#include <stdio.h>
int main(void)
{

    char name[127];
    char age[127];
    char height[127];

    printf("Enter your first name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%s", age);

    printf("Enter your height in centimetres: ");
    scanf("%s", height);

    printf("Name: %s, Age: %s, Height: %s cm\n", name, age, height);


}