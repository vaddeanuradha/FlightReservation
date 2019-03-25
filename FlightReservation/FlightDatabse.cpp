#include "pch.h"
#include "FlightDatabse.h"
#include "Flight.h"
#include"Passenger.h"
#include"Ticket.h"
#include <iomanip>
#include <iostream>
#include <string>


using namespace std;
int i = 0;
int j = 0;
namespace FlightReservation {
	Flight& FlightDatabase::addFlight(const std::string& number, const std::string& airline, const std::string& origin,
		const std::string& destination, const std::string& arrivaltime, const std::string& departtime,
		const std::string& departureDate, const std::string& arrivalDate) {
		
		Flight flight(number, airline, origin, destination, arrivaltime, departtime,
			departureDate, arrivalDate);
		mFlights.push_back(flight);
		return mFlights[mFlights.size() - 1];
		mFlights.clear();
		
	}
	Flight& FlightDatabase::getFlight(const std::string& number) {
		
		for (auto& flight : mFlights) {
			if (flight.getNumber()==number)
			{
				return flight;

			}
		}
		throw logic_error("No Flight found");
	}


	void FlightDatabase::displayFlightSchedule() const {

		cout << " _____________________________________________________________________________________________________________" << endl;

		cout << "| #   |       Airline     | Number |         Time         |          Date           |           Route         |" << endl;

		cout << "|-----|-------------------|--------|----------------------|-------------------------|-------------------------|" << endl;



		for (const auto& flight : mFlights) {
			i++;
			cout << "| " << left << setw(4) << i

				<< "| " << setw(18) << flight.getAirline()

				<< "| " << setw(7) << flight.getNumber()

				<< "| " << setw(21) << (flight.getDepartTime() + " - " + flight.getArrivalTime())

				<< "| " << setw(24) << (flight.getDepartureDate() + " - " + flight.getArrivalDate()) 

				<< "| " << setw(24) << (flight.getOrigin() + " - " + flight.getDestination())

				<< "|" << endl;

		}

		cout << "|_____|___________________|________|______________________|________________________|__________________________|" << endl;

		cout << endl;

	}

	/*Passenger& FlightDatabase::addPassenger(const std::string& firstName, const std::string& lastName, const std::string& birthDate, const std::string& emailAddress, const std::string& gender)
	{*/
	Passenger& FlightDatabase::addPassenger(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& gender)
	{
		Passenger thePassenger(firstName, lastName, emailAddress, gender);
		mPassengerList.push_back(thePassenger);
		return mPassengerList[mPassengerList.size() - 1];
	}

	Passenger& FlightDatabase::getPassenger(const std::string& emailAddress) {
			for (auto& passenger : mPassengerList) {
				if (passenger.getEmailAddress() == emailAddress) {
					return passenger;
				}
			}
			throw logic_error("Email address invalid");

	}

	void FlightDatabase::displayPassengerInfo() const {
		cout << " _______________________________________________________________________________________________" << endl;

		cout << "| #   |     FirstName       |          LastName   |        EmailAddress          |    Gender    |" << endl;

		cout << "|-----|---------------------|---------------------|------------------------------|--------------|" << endl;

		for (auto& passenger : mPassengerList) {
			j++;
			cout << "| " << left << setw(4) << j
				<< "| " << setw(20) << passenger.getFirstName()
				<< "| " << setw(20) << passenger.getLastName()
				<< "| " << setw(29) << passenger.getEmailAddress()
				<< "| " << setw(13) << passenger.getGender()
				<< "| " << endl;
		}
		cout << "|_____|_____________________|_____________________|______________________________|______________|" << endl;

		cout << endl;
		//<< "| " << setw(18) << passenger.getBirthDate()
	}
}