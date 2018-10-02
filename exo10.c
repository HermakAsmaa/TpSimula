#include<stdio.h>


int LSFR(int number){
  
  int n[4]={0,1,1,1};
  int n2[4];
  int i,j,x;
 for(i=0;i<number;i++){
   printf("-----------------------------------------------------------\n");
    if(n[3]==1 && n[2]==0 || n[3]==0 && n[2]==1)
        n2[0]=1;
    else
        n2[0]=0;
    for(j=1;j<4;j++){
       n2[j]=n[j-1];
     }
    /*
    for(j=0;j<4;j++){
       printf("%d\n",n2[j]);
      }
    */
    x=2^0*n2[3]+2^1*n2[2]+2^2*n2[1]+2^3*n2[0];
     printf("%d\n", x);
     for(j=0;j<4;j++){
       n[j]=n2[j];
     }
    
 }
   
}


int main(){
   LSFR(50);
}
