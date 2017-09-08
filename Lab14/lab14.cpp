 //Created by: Andrew Vargas
 //Created on 9/06/17 
 
 #include <iostream>
 using namespace std;
   
   
 int main() 
 {
        
 int pennyCount = 0;
 int nicklCount = 0; 
 int dimeCount = 0; 
 int quartCount = 0;
 int coinAmount = 0;
 double beforeFee = 0.00; 
 double afterFee = 0.00;
 
 cout << "Welcome to Coinstar! " << " Enter amount of coins ";
 
 cin >> coinAmount; 
 
 quartCount = coinAmount / 25;
 dimeCount = coinAmount % 25 / 10; 
 nicklCount = (coinAmount % 25) % (10 / 5);
 pennyCount = ((coinAmount % 25) % 10) % 5;
 
 cout << "You have " << quartCount << " quarters, " << dimeCount << " dimes, " << nicklCount << " nickles, and " << pennyCount << " pennies." ;
 
 beforeFee = coinAmount / 100;

 cout << "You have a total of " << coinAmount; 
 
 afterFee = beforeFee / 10.9;

 cout << "After the required fee, you will recieve " << afterFee << endl;
 
 }
 
 

    