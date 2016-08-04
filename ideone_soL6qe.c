#include <stdio.h>

int main(void) {


	int i,j,d,n,a[10],temp;
	scanf("%d",&d);//input
	n=0;
	while(d>0)
	{
		a[n]=d%10;
		d=d/10;
		n++;
	}

	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	for(i=0;i<n;i++)
	d=d*10+a[i];
	d=d/1000;
	printf("%d",d);//output

	return 0;
}