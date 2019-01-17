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
 *       Compiler:  gcc bmi.c -o bmi -lm
 *
 *         Author:  Jared Paskins (), Jaredpaskins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
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
    double userHeight;
    double userWeight;
    double userBMI;
    printf("Please enter your height in decimal inches.\n");
    scanf("%lf", &userHeight);
    printf("Please enter your weight in decimal pounds.\n");
    scanf("%lf", &userWeight);
    userBMI = (userWeight * BMIconst)/ pow (userHeight, 2);
    printf("Your BMI is %lf.\n", userBMI);
/*    if (userBMI >= 30);
        {
        printf("I recommend strenuous exercise and intensive dieting.\n");
        }
    else
        {
        if (userBMI < 30 && userBMI > 25);
        {
        printf("You could stand to lose some weight.\n");
        }
    else 
    {
        if (userBMI <= 25 && userBMI >= 18.5);
        {
        printf("Look at you, keeping trim and svelte. Keep it ups.\n");
        }
    else
    {
        printf("Dude, eat a sandwich once in a while.");
        }
        }
        }
        */
    return 0;
}
// Function Definitions


