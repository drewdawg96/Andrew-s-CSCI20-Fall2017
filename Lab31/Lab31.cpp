/* The program is to create the best cell phone plan, using specific AT&T Unlimited Plus, 
Choice, and family plans. Other phone services will inlcude Verizon and Sprint plans. 
Creator: Andrew Vargas
Date: 9/26/2017
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    int attPlus; // So you say I need these, but why exactly? 
    int attChoice;
    int attFam;
    int verizonU;
    int SprintU;
    int SprintGb;
    
int user_lines; 
int user_tablet; 
int user_data; 
int user_price; 
    
    cout << "How many GB of data will you require? If you recommend unlimited data, type in 0"; // This is where I want the user to input their information?
    cin >> user_data;
    
    cout << "How many phone lines will you require? "; // Also am I missing any important data they need to be asked? like minimum or maximum price? 
    cin >> user_lines;
    
    cout << "How many tablets do you require? ";
    cin >> user_tablet;
    
    if (user_data > 0) 
    {
        cout << "Exactly how much data will you require: "; // I know this is probably wrong, but this is where I am really confused??
        cin >> user_data;  
        
    if (user_data >= 1) && (user_data <= 10) 
        cout << "We recommend... "
    }
    
    if (user_data == 0)
        cout << "How much are you willing to spend? "; 
        cin >> user_price;
    
    
    
    
    cout << "How many lines will you require? Max is 10";  
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}   
        
    
    