Problem Statement:
Seeing Bits

#include <stdio.h>
int main( void )
{
    int n;
    int base;
    int rhdigit;
    int power;
// input: the number to convert
// input: base to which we will convert n // right-hand digit of n-prime
// loop counter
printf( " Read an integer and express it in a given base.\n" 
" Please enter a number to convert and\n"
" a target base between 2 and 10: " );
scanf( "%i %i", &n, &base );
if (base < 2 || base > 10) 
printf( " Base must be between 2 and 10\n" );
else if (n==0) printf ( " 0 is 0 in every base.\n" );
  
power = 0;
// --- Generate and print digits of converted number, right to left.
while (n != 0) {
 if (power == 0) printf( "%12li = ", n );
else 
printf( "rhdigit = n % base;n /= base;+ ");
// Isolate right-hand digit of n. // then eliminate right-hand digit.
printf( "%hi * %hi^%i \n", rhdigit, base, power );
++power; 
}
return 0; 
}

Modify this program so that it takes a number as input and prints the equivalent value in binary notation. 
Do not print it in the expanded form of the previous program, but as a series of ones and zeros.
You will need to store the binary digits in an array and print them later in the opposite order, so that the first digit 
generated is the last printed.

Sample Output:
Enter an integer in base 10, we will print it in binary: 22
 In base 10 your number is 22; in binary it is:
         1 0 1 1 0

         Enter 1 to continue, 0 to quit: 1

 Enter an integer in base 10, we will print it in binary: -1
         Error: the number must be >= 0

 Enter an integer in base 10, we will print it in binary: 1
 In base 10 your number is 1; in binary it is:
         1

         Enter 1 to continue, 0 to quit: 1

 Enter an integer in base 10, we will print it in binary: 0
 In base 10 your number is 0; in binary it is:
         0

        Enter 1 to continue, 0 to quit: 1

 Enter an integer in base 10, we will print it in binary: 32765
 In base 10 your number is 32765; in binary it is:
         1 1 1 1 1 1 1 1 1 1 1 1 1 0 1

        Enter 1 to continue, 0 to quit: 1

 Enter an integer in base 10, we will print it in binary: 17
 In base 10 your number is 17; in binary it is:
         1 0 0 0 1

        Enter 1 to continue, 0 to quit: 0


 Normal termination.
