/* This program is to output a random integer between 1 and 100. The program must 
use the proper function statements to ensure a random generated number will be the output
Creator: Andrew Vargas
Date: 09/20/2017 
*/ 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomGenerator()




int main()

{
 
  cout << "What number will be generated?" << endl; 
  randomGenerator();
  
  cout << "Your random number is: " << 
  
}

void randomGenerator ()
  
{  
  
  srand(time(0));     // header of function
  int randomNumber = rand() % 100 + 1;

  return 0;
}
  
