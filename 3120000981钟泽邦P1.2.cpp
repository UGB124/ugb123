#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
	double s=clock();
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		int m1[5][5]={0},m2[5][5]={0},m3[5][5]={0};
		m1[0][0]=a,m1[0][1]=b,m1[0][2]=c;
		for(int i=0;i<3;i++)
			scanf("%d",&m1[1][i]);
		for(int i=0;i<3;i++)
			for(int j=0;j<2;j++)
				scanf("%d",&m2[i][j]);
		for(int i=0;i<2;i++)
			for(int j=0;j<2;j++)
				for(int k=0;k<3;k++)
					m3[i][j]+=m1[i][k]*m2[k][j];
		printf("%d %d\n%d %d\n",m3[0][0],m3[0][1],m3[1][0],m3[1][1]);
		printf("And time used=%.3fs\n",double(clock()-s)/CLOCKS_PER_SEC);	
	}
	return 0;
}  
