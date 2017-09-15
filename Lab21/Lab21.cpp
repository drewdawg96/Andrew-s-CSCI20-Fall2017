/* This program is to output specific formulas on windchills. Specifically, 
this should out wind speed, old formula, new formula, and their differences.
*/ 



#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   
  double temp = 0.0; 
  
  double oldstyle = 0.0; 
  double newstyle = 0.0;
  
  double velocity = 0.0;
  double difference = 0.0; 
  
  
  
  oldstyle = 0.081 * (3.17 * sqrt(velocity)) + (5.81 - 0.25 * velocity) * (temp - 91.4) + 91.4;
  
  
  newstyle = (35.74 + 0.6125) * (temp - 35.75 * pow (velocity, 0.16 )) + (0.4275 * temp * pow (velocity, 0.16));
  
  
  
  difference = oldstyle / newstyle;
  
  
  
  cout << velocity << oldstyle << newstyle << difference << endl; 
  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}