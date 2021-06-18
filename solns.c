/* Enter your solutions in this file */
#include <stdio.h>
#include <limits.h>
float average(int A[], int size)
{   int sum=0;
    for(int i=0;i<size;++i)
    sum+=A[i];
    float avg=(float)(sum/size); 
    return avg;
}
int factors(int size , int A[])
{
  
  
}
int max(int A[], int size)
{
  int maxi=intmin;
  for(int i=0;i<size;++i)
      if(A[i]>maxi)
        maxi=A[i];
 return maxi;
}
int min(int A[], int size)
{
  int mini=intmax;
  for(int i=0;i<size;++i)
      if(A[i]<mini)
          mini=A[i];
  return min;
}
int mode(int A[], int size )
{
  
  
  
  
}
