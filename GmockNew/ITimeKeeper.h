#pragma once

#include <string>

class ITimeKeeper
{
public:
	//Gets the current date as a string in mm-dd format
	virtual std::string GetCurrentDate() = 0;
};

