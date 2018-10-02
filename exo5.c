#include<stdio.h>
#include<stdlib.h>

void dice_Simulation(int number){
  int i=0;
  double piece=0;
  for(i=0;i<number;i++){
   piece=rand() % 6 + 1;
   printf(" %f\n",piece);
  }
}

int main(){
  dice_Simulation(100);
  dice_Simulation(1000);
 
}
