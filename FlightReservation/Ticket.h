#pragma once
#include "Passenger.h"
#include "Flight.h"
#include "Seat.h"
#include <string>

namespace FlightReservation {
	class Ticket
	{
	public:
		Ticket() = default;
		Ticket(Passenger& ticketPassenger, Flight& ticketFlight,const std::string&  mTicketSeat);

		//Getters and Setters
		void setPassenger(Passenger *ticketPassenger);
		Passenger& getPassenger();
			   
		void setFlight(Flight *ticketFlight);
		Flight& getFlight();
		void setSeat(const std::string& ticketSeat);
		const std::string& getSeat() const;

		void display();
	private:
		Passenger *passenger = nullptr;
		Flight *flight = nullptr;
		std::string mTicketSeat;

	};
}
