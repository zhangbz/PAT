#include<stdio.h> 
#include<stdlib.h>

int main()
{
    int k;
	int *data;
	int i;
	int ThisSum, MaxSum, FirstNum, LastNum, tempFir, tempLas;
	
	while(scanf("%d", &k) != EOF)
	{
	    data = (int *)malloc(k * sizeof(int));
		for(i = 0; i < k; i++)
		{
		    scanf("%d", &data[i]);
		}
		
		ThisSum = 0;
		MaxSum = 0;
		FirstNum = 0;
		LastNum = k - 1;
		tempFir = 0;
		tempLas = 0;
		
		for(i = 0; i < k; i++)
		{
		    if(ThisSum >= 0)
			{
			    ThisSum += data[i];
				tempLas = i;
			}
			else
			{
			    ThisSum = data[i];
			    tempFir = i;
				tempLas = i;
			}
			if(ThisSum > MaxSum  || ((LastNum == k - 1)&&(ThisSum == 0)))
			{
			    MaxSum = ThisSum;
				FirstNum = tempFir;
				LastNum = tempLas;
			}
		}
		printf("%d %d %d", MaxSum, data[FirstNum], data[LastNum]);
	}
}