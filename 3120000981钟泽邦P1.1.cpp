#include<stdio.h>
int main(void)
{
	int i,j;
	int a [3] [3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			a[i] [j]=i+j;
    for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	} 
	return 0;
} 
 
