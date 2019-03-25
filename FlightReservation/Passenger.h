#pragma once
#include <string>

namespace FlightReservation {
	class Passenger
	{
	public:
		Passenger() = default;
		/*Passenger(const std::string& firstName, const std::string& lastName, const std::string& birthDate,const std::string& emailAddress, const std::string& gender);*/
		Passenger(const std::string& firstName,const std::string& lastName,const std::string& emailAddress,const std::string& gender);

		//Getters and Setters
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;
		/*void setBirthDate(const std::string& birthDate);
		const std::string& getBirthDate() const;*/
		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;
		
		void setEmailAddress(const std::string& emailAddress);
		const std::string& getEmailAddress() const;
		void setGender(const std::string& gender);
		const std::string& getGender() const;
	
		void display() const;

	private:
		std::string mFirstName;
		//std::string mBirthDate;
		std::string mLastName;
		std::string mEmailAddress;
		std::string mGender;
	};
}


