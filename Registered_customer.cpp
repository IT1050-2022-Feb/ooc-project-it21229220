#include<iostream>
#include<Registered_customer.h>
#include <string.h>
Registered_customer::Registered_customer(){}
Registered_customer::Registered_customer(int pRegisteredId ,char
pRegisteredName[30], char pregisteredEmail[30])
{
 cusId= pRegisteredId;
 cusName= pRegisteredName;
 cusEmail= pregisteredEmail;
}
void Registered_customer::viewSystem(){}
void Registered_customer::selectEvent(){}
void Registered_customer ::updateBooking(){}