class Booking_details {
private :
          int bookingId; 
          Booking_details*bookingDet[20];
public :
         Booking_details();
         Booking_details(int pBookingId);
         void viewBookingDetails();
         void updateBookingDetails();
         void confirmBookingDetails();
         ~Booking_details();
};
