#include <stdio.h>

int main(void) {
  float m1,m2,m3,m4,m5;
  scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
  float aggr = m1+m2+m3+m4+m5; //aggregate marks
  float percnt = (aggr/500)*100;
  printf("Percentage = %f\nAggregate marks= %f",percnt, aggr);


  return 0;
}
