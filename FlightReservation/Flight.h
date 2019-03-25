#pragma once
#include <string>



namespace FlightReservation {

	class Flight

	{

	public:

		Flight() = default;

		Flight(const std::string& number, const std::string& airline, const std::string& origin,
			const std::string& destination, const std::string& arrivaltime, const std::string& departtime,
			const std::string& departureDate,const std::string& arrivalDate);

		void display() const;

		//Getters and setters
		void setNumber(const std::string& number);
		const std::string& getNumber() const;

		void setAirline(const std::string& airline);
		const std::string& getAirline() const;

		void setOrigin(const std::string& origin);
		const std::string& getOrigin() const;

		void setDestination(const std::string& destination);
		const std::string& getDestination() const;

		void setArrivalTime(const std::string& arrivaltime);
		const std::string& getArrivalTime() const;

		void setDepartTime(const std::string& departtime);
		const std::string& getDepartTime() const;

		void setDepartureDate(const std::string& departureDate);
		const std::string& getDepartureDate() const;

		void setArrivalDate(const std::string& arrivalDate);
		const std::string& getArrivalDate() const;

	private:
		std::string mNumber;
		std::string mAirline;
		std::string mOrigin;
		std::string mDestination;
		std::string mArrivalTime;
		std::string mDepartTime;
		std::string mDepartureDate;
		std::string mArrivalDate;
	};
}
