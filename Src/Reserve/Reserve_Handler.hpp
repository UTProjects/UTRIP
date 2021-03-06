#ifndef RESERVE_HANDLER_HPP
#define RESERVE_HANDLER_HPP

#include <vector>
#include <string>
#include "../Room/Room.hpp"

class Reserve;

class Reserve_Handler {

public:

	Reserve_Handler(){}
	void print();
	float cancel(int id);
	void reserve(std::string hotel_id , std::string room_type , int quantity , int cost , range reservation_date_
			, std::vector<Room*> rooms);

private:

	std::vector<Reserve*> reserves;
};

#endif