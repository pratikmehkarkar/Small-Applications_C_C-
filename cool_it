#include <stdio.h>
#include <ctype.h>

#define ABS_ZERO -273.15

void get_temps(double *temp_cold,double *temp_hot);
double Cels2Kelvin(double temperature);
void cop(double tck,double thk,double *cop_ref,double *cop_pump);

int main(void) 
{
  char menu_option='\0',initials;
  double temp_cold,temp_hot;
  double tck,thk;
  double cop_ref ,cop_pump;
  printf("Cool it\n");
    do
    {
    printf("Refrigerator (R),Heat pump (H),or Quit (Q)?");
    scanf(" %c",&menu_option);
    menu_option = tolower(menu_option);
    
    //menu-driven logic is implemented by using switch case
    switch(menu_option)
    {
    case 'r':
        //get_temps() function call
        get_temps(&temp_cold,&temp_hot);
        //Cels2Kelvin() function call
        tck = Cels2Kelvin(temp_cold);
        thk = Cels2Kelvin(temp_hot);
        //cop() function call
        cop(tck,thk,&cop_ref,&cop_pump);
        printf("%g\n",cop_ref);
        break;
    case 'h':
        get_temps(&temp_cold,&temp_hot);
        tck = Cels2Kelvin(temp_cold);
        thk = Cels2Kelvin(temp_hot);
        cop(tck,thk,&cop_ref,&cop_pump);
        printf("%g\n",cop_pump);
        break;
    case'q':
        break;
    default:
        printf("Error: Please choose R,H or Q.\n");
        break;
    }
    }while(menu_option !='q');
  return 0;
}

void get_temps(double *temp_cold,double *temp_hot)
{
  double t_cold,t_hot;
  double temp = 0.0;
  //taking input for cold reservoir
  printf("Temperature of cold reservoir (Celsius): ");
  scanf("%lg",temp_cold);
  while(*temp_cold < ABS_ZERO)
  {
    printf("Error: Temperature must be >= -273.15.\n");
    printf("Temperature of cold reservoir (Celsius): ");
    scanf("%lg",temp_cold);

  }
  //taking input for hot reservoir
  printf("Temperature of hot reservoir (Celsius): ");
  scanf("%lg",temp_hot);
  while(*temp_hot < ABS_ZERO)
  {
    printf("Error: Temperature must be >= -273.15.\n");
    printf("Temperature of hot reservoir (Celsius): ");
    scanf("%lg",temp_hot);
  }
  //swapping Temp hot < Temp cold
  if(*temp_hot < *temp_cold)
  {
    temp = *temp_hot;
    *temp_hot = *temp_cold;
    *temp_cold = temp;
  }
}
double Cels2Kelvin(double temperature)
{
  return temperature - ABS_ZERO;
}
void cop(double tck,double thk,double *cop_ref,double *cop_pump)
{
  *cop_ref = tck/(thk - tck);
  *cop_pump = thk/(thk - tck);
}
