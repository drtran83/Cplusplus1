/*
This program is to figure Stock Market stuff

Cathy bought 600 shares
Market price is $21.77 per share
Commission is 2%

Figure out what is the minimal price for stocks if she were to sell without added commission

Minimum sale price is any price above 21.77, so I decided to just add a penny to the price.

Define Variable = 21.77 a share
	variable 2 = 2% commission
Define Constant = 600 shares

Calculate amount paid without comisssion
Display as amount paid

Calculate commission
Display as commission amount

Calculate total paid plus comission
Display as total amount

Calculate minimum sale price to make profit
Display as profit amount

Program by Tom Tran - CISS 241 - Professor James Viviano

*/

#include <iostream>
using namespace std;

void main()
{
	double shares = 600;
	double marketPrice = 21.77;
	double commission = .02;
	double totalAmountPaid = 0;
	double commissionAmount = 0;
	double totalAmount = 0;
	double minProfit = .01;
	double profit = 0;

	totalAmountPaid = shares * marketPrice;

	commissionAmount = totalAmountPaid * commission;

	totalAmount = totalAmountPaid + commissionAmount;

	profit = marketPrice + minProfit;



	cout << "The market price paid for 600 shares is $" << totalAmountPaid << endl;

	cout << "The amount of commission off of this transaction is $" << commissionAmount << endl;

	cout << "The total amount paid by Cathy is $" << totalAmount << endl;

	cout << "The minimum sale price to make a profit is $" << profit << endl;




}