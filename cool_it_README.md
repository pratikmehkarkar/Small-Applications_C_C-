Problem Statement:

Cool It - 
Refridgerators and heat pumps are modeled thermodynamically as reversible cycles that convert work energy to 
heating or cooling energy. The coefficient of performance (  cop ) is the ration of cooling or heating divided by the work
input required.You can calculate cop using the following formulas

>Formulas:
TcK  is the absolute temperature (degrees K) of the cold reservoir
ThK  is the absolute temperature (degrees K) of the hot reservoir.

>Refrigeration cycle:
cop=TcKThK−TcK 

>Heat pump:
cop=ThKThK−TcK 

>Constant:
Absolute zero = 0 degrees Kelvin = -273.15 degrees Celsius
1.Write a function get_temps() to enter and return the temperatures of the cold and hot reservoirs in degrees Celsius; 
return then through pointer parameters. Make sure that both are greater than absolute 0 (allow the user to correct any errors) 
and that they have the proper relationship to one another; that is,   ThK  >   TcK  (if not swap them).

2.Write a function, Cels2Kelvin() to convert a Celsius temperature to an absolute temperature in degrees Kelvin. (see above)

3.Write a function, named cop(), that will compute both values of cop, given the   ThK  and   TcK  , 
and return the results using call by address.

4.Write a main program that will calculate and print the value of cop for either a refrigerator or a heat pump. 
Use a query loop to repeat the process, asking the user to select one or the other computation or "quit". D
o the input and calculations using functions described above. Although the cop() function returns two results, 
print only the result that the user requested.
