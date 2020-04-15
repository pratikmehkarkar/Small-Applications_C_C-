#include <stdio.h>
void sums(float a[], int N, float *sum_of_positive, float *sum_of_negative, int *positive_total, int *negative_total);
 
int main(void)
{
  float array[10];
  char user_choice;
  float sum_of_positive , sum_of_negative;  
  int positive_total = 0, negative_total = 0;
  int i,count=0; 
  printf("Positives and Negatives\n\n"); 
  do
  {
    printf("Enter up to 10 real numbers, '0' to quit: ");
    for( i = 0; i < 10; ++i)
    {
       float k;
       scanf("%f",&k);
       if(k == 0) break;
       array[i]=k;
    }
    
    count=i;
    printf("\n\t%i numbers were entered",count);
    sums(array,count,&sum_of_positive,&sum_of_negative,&positive_total,&negative_total);
   
   
   if(positive_total>0)
   printf("\n\t Positives:\t\t Sum = %3g\tCount= %2i\t Average = %3g",sum_of_positive,positive_total,sum_of_positive/positive_total);
   else
   printf("\n\t Positives:\t\t Sum = %3g\t\tCount= %2i\t-------------\n ",sum_of_positive,positive_total);
   if(negative_total>0)
   printf("\n\t Negatives:\t\t Sum = %3g\tCount= %2i\t Average = %3g\n",sum_of_negative,negative_total,sum_of_negative/negative_total);
   else
   printf("\n\t Negatives:\t\t Sum = %3g\t\tCount= %2i\t-------------\n",sum_of_negative,negative_total);
      
   printf("\n\nMore(y/n):  ");
   scanf(" %c",&user_choice);
   if(user_choice == 'n') break;
  
  }while(user_choice == 'y');
 
return 0;
 
}
 
void sums(float a[], int N, float *sum_of_positive, float *sum_of_negative, int *positive_total, int *negative_total)
 
{
      *sum_of_positive=0.0;
      *sum_of_negative=0.0;
      *positive_total=0;
      *negative_total=0;
  
      int i;
  
      for(i=0;i<N;++i){
        if(a[i] > 0){
          ++(*positive_total);
          *sum_of_positive+=a[i];
        }
        else{
          ++(*negative_total);
          *sum_of_negative+=a[i];
        }
      }
}
