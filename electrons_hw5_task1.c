/*
 * =====================================================================================
 *
 *       Filename:  electrons_hw5_task1.c
 *       	Usage:  ./electrons_hw5_task1.c
 *    Description:  Statics
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:37 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Sharon Dansie (), sharondansie@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
double AnnulusMoment(float r1, float r2);

/* Main Program */
int main(void)
{
	double AnnulusMoment(float, float);  //function

	float radnum1, radnum2, I;

	printf("Enter value for inner radius (r1): ");
	scanf("%f", &radnum1);

	printf("Enter value for outer radius (r2): ");
	scanf("%f", &radnum2);

	I = AnnulusMoment(radnum1, radnum2);

	printf("The second moment of inertia is %.2f\n", I);

	return 0;
}


/* Function Defenitions */
//functions header line
double AnnulusMoment(float r1, float r2)
{
	//second moment of inertia calculation
	return ((3.14159265359/4) * ((r2 * r2 * r2 * r2) - (r1 * r1 * r1 * r1)));
}

