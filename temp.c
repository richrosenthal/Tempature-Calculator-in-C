// Author Richard Rosenthal Jr
// Date 7-5-19
// This simple program will convert Fahrenheit to Celcius
// in the C programming language.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tempatureEntered = 0;
  double Celcius = 0.0;


  printf("Please enter the degrees in Fahrenheit: \n");

  // get input from user
  scanf("%d", &tempatureEntered);
  printf("you entered %d\n", tempatureEntered);

  //Celcius conversion formula
  Celcius = (tempatureEntered-32)*(0.55555);



  printf("%d degrees in Fahrenheit is approximtely %f degrees Celcius\n", tempatureEntered, Celcius);

 return 0;


}
