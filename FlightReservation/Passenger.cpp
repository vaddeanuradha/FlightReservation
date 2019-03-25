#include "pch.h"
#include "Passenger.h"
#include <string>
#include<iostream>
#include<iomanip>

using namespace std;
int l = 0;

namespace FlightReservation {
	/*Passenger::Passenger(const std::string& firstName, const std::string& lastName, const std::string& birthDate,const std::string& emailAddress, const std::string& gender)
		: mFirstName(firstName), mBirthDate(birthDate), mLastName(lastName), mGender(gender) {}*/
	Passenger::Passenger(const std::string& firstName, const std::string& lastName, const std::string& emailAddress, const std::string& gender)
		: mFirstName(firstName), mLastName(lastName), mEmailAddress(emailAddress), mGender(gender) {}


	void Passenger::setFirstName(const string& firstName)
	{
		mFirstName = firstName;
	}
	const string& Passenger::getFirstName() const
	{
		return mFirstName;
	}
	/*void Passenger::setBirthDate(const string& birthDate)
	{
		mBirthDate = birthDate;
	}
	const string& Passenger::getBirthDate() const
	{
		return mBirthDate;
	}*/
	void Passenger::setLastName(const string& lastName)
	{
    	mLastName = lastName;
	}
	const string& Passenger::getLastName() const
	{
		return mLastName;
	}
	void Passenger::setEmailAddress(const string& emailAddress)
	{
		mEmailAddress = emailAddress;
	}
	const string& Passenger::getEmailAddress() const
	{
		return mEmailAddress;
	}
	void Passenger::setGender(const string& gender)
	{
		mGender = gender;
	}
	const string& Passenger::getGender() const
	{
		return mGender;
	}

	void Passenger::display() const {
		cout << " _______________________________________________________________________________________________" << endl;

		cout << "| #   |     FirstName       |          LastName   |        EmailAddress          |    Gender    |" << endl;

		cout << "|-----|---------------------|---------------------|------------------------------|--------------|" << endl;
		l++;
		cout << "| " << left << setw(4) << l
			<< "| " << setw(20) << getFirstName()
			<< "| " << setw(20) << getLastName()
			<< "| " << setw(29) <<getEmailAddress()
			<< "| " << setw(13) <<getGender()
			<< "| " << endl;
	
	cout << "|_____|_____________________|_____________________|______________________________|______________|" << endl;

	cout << endl;


	}
}