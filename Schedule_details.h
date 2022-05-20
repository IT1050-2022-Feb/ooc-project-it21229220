class Schedule_details {
  private:
    int date;
    Booking_details*bookingDet[20];
  public:
    Schedule_details();
    Schedule_details(int pDate);
    void viewScheduleDetails();
    void updateScheduleDetails();
    ~Schedule_details();
};