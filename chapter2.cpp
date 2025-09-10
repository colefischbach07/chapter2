/* 
file name: chapter2.cpp
programmer: cole fischbach
Date 09/2025
create a program that compute total sales tax on a 95$ purchase.
set state tax to 4 percent and the county sales tax to 2 percent
*/

#include <iostream>
using namespace std;


const double statetax = .04;
const double countytax = .02;

int main()
{
	double statetax;
	double countytax;
	cout << "please enter the state tax (as a decimal)";
	cin >> statetax;
	cout <<endl<<"please enter the county tax (as a decimal point):";
	cin >> countytax;
	cout << "\n what is the cost of the item you are purchasing?";
	cin >> itemcost;

	double itemcost = 95.00;
	double totaltax = itemcost * statetax + itemcost * countytax;
	double totalcost = totaltax + itemcost;

	cout << "The cost of the item is $" << itemcost << "\n";
	cout << "The total tax including a state tax of" < statetax << endl;
	cout << "and a county tax of "

}