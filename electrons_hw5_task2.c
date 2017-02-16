/*
 * =====================================================================================
 *
 *       Filename:  electrons_hw5_task2.c
 *       	Usage:  ./electrons_hw5_task2.c
 *    Description: Miles to Meters 
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:43 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Kurt Weloth (), kurtweloth@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
void MakeMilesKmTable(float miles, float ending, float increment);
/* Main Program */
int main(void)
{
	float mile;
	float ending;
	float increment;

	printf("Enter the starting mile distance: ");
	scanf("%f", &mile);
	printf("Enter the ending mile distance: ");
	scanf("%f", &ending);
	printf("Enter the distance increment: ");
	scanf("%f", &increment);
	printf("Miles   =   Kilometers\n");

	MakeMilesKmTable(mile, ending, increment);

	return 0;
}


/* Function Defenitions */
void MakeMilesKmTable(float mile, float ending, float increment)
{
	float kilometer;
	while(mile <= ending)
	{
		kilometer = mile * 1.61;
		printf("%5.2f       %10.2f\n", mile, kilometer);
		mile += increment;
	}
	return;
}
