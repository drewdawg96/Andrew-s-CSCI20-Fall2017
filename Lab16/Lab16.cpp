/* This program is to be a stock portfolio where you will be able to enter stock data. 
It will specifically include stock names, current shares, and the number of shares owned. 
As a result this will output the total stock value and print out the offical data.
Author: Andrew Vargas 
Date: 9/12/2017
*/

#include <iostream>
using namespace std;

struct stockPort {  // Declares struct   
    string name;
    char stockSector;
    double stockShareprice; 
    int stockSharesown;
    
};

int main ()
{
    double total_value1 = 0.0, total_value2 = 0.0, total_value3 = 0.0, total_value4 = 0.0, total_value5 = 0.0, total_Portfolio = 0.0; // Declaring total values/portfolios
    

    stockPort namestr1; // Inputs struct variables 
    stockPort namestr2;
    stockPort namestr3; 
    stockPort namestr4;
    stockPort namestr5;
    
    
    cout << "   ---Welcome to 1.6 Lab's Stock Portfolio---" << endl;
    
    cout << "Name of stock: " << endl; // First stock user input and continues throughout other four stocks
    cin >> namestr1.name;
    
    cout << "Stock sector: " << endl;
    cin >> namestr1.stockSector; 
    
    cout << "Stock share price: " << endl;
    cin >> namestr1.stockShareprice;

    cout << "Stock shares owned: " << endl;
    cin >> namestr1.stockSharesown;
    
    cout << "Name of stock: " << endl;
    cin >> namestr2.name;
    
    cout << "Stock sector: " << endl;
    cin >> namestr2.stockSector; 
    
    cout << "Stock share price: " << endl;
    cin >> namestr2.stockShareprice;

    cout << "Stock shares owned: " << endl;
    cin >> namestr2.stockSharesown;
    
    cout << "Name of stock: " << endl;
    cin >> namestr3.name;
    
    cout << "Stock sector: " << endl;
    cin >> namestr3.stockSector; 
    
    cout << "Stock share price: " << endl;
    cin >> namestr3.stockShareprice;

    cout << "Stock shares owned: " << endl;
    cin >> namestr3.stockSharesown;
    
    cout << "Name of stock: " << endl;
    cin >> namestr4.name;
    
    cout << "Stock sector: " << endl;
    cin >> namestr4.stockSector; 
    
    cout << "Stock share price: " << endl;
    cin >> namestr4.stockShareprice;

    cout << "Stock shares owned: " << endl;
    cin >> namestr4.stockSharesown;
    
    cout << "Name of stock: " << endl;
    cin >> namestr5.name;
    
    cout << "Stock sector: " << endl;
    cin >> namestr5.stockSector; 
    
    cout << "Stock share price: " << endl;
    cin >> namestr5.stockShareprice;

    cout << "Stock shares owned: " << endl;
    cin >> namestr5.stockSharesown; 
    
    total_value1 = namestr1.stockSharesown * namestr1.stockShareprice; // adding total value per stock 
    total_value2 = namestr2.stockSharesown * namestr2.stockShareprice;
    total_value3 = namestr3.stockSharesown * namestr3.stockShareprice;
    total_value4 = namestr4.stockSharesown * namestr4.stockShareprice;
    total_value5 = namestr5.stockSharesown * namestr5.stockShareprice;
    
    total_Portfolio = total_value1 + total_value2 + total_value3 + total_value4 + total_value5;
    
    cout << "      --- Welcome to Lab 1.0 Stock Portfolio ---" << endl;
    cout << "     Stock Name     # of Shares     Current Value     Total Value     " << endl;
    cout << "   " << namestr1.name << namestr1.stockSharesown << namestr1.stockShareprice << total_value1 << "   " << endl;
    cout << "   " << namestr2.name << namestr2.stockSharesown << namestr2.stockShareprice << total_value2 << "   " << endl;
    cout << "   " << namestr3.name << namestr3.stockSharesown << namestr3.stockShareprice << total_value3 << "   " << endl;
    cout << "   " << namestr4.name << namestr4.stockSharesown << namestr4.stockShareprice << total_value4 << "   " << endl;
    cout << "   " << namestr5.name << namestr5.stockSharesown << namestr5.stockShareprice << total_value5 << "   " << endl;
    cout << "Total Portfolio: " << total_Portfolio << endl;
    

}