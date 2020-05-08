#include<stdio.h>
int main()
{
int a[10],i,j,temp,n;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements into the array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=1;i<n;i++)
{
temp=a[i];
for(j=i;j>0 && temp<a[j-1];j--)
{
a[j]=a[j-1];
}
a[j]=temp;
}
printf("After sorting:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
