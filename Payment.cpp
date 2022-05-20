#include<iostream>
#include"Payment.h"
void Payment::setPaymentDetails(int pId, double pAmount)
{
	payId=pId;
	amount=pAmount;
}

void Payment::confirmPayment(){}

void Payment::displayPaymentDetails()
{
	cout<<"payId="<<payId<<endl;
	cout<<"amount="<<amount<<endl;
}
Payment::~Payment(){}


