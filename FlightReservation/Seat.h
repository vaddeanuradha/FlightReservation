#pragma once
#include <string>

namespace FlightReservation {
	class Seat {
	public:
		Seat() = default;
		Seat(const std::string& seatNumber,int row,int column);

		const std::string& getSeatNumber() const;
		void setSeatNumber(const std::string& seatNumber);
		//void setSeats(char arr[7][5]);
		int getRow() const;
		void setRow(int row);
		int getColumn() const;
		void setColumn(int column);

		void diplayAll() const;
		int allOccupied() const;
		//const std::string& getData() const;
		void update(int row, int column);
		int check(const std::string& s);
		void SetSeats();
	private:
		int mRow;
		int mColumn;
		std::string mSeatNumber;
		char mSeats[7][5];
		
	};
}
