Problem Statement:
Pointer Referent

Write a program that creates the integer array int ara[] = {11, 13, 17, 19, 23, 29, 31}.
Also create an integer pointer pt and make it point at the beginning of the array.
Write printf() statements that will print the address and contents of both ara[0] and pt. Use this format: printf( "address of pt: \t %p contents:\t %p\n", &pt, pt );
Then write 10 similar printf() statements following the same format to print the address and contents of the slots designated by the following expressions:
> (*pt+3)
> *pt
> (pt[3])
> *&pt
> *pt[3]
> &*pt
> *(pt+3)
> (*pt++)
> *(pt++)
>( *pt)++.
Some of these will cause compile-time errors when printing the address field, the contents field, or both; in such cases,
delete the illegal expression and print dashes instead of its value.
When the program finally compiles and runs, use the output to complete the following table, grouping together items that have
the same memory address.

Finally, make four lists:
illegal pointer expressions
expressions that have identical meanings
expressions that change pointer values
expressions that change integer values. It will require careful reasoning to get the last two lists correct.

Sample Output:
Pointer and Referent
  address of pt:           0x7ffcdeaaa138 contents:        0x7ffcdeaaa140
  ...
  address of (*pt)++:      -------- contents:      11
        
List 1: Illegal Pointer Expressions
...

