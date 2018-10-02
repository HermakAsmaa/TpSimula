#include<stdio.h>
#include<stdlib.h>

#define MAX 1000

 void coin_tossing(int nombre){
	 double pieces[MAX];
	 int i=0;

         for(i=0;i<nombre;i++){
	    pieces[i] =(double)rand()/(double)RAND_MAX;
            printf("  %f\n", pieces[i]);
            if(pieces[i]<0.5)
	      {
                pieces[i]=0;
              }
	    else{
	      pieces[i]=1;
            }
            printf("  %f\n",pieces[i]);

   }
 }
int main(){
	coin_tossing(10);
	coin_tossing(100);
	coin_tossing(1000);
}
