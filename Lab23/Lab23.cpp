/* This program is suppose to replicate another random number generator. Specifically
the user should be able to choose two integers to randomize between them. Within the program,
both variables should swap using the appropiate function, therefore, outputs a
random integer between the user's choice of numbers. 
Creator: Andrew Vargas
Date: 9/26/2017
*/

#include <iostream>
#include <cstdlib> // c standard library returns our random integer
#include <ctime>   
using namespace std;


void swapNumber(int &num1, int &num2) { // First function to perform swapping of integers
   
 int placeHolder = num1; // swap takes place between num1 and num2
 
 num1 = num2;
 
 num2 = placeHolder; 
 
 
 return;
 
}

void randomGenerator(int num1, int num2) {   // Second function initilizes user's integers through randomized generator
   
   swapNumber(num1, num2);
   
   srand(time(0)); // First function calls the seed
   
   int randomNumber = (rand() % (num1 - num2 + 1)) + num2; // Equation to set up random generator 
   
   cout << "A random number between " << num2 << " and " << num1 << " is " << randomNumber << endl;
   
   
   return;
   
}

int main() {  // Final output stage where user will enter thier preffered numbers
   
   int num1 = 0; 
   int num2 = 0;
   int randomNumber = 0;
   
   cout << "Please enter your first number: " << endl;
   cin >> num1;
   
   cout << "Please enter your second number: " << endl; 
   cin >> num2; 
   
   randomGenerator(num1, num2);
   
   
   return 0;  
}