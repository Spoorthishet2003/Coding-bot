//C Program to display the printing pattern by reading the number of rows as input

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iNum, iSp_cnt, iNum_cnt, iVal, i, j, k;
    printf("Enter the number of rows : ");
    scanf("%d", &iNum);
    iSp_cnt = iNum - 1;
    iNum_cnt = 1;

    for(i=0;i<iNum;i++)
    {
        iVal = 1;
        for(j=0;j<iSp_cnt;j++)
        {
            printf("  ");
        }
        for(k=0;k<iNum_cnt;k++)
        {
            if(k <= iNum_cnt/2)
            {
                printf("%d ", iVal);
                iVal++;
            }
            else
            {
                iVal--;
                printf("%d ", iVal-1);
            }
        }
        printf("\n");
        iSp_cnt--;
        iNum_cnt += 2;
    }
    return 0;
}
