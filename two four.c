#include<stdio.h>
void main()
{
  int s,b,num[50],i,k;
  printf("enter the limit");
  scanf("%d",&b);
  printf("enter the number");
  for(i=0;i<b;++i)
  {
      scanf("%d",&num[i]);
  }
  for(i=0;i<b;++i)
  {
      for(k=i+1;k<b;++k)
  {
      if(num[i]>num[k])
  {
      s=num[i];
      num[i]=num[k];
      num[k]=s;
  }
  }
  }
  for(i=0;i<b;++i)
  printf("\n %d",num[i]);
}
