#include<stdio.h>
int main()
{
	int r,z,a[100],b[100],c[100],d[100],i,j,k,o,n,m,l=0,p,q,g,v,h=0;
	printf("Enter no. elements =");
	scanf("%d",&n);
	printf("Enter elements =\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter no. elements =");
	scanf("%d",&m);
	printf("Enter elements =\n");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		c[k++]=a[i];
	}
	for(j=0;j<m;j++)
	{
		c[k++]=b[j];
	}
	q=n+m;
	for(k=0;k<q;k++)
	{
	for(p=k+1;p<q;p++)
	{	
		if(c[k]==c[p])
		{
			for(l=p;l<q;l++)
			{
				c[l]=c[l+1];
			}
			l--,q--;
		}
	}
	}
	for(l=0;l<q-1;l++)
	{
	for(v=0;v<q-1;v++)
	{
		if(c[v]>c[v+1])
		{
			g=c[v];
			c[v]=c[v+1];
			c[v+1]=g;
		}	
	}
	}
	printf("Union\n");
	for(l=0;l<q;l++)
	{
		printf("%d ",c[l]);
	}
	printf("\n");
/*Intersection*/
	o=0;
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{	
		if(a[i]==b[j])
		{
			h++;
			d[o++]=a[i];
		}
	}
	}
	for(o=0;o<h-1;o++)
	{
	for(z=0;z<h-1;z++)
	{
		if(d[z]>d[z+1])
		{
			r=d[z];
			d[v]=d[z+1];
			d[z+1]=r;
		}	
	}
	}
	printf("Intersection\n");
	for(o=0;o<h;o++)
	{
		printf("%d ",d[o]);
	}
}
