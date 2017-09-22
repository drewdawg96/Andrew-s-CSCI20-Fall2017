/* This program is to output a random integer between 1 and 100. The program must 
use the proper function statements to ensure a random generated number will be the output
Creator: Andrew Vargas
Date: 09/20/2017 
*/ 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int randomGenerator ()
{ 
  
  srand(time(0)); 
  
  int random_num (); // 
  
  int randomNumber = rand() % 100 + 1;
  
  cout << "What number will be generated?" << endl; 
  cout << "Your random number is: " << random_num << endl;
  
} 
  
int main()
{ 
  
  randomGenerator();

}

  
  
  




  
