#include "DateSaverApp.h"
#include <map>
#include <iostream>
#include <string>
#include <ctime>
#include <stdio.h>


DateSaverApp::DateSaverApp(TimeKeeper* timeKeeper)
	: timeKeeper(timeKeeper) {

	InternalDateMap = map<string, string>{};

}

string DateSaverApp::VerifyDate() {
	if (InternalDateMap.empty() || InternalDateMap[timeKeeper->GetCurrentDate()] == "") {
		return "Date is not significant.";
	}
	else {
		return InternalDateMap[timeKeeper->GetCurrentDate()];
	}
}

//True if a new date is added
bool DateSaverApp::AddNewDate() {
	if (InternalDateMap.empty() || InternalDateMap[timeKeeper->GetCurrentDate()] == "") {
		InternalDateMap[timeKeeper->GetCurrentDate()] = "This Date is significant!";
		return true;
	}
	else {
		return false;
	}
}