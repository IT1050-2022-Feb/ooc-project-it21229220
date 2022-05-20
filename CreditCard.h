class CreditCard{
	private:
		int creditCardNo;
		int expDate;
		
	public:
		creditCard(int cCNo,int cExpDate);
		void addCreditCardDetails();
		~CreditCard();
};
