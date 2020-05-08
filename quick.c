#include<stdio.h>
     void quick(int a[20],first,last)
        {
           int i,j,temp;
if(first>last)
{
     pivot=first;
     i=first;
     j=last;
while(i<j)
{
while(a[i]<a[pivot]&& i<last)
i++;
while(a[j]>a[pivot]&& j>first)
j--;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[pivot];
a[pivot]=a[j];
a[j]=temp;
quick(a,first,j-1);
quick(a,last,j+1);
}
}
int main()
{
int a[10],i,j,n;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,0,n-1);
printf("After sorting:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
