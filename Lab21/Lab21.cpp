/* This program is to output specific formulas on windchills. Specifically, 
this should out wind speed, old formula, new formula, and their differences.
Creator: Andrew Vargas
Date: 9/14/2017
*/ 



#include <iostream>
#include <cmath> // must provide to support math library
using namespace std;

int main()
{
   
  double temp = 0.0; // necessary inputs
  
  double oldstyle = 0.0; 
  double newstyle = 0.0;
  
  double velocity = 0.0; // inputs supporting oldsyle and newstyle formulas
  double difference = 0.0; 
  
  
  
  oldstyle = 0.081 * (3.17 * sqrt(velocity)) + (5.81 - 0.25 * velocity) * (temp - 91.4) + 91.4; // Both formulas contain predefined functions, such as, sqrt(variable) and pow (variable, variable)
  
  
  newstyle = (35.74 + 0.6125) * (temp - 35.75 * pow (velocity, 0.16 )) + (0.4275 * temp * pow (velocity, 0.16));
  
  
  
  difference = oldstyle / newstyle; // must divided answers to find difference between formulas
  
  
  cout << "----Wind Speed   Old Formula   New Formula   Difference----" << endl; //output of table of answers
  cout << "----" << velocity << oldstyle << newstyle << difference<< "----" << endl;
  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}