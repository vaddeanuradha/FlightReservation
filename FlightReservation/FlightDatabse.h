#pragma once
#include "Flight.h"
#include "Passenger.h"
#include "Seat.h"
#include "Ticket.h"
#include <vector>
#include <iostream>
namespace FlightReservation{
class FlightDatabase
	{
	public:
		FlightDatabase() = default;
	
		Flight& addFlight(const std::string& number, const std::string& airline, const std::string& origin,
			const std::string& destination, const std::string& arrivaltime, const std::string& departtime,
			const std::string& departureDate, const std::string& arrivalDate);
		void displayFlightSchedule() const;
		 
		Flight& getFlight(const std::string& number);
		//void diplayCurrent() const;
     
	/*	Passenger& addPassenger(const std::string& firstName, const std::string& lastName, const std::string& birthDate, const std::string& emailAddress, const std::string& gender);*/
		Passenger& addPassenger(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& gender);


		Passenger& getPassenger(const std::string& emailAddress);

		void displayPassengerInfo() const;


	private:
		std::vector<Flight> mFlights;
		std::vector<Passenger> mPassengerList;
		
	};
}
