/* This program is to provide a health slip for a person and calculate their BMR using
the Mifflin St Jeor and Harris Benedict formulas. As a result, the program will finish off 
by determining how that person can maintain their bodyweight, using only one food item (My choice) 
Specifically, the subject will enter his/her name, along with their body statistics 
(weight, height, and, age) In this case, the activity level will be zero.
Creator: Andrew Vargas
Date: 09/12/2017
*/

#include <iostream>
using namespace std;


struct bodyStats { // struct created to contain all subject's statistics of body
    string firstname; // subject's first and last name
    string lastname;
    double weight; // subject weight in pounds
    double age; // subjects age in years
    int height_total; // subjects height input as inches, but should output in ft/inches
    
};

int main ()
{
    
    bodyStats subjectstr1;
    
    int heightft = 0; // seperates height into correct foramt = x' x''
    int heightin = 0; 
    int monthAge = 0; 
    int foodcal = 200; // calories per peanut butter sandwhich 
    double totalfood = 0.0; // total calories able to consume
    double BMI = 0.0, BMR = 0.0, weightkilo = 0, heightcm = 0; // inputs for total body fat and basal metabolic rate (how much calories you will burn w/ out using physical excercise.)
    
     
    
    
    cout << "Hello! Welcome to the BMR calculator!" << endl; // Beginning of user reading 
    
    cout << "Please enter the following information to receive your health slip. " << endl;
    
    
    cout << "Enter your first name: " << endl;
    cin >> subjectstr1.firstname;  
    
    cout << "Enter your last name: " << endl;
    cin >> subjectstr1.lastname; 
    
    cout << "Enter your bodyweight in lbs: " << endl; 
    cin >> subjectstr1.weight;
    
    cout << "Enter your height in inches: (Hint: 1 foot = 12 inches) " << endl;
    cin >> subjectstr1.height_total; 
    
    cout << "Please enter your age in years: " << endl;
    cin >> subjectstr1.age;
    
    weightkilo = subjectstr1.weight / 2.2;
    heightcm = subjectstr1.height_total * 2.54;
    
    BMR = ((10 * weightkilo) + 6.25) * (heightcm - 5) * (subjectstr1.age + 5); // The Mifflin- St Jeor Formula 
    
    BMR = 66 + (6.23 * subjectstr1.weight) + (12.7 * subjectstr1.height_total) - (6.8 * subjectstr1.age); // Harris Benedict Formula
    
    BMI = (subjectstr1.weight * 703) / (subjectstr1.height_total * subjectstr1.height_total); // Body Mass Index formula 
    
    heightft = subjectstr1.height_total / 12; // change height's total inches to feet and inches 
    heightin = subjectstr1.height_total % 12; 
    monthAge = subjectstr1.age * 12; //change age in years to months
    
    
    
    
    cout << "---" << subjectstr1.firstname << " " << subjectstr1.lastname << "'s Health Slip 2017---" << endl; // output of health slip 
    
    cout << subjectstr1.firstname << " " << subjectstr1.lastname << "is at a height of " << heightft << "' " << heightin << " '' " << endl; 
    
    cout << subjectstr1.firstname << " " << subjectstr1.lastname << "'s weight: " << subjectstr1.weight << "lbs and age: " << monthAge << " months old" << endl;
    
    cout << subjectstr1.firstname << " " << subjectstr1.lastname << "'s body fat/BMI is currently at " << BMI << " percent." << endl;
    
    cout << "According to the Harris-Benedict Formula "<< subjectstr1.firstname << " " << subjectstr1.lastname << " is able to maintain his current bodyweight at " << BMR << " calories per day with no excercise. " << endl;
    
    totalfood = BMR / foodcal;
    
    cout << "Specifically, if " << subjectstr1.firstname << " " << subjectstr1.lastname << "'s diet only consisted of a normal peanut butter sandwhich (about 200 calories each) , he would be able to eat " << totalfood << " sandwhiches per day!" << endl; 
 
    
    
}
