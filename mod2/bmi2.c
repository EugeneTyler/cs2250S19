/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:29 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi
 *
 *         Author:  Jared Paskins (), Jaredpaskins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
// BMI = 703 * weight / height squared
// 1) get weight and height
// 2) calculate BMI
// 3) print BMI
    const float BMIconst = 703;
    float userHeight;
    float userWeight;
    float userBMI;
    printf("Please enter your height in decimal inches.\n");
    scanf("%f", &userHeight);
    printf("Please enter your weight in decimal pounds.\n");
    scanf("%f", &userWeight);
    userBMI = (userWeight * BMIconst)/ (userHeight * userHeight);
    printf("Your BMI is %f.\n", userBMI);
    return 0;
}
// Function Definitions


