class Event{
private:
      int eventId;
      string eventName;
      Registered_customer*regiCustomer[20];
public :
      Event();
      Event(int pEventId, string pEventName);
      void viewEvents();
      void addEventDetails();
      void updateEvent();
      void displayEvent();
      ~Event();
};
