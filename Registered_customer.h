class Registered_customer{
  private:
    int cusId;
    string cusName;
    string cusEmail;
    Event*Events;
    Booking details*bookingDet[size];
    Photographer*Photographers[size];
    Payment*Payments[size];
    Feedbacks_and_reviews*FeedAndReview[size];
  public:
    Registered_customer();
    Registered_customer(int pRegisteredId ,string pRegisteredName,string 
    pRegisteredEmail);
    void viewSystem();
    void selectEvent();
    void updateBooking();
   ~Registered_customer();
};