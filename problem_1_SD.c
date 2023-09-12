// SD of a population
//File name :problem_1_SD.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 3 : Problem 1
//Description : Write a function that receives 5 integers and returns the standard deviation of these numbers.
//              Call this function from main( ) and print the results in main( ).
//Last changed : 12-09-2023
#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int main() {
    int i;
    float data[10];
    printf("Enter 10 elements: ");
    for (i = 0; i < 10; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.6f", calculateSD(data));
    return 0;
}

float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}
