#include <stdio.h>

int dataTypes()
{
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;
    sum = a + b + c;
    printf("The sum of a, b and c is %f.\n", sum);
    return 0;
}

int array()
{
    int average;
    int grades[10];
    grades[0] = 80;
    grades[1] = 81;
    grades[2] = 89;
    grades[3] = 90;
    average = (grades[0] + grades[1] + grades[2] + grades[3]) / 4;
    printf("The average of the 4 grades is: %d\n", average);
    return 0;
}

int main()
{
    printf("Hello, World!\n");
    dataTypes();
    array();
    return 0;
}
