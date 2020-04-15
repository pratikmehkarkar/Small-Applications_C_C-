#include <stdio.h>

void bills(float tabs[]);
int purchases(float tabs[]);

int main(void)
{ 
  
  float tabs[7]= {0.0};
  int count;
  printf("The Tab - A Snack Billing Program");
  count = purchases(tabs);
  
  if (count > 0) 
  {
    bills(tabs);
  }
   return 0;
}

//function purchases allows to enter two data items for each purchase.
int purchases(float tabs[])
{ 
   int id=0;
   int count = 0;
   float bill = 0.0;
   printf("When prompted, enter an ID# and price for one purchase.\nTo end, enter an ID# outside range 0..6 \n");
 
  while(id>=0 || id<=6)
  {
       scanf("%d",&id);
       if(0<=id && id<=6)
       {
          scanf("%f",&bill);
         if(bill > 0.00 && bill <= 2.00)
         {
           tabs[id]+=bill;
         }
         else
         {
           puts("Data set Ignored; price must be > 0.00");
           continue;
         }
        count++;
       }
       else
       {
         break;
       }
   }
  printf("\n%d purchases were entered\n",count);
  return count-1;
}
void bills(float tabs[]){
 
    int id;
 
   for(id=0;id<7;id++)
   {
    printf("\nMonthly Snack Bar Bill for ID# %d: $   %.2f\n", id, tabs[id]);
    printf("\tThanks for prompt payment.\n");
   } 
}
