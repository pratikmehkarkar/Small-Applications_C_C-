Problem Statement:
Guess my Weight
At the county fair a man stands around trying to guess people’s weight. You’ve decided to see how accurate he is, so you
collect some data. These data are a set of number pairs, where the first number in the pair is the actual weight of a person
and the second number is the weight guessed by the man at the fair. You decide to use two different error measures in your 
analysis: absolute error and relative error. Absolute error is defined as   Eabs=Wguess−Wreal , where   Wguess  and   Wreal 
are the guessed and real weights, respectively. The units of this error are pounds. The relative error is defined by 
Erel=100×EabsWreal ,where the result of this equation is a percentage.

>Write a program that will input the set of weight pairs you accumulated, using a function with a sentinel loop to read the data. 
The number of weight pairs should be between 1 and 100.
>Write another function that will calculate both the absolute and relative errors of the guesses and display them in a table.
Finally, compute and print the average of the absolute values of the absolute errors and the average of the absolute values of
the relative errors.

Sample Output :

Guess My Weight

 When prompted please enter two weights >  weight  estimated
 Enter 0 0 to quit.

           1> 100 110
           2> 110 100
           3> 100 100
           4> 347 325
           5> 23 25
           6> 0 0
 5 valid data sets have been entered.

    Weight  Estimate  Abs. Err  Rel. Err
 ---------------------------------------
      100       110        10     10.00%
      110       100       -10     -9.09%
      100       100         0      0.00%
      347       325       -22     -6.34%
       23        25         2      8.70%
 ---------------------------------------
         Error Averages:        8.8 lbs      6.83%
