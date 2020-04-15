//This program takes a number as input and prints the equivalent value in binary notation.

#include <stdio.h>
int main(void)
{           
  double b_arr[100];
  int input;
  int rhdigit;
  int power;
  int s = 1;
  
  do
  {
    printf("Enter an integer in base 10, we will print it in binary:");
    scanf("%i",&input);
    printf("\n");
    if(input<0)
    {
      printf("Error: the number must be >=0 \n");
      continue;
     }
    else if(input==0)
    {
      printf("In base 10 your number is 1; in binary it is: 0");
    }
    else if(input>0)
    {
      do
      {
          printf("In base 10 your number is 1; in binary it is:");
          power = 0;
          while(input!=0){
          b_arr[power]= input % 2;
          input = input/2;
          ++power;
      }
      break;
      }
      while(input>0);
 
    for(rhdigit= power-1; rhdigit>=0; --rhdigit)
    {
      printf("%g",b_arr[rhdigit]);
    }
  }
    printf("\n\n\t\tEnter 1 to continue , 0 to quit:  ");
    scanf("%i",&s);
    if(s == 0) 
    break;
  }
  while(s != 0);
  return 0;
}
