#include<stdio.h>
int main()
 {
 int i,j,temp,a[20],n,min;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
 min=j;
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
printf("After sorting:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}


