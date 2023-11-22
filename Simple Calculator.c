//Simulation of a simple Calculator

#include<stdio.h>
#include<stdlib.h>
#include<math>

int main()
{
	int iChoice, iOperand1, iOperand2;
	char cOperator;
	
	for(;;)
	{
		printf("\nEnter the arithmetic expression(Do not add spaces in the expression)\n");
		scanf("%d%c%d", &iOperand1, &cOperator, &iOperand2);
		switch(cOperator)
		{
			case '+': 	printf("\nResult = %d", iOperand1 + iOperand2);
						break;
					
			case '-':	printf("\nResult = %d", iOperand1 - iOperand2);
						break;
			
			case '*':	printf("\nResult = %d", iOperand1 * iOperand2);
						break;
						
			case '/':	printf("\nResult = %g", (float)iOperand1 / iOperand2);
						break;
			case '%':	printf("\nResult = %d", iOperand1 % iOperand2);
						break;
					
		}
		printf("\nPress 1 to continue and 0 to quit : ");
		scanf("%d", &iChoice);
		if(0==iChoice)
		{
			break;
		}
	}
	return 0;		
}
