class Photographer {
		private:
			int photographerId;
			string photographerName;
		public:
			Photographer(int pgId,string pgName);
			void viewBookingDetails();
			void viewCustomerRequests();
			void addPhotos();
			~Photographer();
	};
