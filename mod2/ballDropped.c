/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *
 *    Description:  calculates height based on fall time.
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:07:04 AM
 *       Revision:  none
 *       Compiler:  gcc ballDropped.c -o ballDropped -lm
 *
 *         Author:  Jared Paskins (), Jaredpaskins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
float initialVelocity;
float fallTime;
float height;
const float GRAVITyCONST = 9.81;
// Function Prototypes

// Main Function
int main()
{
    printf("How long did the object fall?\n");
    scanf("%f", &fallTime);
    height = (GRAVITyCONST / 2) * pow(fallTime, 2.0);
    printf("The height the object fell from is %f\n", height);
     // Formula d = 1/2 a t^2 = 0.5gt^2
    return 0;
}
// Function Definitions


