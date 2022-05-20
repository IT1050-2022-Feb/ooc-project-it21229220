class Payment {
	private:
		int payId;
		double amount;
		string paymentMethod;
		
	public:
		Payment();
		void setPaymentDetails(int pId, double pAmount);
		void confirmPayment();
		void displayPaymentDetails();
		~Payment();
};
