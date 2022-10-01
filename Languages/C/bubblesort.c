#include<stdio.h>.
int main()
{
  int a[]={3,5,2,1};
  int i,j,temp;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
      for(i=0;i<n;i++)
      {
        printf("Sorted array=%d",a[i]);
      }
  
}
