Problem Statement

Positive & Negative
Write a function, named sums(), that has two input parameters; an array, a, of floats; and an integer, n, which is the number 
of values stored in the array.Compute the sum of the positive values in the array and the sum of the negative values. 
Also count the number of values in each category.Return these four answers through output parameters.
Write a main program that reads no more than 10 real numbers and stores them in an array. Stop reading numbers when a 0 is
entered. Call the sums() function and print the answers it returns. Also compute and print the average values of the positive
and negative sets.

Sample Output -

Positive and Negative

 Enter up to 10 real numbers, 0 to quit: 1 2 3 4 5 6 7 8 9 10
     10 numbers were entered.
     Positives:          Sum =  55   Count = 10   Average = 5.5
     Negatives:          Sum =   0   Count =  0   -------------

 More (y/n): y
 Enter up to 10 real numbers, 0 to quit: -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
     10 numbers were entered.
     Positives:          Sum =   0   Count =  0   -------------
     Negatives:          Sum = -55   Count = 10   Average = -5.5

 More (y/n): y
 Enter up to 10 real numbers, 0 to quit: 12 -3.4 -56 90 -31.5 9.31 71 -10 85.6 8.2
     10 numbers were entered.
     Positives:          Sum = 276.110016   Count =  6   Average = 46.0183
     Negatives:          Sum = -100.900002   Count =  4   Average = -25.225

 More (y/n): y
 Enter up to 10 real numbers, 0 to quit: 1  -2  -3   4   0
     4 numbers were entered.
     Positives:          Sum =   5   Count =  2   Average = 2.5
     Negatives:          Sum =  -5   Count =  2   Average = -2.5

 More (y/n): y
 Enter up to 10 real numbers, 0 to quit: 1   0
     1 numbers were entered.
     Positives:          Sum =   1   Count =  1   Average = 1
     Negatives:          Sum =   0   Count =  0   -------------

 More (y/n): n
