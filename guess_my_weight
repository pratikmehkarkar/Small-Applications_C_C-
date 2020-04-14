#include <stdio.h>
#include <math.h>

//function to take user inputs
int user_input(float w1[],float w2[]); 

// function calculates abs. error & relative error
void function_calculate(float w1[], float w2[], int return_index); 

int main(void)
{
  //array for real & estimated weight. Here w1 stands for Real Weight & w2 stands for Estimated Weight
  float w1[100] = {0.00}, w2[100] = {0.00}; 
  int return_index;

  puts("Guess My Weight");
  printf("\n");
  puts("When prompted please enter two weights > weight estimated");
  puts("Enter 0 0 to quit.");
  printf("\n");
  
  //here the next function will get know how many values has been entered by user
  return_index = user_input(w1,w2);
  function_calculate(w1,w2,return_index);

  return 0;
}

int user_input(float w1[],float w2[])
{
  float weight_real,weight_estd;
  int index = 1;
  int i;
  int n = 100;

  for(i = 0 ; i < n ; i++)
  {
    printf("\t%d>",index);
    scanf("%f",&weight_real);
    scanf("%f",&weight_estd);
    if (weight_real == 0 && weight_estd == 0)
    {
      //the program will stop taking inputs if user enters 0 0
        break;
    }
    w1[i] += weight_real;
    w2[i] += weight_estd;
    //the index will increase on every user input
    index++; 
  }
  //printf("\n");
  printf("%d valid datasets have been entered.\n",i);

  return index - 1;
}

void function_calculate(float w1[], float w2[], int return_index)
{
  float average_abs_error, average_rel_error;
  float abs_err[100];
  float rel_err[100];
  int i;
  float var,sum1,sum2;

  printf("\n");
  puts("Weight Estimate Abs. Err Rel. Err");
  puts("---------------------------------");

  for(i = 0 ; i < return_index ; i++)
  {
    //Formula No.1 > Eabs = Wguess - Wreal
    abs_err[i] = w2[i] - w1[i];

    //Formula No.2 > Erel = 100 * Eabs/Wreal
    var = abs_err[i]/w1[i];
    rel_err[i] = var * 100;

    printf("%3.0f %6.0f %10.0f %11.2f%%\n",w1[i],w2[i],abs_err[i],rel_err[i]);

    //sum1 stands for Abs. Err Average and sum2 stands for Rel. Err Average
    sum1 += fabs(abs_err[i]);
    sum2 += fabs(rel_err[i]);
  }
  average_abs_error = sum1 / return_index;
  average_rel_error = sum2 / return_index;

  puts("---------------------------------");
  printf("Error Averages: %3.1f lbs %3.2f %%\n",average_abs_error,average_rel_error);
}
