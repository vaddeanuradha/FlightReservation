#include "pch.h"
#include <string>
#include <iostream>
#include "Seat.h"

using namespace std;
namespace FlightReservation {
	Seat::Seat(const std::string& seatNumber,int row,int column):
		mSeatNumber(seatNumber),mRow(row),mColumn(column){}
	const std::string& Seat::getSeatNumber() const {
		return mSeatNumber;
	}
	void Seat::setSeatNumber(const std::string& seatNumber)
	{
		mSeatNumber = seatNumber;
	}
	int Seat::getColumn() const {
		return mColumn;
	}
	void Seat::setColumn(int column)
	{
		mColumn = column;
	}
	int Seat::getRow() const {
		return mColumn;
	}
	void Seat::setRow(int row)
	{
		mRow = row;
	}
	void Seat::diplayAll() const{
	    mSeats[7][5];
		for (int i = 0; i < 7; i++) {
			for (int j = 0; j < 5; j++) {
				cout << mSeats[i][j] << "      ";
			}
			cout << endl;
		}

		return;
	}
	/*const std::string& Seat::getData() const {
		string p;
		cout << "enter valid seat no to check(like 1B) or N to end: ";
		cin >> p;
		return p;
	}*/
	/*void Seat::SetSeats(char arr[7][5]) {
		mSeats[7][5] = arr[7][5];
	}*/
	void Seat::SetSeats() {
		//mSeats[7][5];

		for (int i = 0; i < 7; i++) {
			//forst column is row number
			mSeats[i][0] = i + 1 + '0';
			//mSeats[i][0] = arr[i][0];
			for (int j = 1; j < 5; j++) {
				//to represent sit number A,B,C,D respectively
				mSeats[i][j] = 'A' + j - 1;
				//mSeats[i][j] = arr[i][j];

			}
		}

		//cout << "initial seat arrangements........\n";
		//displayAll(mSeats[7][5]);
		//airline(arr); //airline function
		//return 0;
	}
	
	int Seat::allOccupied() const {
		int count = 0;
		for (int i = 0; i < 7; i++) {
			for (int j = 1; j < 5; j++)
				if (mSeats[i][j] == 'X')
					count++;
		}

		if (count == 28)
			return 1;
		return 0;
	}
	int Seat::check(const std::string& s) {
		
		mSeatNumber =s;
		//if user input is not in the range 1A to 7D
		if (s[0] > '7' || s[0]<'1' || s[1]>'D' || s[1] < 'A') {
			cout << "invalid seat no\n"; //invalid sit no
			return 0;
		}

		int row = -1, col = -1;
		//find the row no of the user sit
		for (int i = 0; i < 7; i++) {
			if (mSeats[i][0] == s[0])
				row = i;
		}
		//find the column no of user sit
		for (int j = 0; j < 5; j++) {
			if (mSeats[row][j] == s[1])
				col = j;
		}

		//check whether sit is already occupied or not.
		if (col == -1) {
			cout << "Seat is already occupied\n";
			return 0;
		}
		else {
			//if it's a valid sit & not occupied, 
			//process the requested & update the sit as occupied 
			update(row, col);
		}
		return 1;
	}
	
	void Seat::update(int row, int column) {
		cout << "congrats, your seat is valid. Reserved for you\n";
		cout << "updated seat status..........\n";
		mSeats[row][column] = 'X';
		
	}

	

}