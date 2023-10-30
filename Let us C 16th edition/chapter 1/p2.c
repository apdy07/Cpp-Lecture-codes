#include<stdio.h>
int main(){
  float dist;
  printf("Enter the distance between 2 cities(in km): ");
  scanf("%f",&dist);
  float meters = dist*1000;
  float feet = meters*3.28;
  float inches = feet*12;
  float centimeters = meters*100;
  printf("Distance in meteres: %f\n",meters);
  printf("Distance in feet: %f\n",feet);
  printf("Distance in inches: %f\n",inches);
  printf( "Distance in centimeters: %f\n",centimeters);
  return 0;
}
