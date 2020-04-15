Problem Statement:
The Tab

An office with six workers maintains a snack bar managed on the honor system. A worker who takes a snack records his or her 
ID number and the price on a list. Once a month, the snack bar manager enters the data into a computer program that calculates 
the monthly bill for each worker. No item at the snack bar costs more than $2, and monthly totals are usually less than $100.

1.Write a complete specification for this program.
2.Using a top-down development technique, write a main program that will call functions to generate a monthly report. These 
functions are described here. Declare an array of floats named tabs to store total purchase amounts for each member and the 
guests.
3.The purchases() function should have one parameter, the tabs array. This function should allow the manager to enter two data 
items for each purchase: the price and the ID number of the worker who made the purchase. The ID numbers must be integers 
between 1 and 6. In addition, the code 0 is used for guests, whose bills are paid by the company.
As each purchase is read, the amount (in dollars and cents) should be added to the array slot for the appropriate worker.

4.When the manager enters an ID code that is not between 0 and 6, it should be considered a sentinel value and a signal to end
the loop and return from the function. At that time, the array should contain the total purchases for each worker and for the 
guests.

The bills() function should have one parameter, the tabs array. Print a bill for each worker, giving the ID number and the 
amount due.

Sample Output - 
The Tab - A Snack Billing Program

 When prompted, enter an ID# and price for one purchase.
 To end, enter a ID# outside range 0..6
 > 0 -.25
 Data set ignored; price must be > 0.0
 > -1

 0 purchases were entered
 
 The Tab - A Snack Billing Program

 When prompted, enter an ID# and price for one purchase.
 To end, enter a ID# outside range 0..6
 > 1  1.50
 > 0  1.90
 > 7

 2 purchases were entered

 Monthly Snack Bar Bill for ID# 0: $   1.90
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 1: $   1.50
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 2: $   0.00
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 3: $   0.00
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 4: $   0.00
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 5: $   0.00
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 6: $   0.00
    Thanks for prompt payment.

The Tab - A Snack Billing Program

 When prompted, enter an ID# and price for one purchase.
 To end, enter a ID# outside range 0..6
 > 1  1.50
 > 0  1.90
 > 1   .25
 > 6  1.49
 > 1   .25
 > 5   .47
 > 6  -.25
 Data set ignored; price must be > 0.0
 > -1

 6 purchases were entered

 Monthly Snack Bar Bill for ID# 0: $   1.90
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 1: $   2.00
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 2: $   0.00
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 3: $   0.00
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 4: $   0.00
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 5: $   0.47
    Thanks for prompt payment.


 Monthly Snack Bar Bill for ID# 6: $   1.49
    Thanks for prompt payment.
