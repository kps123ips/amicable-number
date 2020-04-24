#include<stdio.h>
int main()
{
	int i,a,b;
	int suma=0,sumb=0;
	printf("Enter First Number and Second Number");
	scanf("%d%d",&a,&b);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
		suma+=i;
	    }
	}
	for(i=1;i<b;i++)
	{
		if(b%i==0)
		{
		sumb+=i;
	    }
	}
	if((a==sumb) &&(b==suma ))
	{
	printf("%d and %d are Amicable Numbers ",a,b);
    }
	else
	{
	printf("%d and %d are not Amicable Numbers",a,b);
    }
	
}

