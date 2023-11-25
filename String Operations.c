// To implement string operations such as compare, concatenate, and find string length Using the parameter passing techniques.

#include<stdio.h>
#include<stdlib.h>

int fnMyStrCmp(const char*, const char*);
void fnMyStrCat(char*, const char*);
int fnMyStrLen(const char*);

int main()
{
	int iChoice;
	char acStr1[30], acStr2[30];
	int iLen;
	printf("\n=====================\n");
	printf("STRING OPERATIONS");
	printf("\n=====================\n");
	for(;;)
	{
		printf("\nEnter two strings\n");
		printf("\nString 1 : "); 	scanf("%s", acStr1);
		printf("\nString 2 : "); 	scanf("%s", acStr2);
		printf("\n1.String Compare\n2.String Concatenate\n3.String Length");
		printf("\nEnter your choice : ");	scanf("%d", &iChoice);	
		switch(iChoice)
		{
			case 1: if(fnMyStrCmp(acStr1, acStr2) == 0)
						printf("\nTwo strings are equal");
					else if(fnMyStrCmp(acStr1, acStr2) > 0)
						printf("\nString %s is greater than String %s", acStr1, acStr2);
					else
						printf("\nString %s is greater than String %s", acStr2, acStr1);
					break;
					
			case 2:	fnMyStrCat(acStr1, acStr2);
					printf("\nConcatenated String is\n%s", acStr1);
					break;
			
			case 3:	iLen = fnMyStrLen(acStr1);
					printf("\nLength of String %s is %d\n", acStr1, iLen);
					iLen = fnMyStrLen(acStr2);
					printf("\nLength of String %s is %d\n", acStr2, iLen);
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

int fnMyStrCmp(const char *s1, const char *s2)
{
	int k;
	for(k=0; s1[k] == s2[k] && s1[k]!='\0'&& s2[k]!='\0'; k++);

	if( k==(fnMyStrLen(s1)) && k==(fnMyStrLen(s2)) )	
	{
		return 0;
	}
	else if(s1[k] > s2[k])		
	{
		return 1;
	}
	else 	
	{
		return -1;
	}	
}

void fnMyStrCat(char *dest, const char *src)
{
	int dest_len, i;
	dest_len = fnMyStrLen(dest);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
}

int fnMyStrLen(const char *str)
{
	int iLen;
	for(iLen=0; str[iLen] != '\0'; iLen++);
	return iLen;
}
