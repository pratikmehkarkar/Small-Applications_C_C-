//pointer and refrent
#include<stdio.h>

int main(void)
{
  
  int ara[] = {11,13,17,19,23,29,31};
  int *pt = ara;
 
  printf("address of pt:\t\t %p contents:\t %p\n",&pt, pt);
  pt = ara;
  printf("address of ara[0]:\t %p contents:\t %d\n",&ara[0],ara[0]);
  pt = ara;
  printf("address of (*pt+3):\t -------- contents:\t %d\n",(*pt + 3));
  pt = ara;
  printf("address of *pt:\t\t %p contents:\t %d\n",&*pt,*pt);
  pt = ara;
  printf("address of (pt[3]):\t %p contents:\t %d\n",&(pt[3]),(pt[3]));
  pt = ara;
  printf("address of *&pt:\t %p contents:\t %p\n",&*&pt,*&pt);
  pt = ara;
  printf("address of *pt[3]:\t -------- contents:\t --------\n");
  pt = ara;
  printf("address of &*pt:\t -------- contents:\t %p\n",&*pt);
  pt = ara;
  printf("address of *(pt+3):\t %p contents:\t %d\n",&(*(pt+3)),(*(pt+3)));
  pt = ara;
  printf("address of (*pt++):\t %p contents:\t %d\n",&(*pt++),(*pt++));
  pt = ara;
  printf("address of *(pt++):\t %p contents:\t %d\n",&*(pt++),*(pt++));
  pt = ara;
  printf("address of (*pt)++:\t -------- contents:\t %d\n",(*pt)++);
 
  //Printing List-1 
  printf("\tList 1: Illegal Pointer Expressions.\n");
  pt=ara;
  printf("address of (*pt+3):\t -------- \tcontents:\t %i\n",(*pt + 3));
  printf("address of *pt[3]:\t -------- \tcontents:\t --------\n");
  printf("address of &*pt:\t -------- \tcontents:\t %p\n",&*pt);
  printf("address of (*pt)++:\t -------- \tcontents:\t %i\n",((*pt)++));
  
  //Printing List-2
  printf("\n\tList 2: Identical Meaning Expressions\n");
 
  //Printing List-3
  printf("\n\tList 3: Pointer value change expressions\n");
 
  //Printing List-4
  printf("\n\tList 4: Integer value change expressions\n");
 
}
