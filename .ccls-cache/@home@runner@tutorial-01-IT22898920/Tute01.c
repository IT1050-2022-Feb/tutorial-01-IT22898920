/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main(void) {
  
  int mark1;
  int mark2;
  float avg=0.0;
  
  printf("Enter subject 1 mark :") ;
  scanf("%d", &mark1) ;
  printf("Enter subject 2 mark :") ;
  scanf("%d", &mark2) ;

  avg = (mark1+mark2)/2.0 ;

  printf("average is :%.2f",avg ) ;
  
  return 0;
}

