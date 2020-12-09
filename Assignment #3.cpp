/*Ezigbo Ugochukwu 9/17/2020 Assignment #3
This program computes the natural period of a mass-spring system*/

#include <stdio.h>
#include <math.h>

#define pi 3.14159265358979
int main(void)
{
	/*declare variables*/
	int m, k1, k2;
	float T;
	
	/*get input data*/
	printf("Enter mass");
	scanf("%d", &m);
	
	printf("Enter first stiffness");
	scanf("%d", &k1);
	
	printf("Enter second stiffness");
	scanf("%d", &k2);
	
	/*compute*/
	T=2*pi*(sqrt(1.0*m/(k1+k2)));
	
	/*display*/
	printf("The natural period of the mass-spring system is %.2f. \n", T);

	return 0;
}
/*Enter mass10
Enter first stiffness3
Enter second stiffness48
The natural period of the mass-spring system is 2.78.

Enter mass20
Enter first stiffness2
Enter second stiffness16
The natural period of the mass-spring system is 6.62.*/
