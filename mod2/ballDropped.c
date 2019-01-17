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
float singleLength;
float doubleLength;
float anchorDistance;
const float GRAVITyCONST = 9.81;
const float KNOtLENGTH = 3;
int existingAnchors;

// Function Prototypes

// Main Function
int main()
{
    printf("How long did the object fall?\n");
    scanf("%f", &fallTime);
    height = (GRAVITyCONST / 2) * pow(fallTime, 2.0);
    printf("The height the object fell from is %f m.\n", height);
    printf("Are there existing anchors? (1/0)\n");
    scanf("%d", &existingAnchors);
    switch(existingAnchors) {
        case 1 :
             printf("How far back are the anchors?\n");
             scanf("%f", &anchorDistance);
             singleLength = height + anchorDistance + KNOtLENGTH;
             printf("For a single strand rappel you will require %f m of rope\n",
                     singleLength);
             doubleLength = height * 2 + anchorDistance * 2;
             printf("For a double strand rappel you will require %f m or rope\n",
                     doubleLength);
             break;
        case 0 :
             printf("How far back is the object you intend to tie off on?\n");
             scanf("%f", &anchorDistance);
             singleLength = height + anchorDistance + KNOtLENGTH;
             printf("For a single strand rappel you will require %f m of rope\n",
                     singleLength);
             doubleLength = 2 * (height + anchorDistance + KNOtLENGTH);
             printf("For a double strand rappel you will require %f m of rope\n",
                     doubleLength);
             break;
        default :
             printf("Are there anchors of aren't there? 1 for yes, 0 for no");
    }
    return 0;
}
// Function Definitions


