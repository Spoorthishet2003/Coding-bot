//Compute the roots of a quadratic equation by accepting the coefficients

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	float fA,fB,fC,fDesc,fX1,fX2,fRealp,fImagp;
	int iState;

	printf("\n*************************************************************");
	printf("\n*\tPROGRAM TO FIND ROOTS OF A QUADRATIC EQUATION\t    *\n");
	printf("*************************************************************");

	printf("\nEnter the coefficients of a,b,c \n");
	scanf("%f%f%f",&fA,&fB,&fC);
	if(0 == fA)
	{
		printf("\nInvalid input, not a quadratic equation - try again\n");
		exit(0);
	}

	/*COMPUTE THE DESCRIMINANT*/
	fDesc = fB * fB - 4 * fA * fC;
	((0 == fDesc) ? (iState = 1):((fDesc > 0) ? (iState = 2) : (iState = 3)));
	switch(iState)
	{
		case 1:
			fX1 = fX2 = -fB/(2*fA);
			printf("\nRoots are equal and the Roots are \n");
			printf("\nRoot1 = %g and Root2 = %g\n",fX1,fX2);
			break;
		case 2:
			fX1 = (-fB+sqrt(fDesc))/(2*fA);
			fX2 = (-fB-sqrt(fDesc))/(2*fA);
			printf("\nThe Roots are Real and distinct, they are \n");
			printf("\nRoot1 = %g and Root2 = %g\n",fX1,fX2);
			break;
		case 3:
			fRealp = -fB / (2*fA);
			fImagp = sqrt(fabs(fDesc))/(2*fA);
			printf("\nThe Roots are imaginary and they are\n");
			printf("\nRoot1 = %g+i%g\n",fRealp,fImagp);
			printf("\nRoot2 = %g-i%g\n",fRealp,fImagp);
	}
	return 0;
}
