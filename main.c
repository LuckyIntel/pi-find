/*
    Formula : https://en.wikipedia.org/wiki/Leibniz_formula_for_%CF%80
    Leibniz Formula

    This code is just an example.
    If number is even we just decrease it by 1.
*/
#include <stdio.h> // Standard lib
#include <math.h> // Math lib

float calculatePI(int precision)
{
    /*
        Series of numbers.
        pi/4 = 1 - 1/3 + 1/5 - 1/7... + 1/(index * 2) + 1
    */
    float pi = 0;
    int calculation = 1;

    for (int i = 0; i < precision; i++)
    {
        pi += (float)(calculation * 1.0 / ((i * 2) + 1));
        calculation *= -1;
    };
    
    return pi;
};

int main()
{
    int digitNum;
    int randInp;

    printf("Type how many precision you want to stick with in (0 if unlimited) : ");
    scanf("%d", &digitNum);
    if (digitNum == 0) digitNum = (int)INFINITY;
    else if (digitNum % 2 == 0) digitNum--;
    
    printf("Calculating...\n");
    const float pi = calculatePI(digitNum) * 4;
    
    printf("pi (first %d decimals) : %f\nType anything and press enter to leave.", digitNum, pi);
    scanf("%d", &randInp);

    return 0;
};