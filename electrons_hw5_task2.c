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
void MakeMilesKmTable(int miles, float ending, float increment);
/* Main Program */
int main(void)
{
	int mile;
	float ending;
	float increment;

	printf("Enter the starting mile distance: ");
	scanf("%d", &mile);
	printf("Enter the ending mile distance: ");
	scanf("%f", &ending);
	printf("Enter the distance increment: ");
	scanf("%f", &increment);

	MakeMilesKmTable(mile, ending, increment);

	return 0;
}


/* Function Defenitions */
void MakeMilesKmTable(int mile, float ending, float increment)
{
	printf("Miles   =   Kilometers\n");
	float kilometer;
	while(mile <= ending)
	{
		kilometer = mile * 1.61;
		printf("%3d      %10.2f\n", mile, kilometer);
		mile += increment;
	}
	return;
}
