// FlightReservation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include "Flight.h"
#include "Passenger.h"
#include "FlightDatabse.h"
#include "Ticket.h"
#include "Seat.h"

using namespace std;
using namespace FlightReservation;
Flight flight1;
Passenger passenger;
string email;

//string firstName;
//string lastName;
string str;
//void displaySelectedFligt(FlightDatabase& flight);
int displayMenu();

void diplayFlightSchedule(FlightDatabase& flightSchedule);
void selectSeat(Seat& seat);
void chooseFlight(FlightDatabase& selectedFlight);
void addPassengerInfo(FlightDatabase& passengerInfo);
void getPassenger(FlightDatabase& tickePassenger);
void getTicketInfo(FlightDatabase& db);

int main()
{
	
	FlightDatabase scheduledFlights;
	Seat seat;
	
	
	seat.SetSeats();
	
	while (true) {
		int selection = displayMenu();
		switch (selection)
		{
		case 0:
			return 0;
		case 1:
			selectSeat(seat);
			break;
		case 2:
			diplayFlightSchedule(scheduledFlights);
			break;
		case 3:
			addPassengerInfo(scheduledFlights);
			scheduledFlights.displayPassengerInfo();
			break;
		case 4:
			chooseFlight(scheduledFlights);
			flight1.display();
			break;
		case 5:
			getTicketInfo(scheduledFlights);
			break;
		    default:
				cerr << "Unknown Command.  Try Again." << endl;
			    break;
		}
		
	}

	
	//Passenger passenger2("Bethany", "Smith","01/22/1998","bethany@gmail.com", "Female");

	//std::cout << "first name:" << passenger2.getFirstName() << std::endl;

	//std::cout << "DOB: " << passenger2.getBirthDate() << std::endl;

	//std::cout << "last name:" << passenger2.getLastName() << std::endl;

	//std::cout << "gender:" << passenger2.getGender() << std::endl;
	//std::cout << "emailAddress" << passenger2.getEmailAddress() << std::endl;

	//Passenger passenger;

	//passenger.setFirstName("Desiree");

	//std::cout << "first name:" << passenger.getFirstName() << std::endl;
	//cout << endl;
	




}
int displayMenu() {
	int selection;
	cout << "Airline Reservation System" << endl;
	cout << "_____________________________" << endl;
	cout << "1.   Reserve a Seat   " << endl;
	cout << "2.   Flight Schedule Information  " << endl;
	cout << "3.   Display Passenger Information  " << endl;
	cout << "4.   Selected Flight Details  " << endl;
	cout << "5.   User Ticket information  " << endl;
	cout << "6   Exit." << endl;
	cout << "-----------------------------" << endl;
	 
	cin >> selection;
	return selection;
}
void selectSeat(Seat& seat) {
	
	//seat.SetSeats();
	seat.diplayAll();
	/*string str;*/
	cout << "enter Seat number" << endl;
	cin >> str;
	//string str = seat.getData();
	seat.check(str);
	seat.diplayAll();
	
	
	//return seat;
}

void diplayFlightSchedule(FlightDatabase& FlightSchedule) {
	
	FlightSchedule.addFlight("UA423", "United", "Chicago", "New York City", "3:45 a.m.", "9:30 a.m.", "02/05/2018", "02/05/2018");
	FlightSchedule.addFlight("UA123", "Alaska", "Houston", "Seattle", "12.30 pm.", "6.45 pm", "01/12/2018", "01/02/2018");
	FlightSchedule.addFlight("DS545", "Emirates", "India", "Seattle", "12.30 pm.", "6.45 am", "02/12/2018", "02/14/2018");
	FlightSchedule.addFlight("DS123", "Emirates", "Seattle", "India", "05.30 am.", "6.45 pm", "02/16/2018", "02/17/2018");
	FlightSchedule.addFlight("D123", "BritishAirways", "Seattle", "India", "02.30 pm.", "8.30 am", "02/17/2018", "02/19/2018");
	FlightSchedule.addFlight("D124", "BritishAirways", "India", "Seattle", "02.30 am.", "07.45 pm", "02/20/2018", "02/21/2018");
	FlightSchedule.addFlight("S623", "Alaska", "Seattle", "New york", "10.30 am.", "6.45 pm", "02/18/2018", "02/18/2018");
	FlightSchedule.displayFlightSchedule();

}

void addPassengerInfo(FlightDatabase& passengerInfo)
{
	string firstName;
	string lastName;
	//string birthDate;
	/*string email;*/
	string gender;
	cout << "Enter Passenger First Name?  ";
	cin >> firstName;
	cout << "Enter Passenger Last Name?  ";
	cin >> lastName;
	/*cout << "Enter Passenger BirthDate?  ";
	cin >> birthDate;*/
	cout << "Enter Email Address ?  ";
	cin >> email;
	cout << "Enter Passenger Gender?";
	cin >> gender;
	/*passengerInfo.addPassenger(firstName, lastName, birthDate, email, gender);*/
	passengerInfo.addPassenger(firstName, lastName, email, gender);
	//passengerInfo.displayPassengerInfo();
}
void getPassenger(FlightDatabase& tickePassenger)
{
	try {
		//addPassengerInfo(tickePassenger);
		cout << "Enter Passenger Email ?  " << endl;
		cin >> email;
		Passenger& passenger1 = tickePassenger.getPassenger(email);
		passenger = passenger1;
	}
	catch (const logic_error& exception) {
		cerr << "Inavalid Email Address:  " << exception.what() << endl;
	}
	//passenger.display();

}
void chooseFlight(FlightDatabase& selectedFlight)
{
	string number;
	cout << "Choose Flight number?   " << endl;
	cin >> number;
	try {
		Flight& flight = selectedFlight.getFlight(number);
		//flight1 = selectedFlight.getFlight(origin, destination);
		flight1 = flight;
	}
	catch (const logic_error& exception) {
		cerr << "Invalid Flight number:  " << exception.what() << endl;
	}
}

void getTicketInfo(FlightDatabase& db)
{
	getPassenger(db);
	Ticket ticket(passenger, flight1, str);
	ticket.display();

}
//
//void displaySelectedFligt(FlightDatabase& flight)
//{
//	chooseFlight(flight);
//	flight1 = flight;
//	
//	flight1.display();
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu

// Debug program: F5 or Debug > Start Debugging menu



// Tips for Getting Started: 

//   1. Use the Solution Explorer window to add/manage files

//   2. Use the Team Explorer window to connect to source control

//   3. Use the Output window to see build output and other messages

//   4. Use the Error List window to view errors

//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project

//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
