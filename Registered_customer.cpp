#include<iostream>
#include<Registered_customer.h>
Registered_customer::Registered_customer(){}
Registered_customer::Registered_customer(int pRegisteredId ,string 
pRegisteredName, string pregisteredEmail)
{
 cusId= pRegisteredId;
 cusName= pRegisteredName;
 cusEmail= pregisteredEmail;
}
void Registered_customer::viewSystem(){}
void Registered_customer::selectEvent(){}
void Registered_customer ::updateBooking(){}