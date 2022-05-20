#include<iostream>
#include"Event.h"
#include<string.h>
Event::Event(){}
Event::Event(int pEventId, string pEventName)
{
        eventId= pEventId;
        eventName= pEventName;
}

void Event::viewEvents(){}
void Event::addEventDetails(){}
void Event::updateEvent(){}
void Event::displayEvent(){}
