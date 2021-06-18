/* Enter your solutions in this file */
#include <stdio.h>
#include <limits.h>
float average(int A[], int size)
{   int sum=0;
    for(int i=0;i<size;++i)
    sum+=A[i];
    float avg=(float)(sum)/size; 
    return avg;
}

 int factors(int n, int A[])
{
 
  int s = n, k = 0, l = 0, P[n / 2], i;
  P[0] = 0;
  P[1] = 0;
  for (int i = 2; i < n / 2; ++i)
    {
      P[i] = 1;
      for (int j = 2; j <= i / 2; ++j)
	if (i % j == 0)
	  {
	    P[i] = 0;
	    break;
	  }
          }
 // printf ("\n Prime factors");
  while (n > 1)
    { //printf("This is outer loop");
      i = 2;
      while ((i < n / 2))
	   {  //printf("\nThis is inner loop %d ",i);
	      if (P[i] && n % i == 0)
	    {
	      A[k++] = i;
	      n /= i;
	      printf ("\n i:%d", i);
              while(n%i==0)
              {A[k++]=i;
               n/=i;}
	    } 
       	      ++i;
	   } //printf("\n& %d",n);
     if(n!=1)
     {A[k++]=n;n=0; 
      break;}
     ++i;
    }
  //printf ("%d ", k);
  return k;
}

int max(int A[], int size)
{
  int maxi=-32655;
  for(int i=0;i<size;++i)
      if(A[i]>maxi)
        maxi=A[i];
 return maxi;
}
int min(int A[], int size)
{
  int mini=64000;
  for(int i=0;i<size;++i)
      if(A[i]<mini)
          mini=A[i];
  return mini;
}

int mode(int A[], int size )
{    int P[size],k=0;
     for(int i=0;i<size;++i)
     {     P[i]=0;
	     for(int j=i+1;j<size;++j)
        {  if (A[j]==A[i] && int(A[i])!=42)
           {   A[j]='*'; P[i]++;
                  }
           }
           }
      int maxi=-32655;
  for(int i=0;i<size;++i)
      if(P[i]>maxi)
        maxi=i;
   
   return A[maxi]; 
}
