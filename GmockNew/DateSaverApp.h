#pragma once

#include <map>
#include <iostream>
#include <string>
#include <ctime>
#include <stdio.h>
#include "TimeKeeper.h"

using namespace std;

class DateSaverApp
{
	TimeKeeper* timeKeeper;
private:
	map<string, string> InternalDateMap;

public:
	
	DateSaverApp(TimeKeeper* timeKeeper);

	//date in mm-dd format
	string VerifyDate();
	bool AddNewDate();
};