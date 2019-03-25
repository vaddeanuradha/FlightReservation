#include "pch.h"

#include "Flight.h"
#include <iomanip>
#include <iostream>



using namespace std;

int m = 0;

namespace FlightReservation {

	Flight::Flight(const std::string& number, const std::string& airline,
		const std::string& origin, const std::string& destination, const std::string& arrivaltime,
		const std::string& departtime, const std::string& departureDate,const std::string& arrivalDate)
		: mNumber(number),
		mAirline(airline),
		mOrigin(origin),
		mDestination(destination),
		mArrivalTime(arrivaltime),
		mDepartTime(departtime),
		mDepartureDate(departureDate),
	    mArrivalDate(arrivalDate){}

	void Flight::setNumber(const string& number)
	{
		mNumber = number;
	}

	void Flight::setAirline(const string& airline)
	{
		mAirline = airline;
	}

	void Flight::setOrigin(const string& origin)
	{
		mOrigin = origin;
	}

	void Flight::setDestination(const string& destination)
	{
		mDestination = destination;
	}

	void Flight::setArrivalTime(const string& arrivaltime)
	{
		mArrivalTime = arrivaltime;
	}

	void Flight::setDepartTime(const string& departtime)
	{
		mDepartTime = departtime;
	}

	void Flight::setDepartureDate(const string& departureDate)
	{
		mDepartureDate = departureDate;
	}

	void Flight::setArrivalDate(const string& arrivalDate)
	{
		mArrivalDate = arrivalDate;
	}

	const string& Flight::getNumber() const
	{
		return mNumber;
	}

	const string& Flight::getAirline()const
	{
		return mAirline;
	}

	const string& Flight::getOrigin()const
	{
		return mOrigin;
	}

	const string& Flight::getDestination()const
	{
		return mDestination;
	}

	const string& Flight::getArrivalTime()const
	{
		return mArrivalTime;
	}

	const string& Flight::getDepartTime()const
	{
		return mDepartTime;
	}

	const string& Flight::getDepartureDate()const
	{
		return mDepartureDate;
	}

	const string& Flight::getArrivalDate()const
	{
		return mArrivalDate;
	}

	void Flight::display() const
	{
		m++;
		cout << " _____________________________________________________________________________________________________________" << endl;

		cout << "| #   |       Airline     | Number |         Time         |          Date           |           Route         |" << endl;

		cout << "|-----|-------------------|--------|----------------------|-------------------------|-------------------------|" << endl;
		cout << "| " << left << setw(4) << m

			<< "| " << setw(18) <<getAirline()

			<< "| " << setw(7) <<getNumber()

			<< "| " << setw(21) << (getDepartTime() + " - " + getArrivalTime())

			<< "| " << setw(24) << (getDepartureDate() + " - " + getArrivalDate())

			<< "| " << setw(24) << (getOrigin() + " - " + getDestination())

			<< "|" << endl;
		cout << "|_____|___________________|________|______________________|________________________|__________________________|" << endl;

		cout << endl;
		/*cout << "Flight Number: " << getNumber() << endl;
		cout << "Airline: " << getAirline() << endl;
		cout << "Origin: " << getOrigin() << endl;
		cout << "Destination: " << getDestination() << endl;
		cout << "Arrival Time:" << getArrivalTime() << endl;
		cout << "Departure Time: " << getDepartTime() << endl;
		cout << "Date of Departure: " << getDepartureDate() << endl;
		cout << "Date of Arrival:  " << getArrivalDate() << endl;*/
	}
}



/*flight number:" << flight.getNumber() << std::endl;

	std::cout << "airline:" << flight.getAirline() << std::endl;

	std::cout << "orgin:" << flight.getOrigin() << std::endl;

	std::cout << "destination:" << flight.getDestination() << std::endl;

	std::cout << "arrival time:" << flight.getArrivalTime() << std::endl;

	std::cout << "departure time:" << flight.getDepartTime() << std::endl;

	std::cout << "date of departure*/