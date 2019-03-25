#include "pch.h"
#include "Ticket.h"
#include "Passenger.h"
#include "Flight.h"
#include <iostream>

using namespace std;
namespace FlightReservation{
	Ticket::Ticket(Passenger& ticketPassenger, Flight& ticketFlight,const std::string& ticketSeat) :
		passenger(&ticketPassenger), flight(&ticketFlight),mTicketSeat(ticketSeat) {}

void Ticket::setPassenger(Passenger *ticketPassenger) {
	passenger = ticketPassenger;
}

Passenger& Ticket::getPassenger() {
	return *passenger;
}

void Ticket::setFlight(Flight *ticketFlight) {
	flight = ticketFlight;
}

Flight& Ticket::getFlight() {
	return *flight;
}
void Ticket::setSeat(const string& ticketSeat) {
	mTicketSeat = ticketSeat;
}
const string& Ticket::getSeat() const{
	return mTicketSeat;
}
void Ticket::display() {
	Passenger p = getPassenger();

	Flight f = getFlight();
	


	cout << "Ticket Information" << endl;
	cout << string(40, '-') << endl;
	cout << "First Name: " << p.getFirstName() << endl;
	cout << " Last Name: " << p.getLastName() << endl;
	cout << endl;

	cout << "Ticket Seat Number:   " <<getSeat()  << endl;

	cout << "   Airline: " << f.getAirline() << endl;

	cout << "    Number: " << f.getNumber() << endl;

	cout << "      Time: " << f.getDepartTime() << " - " << f.getArrivalTime() << endl;

	cout << "      Date: " << f.getDepartureDate() << " - " << f.getArrivalDate() << endl;

	cout << "     Route: " << f.getOrigin() << " - " << f.getDestination() << endl;

	cout << endl;
}
}