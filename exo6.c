#include<stdio.h>
#include <stdlib.h>

void Congruential(int x   ,int c,int a,int m,int number)
{
  int i=0;            
  for(i=0;i<number;i++){
    x=(int)(a*x+c)%m;
    printf(" %d\n",x);
  }
}

void floatCongruential(int x   ,int c,int a,int m,int number)
{
  int i=0;            
  for(i=0;i<number;i++){
    x=(int)(a*x+c)%m;
    printf(" %f\n",(double)x/m);
  }
}

int main(){
  printf("Comgruential");
  Congruential(5,1,5,16,32);
  printf("Float Comgruential\n");
  floatCongruential(5,1,5,16,32);
  printf("Comgruential : x=7 ,c=4 , a=2, m=20 , number=32");
  Congruential(7,4,2,20,32);
  printf("Comgruential");
  Congruential(12,12345,1103515245,2^32,32);
}
