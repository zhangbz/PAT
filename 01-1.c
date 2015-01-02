#include <stdio.h>

int main()
{
    int i;
    int k;
	int a[100000];
	scanf("%d", &k);
	for(i = 0; i < k; i++)
	{
	    scanf("%d", &a[i]);
	}
	printf("%d", MaxSubseqSum(a, k));
    return 0;
}

int MaxSubseqSum(int a[], int n)
{
    int ThisSum, MaxSum;
	int i;
	ThisSum = MaxSum = 0;
	for(i = 0; i < n; i++)
	{
	    ThisSum += a[i];
		if(ThisSum > MaxSum)
		    MaxSum = ThisSum;
		else if(ThisSum < 0)
		    ThisSum = 0;
	}
	return MaxSum;
}