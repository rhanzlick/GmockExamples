#pragma once

#include "ITimeKeeper.h"

#include <map>
#include <ctime>


using namespace std;

class DateSaverApp
{
	
private:
	//Mock Interface property
	ITimeKeeper* timeKeeper;

	//fake database repo of saved dates
	map<string, string> InternalDateMap;

	void ValidateDateFormat(string date);

public:
	
	DateSaverApp(ITimeKeeper* timeKeeper);

	//date in mm-dd format
	string VerifyDate();
	bool AddNewDate();
};