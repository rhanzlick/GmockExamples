#include "TimeKeeper.h"

#include <iostream>
#include <string>
#include <ctime>
#include <stdio.h>


using namespace std;

TimeKeeper* TimeKeeper::keeper = nullptr;
TimeKeeper::TimeKeeper(){}
TimeKeeper* TimeKeeper::GetTimeKeeper() {
	if (keeper == nullptr) {
		keeper = new TimeKeeper();
	}
	return keeper;
}

string TimeKeeper::GetCurrentDate() {
	time_t currentDateTime = time(nullptr);
	struct tm* timeInfo;
	string formattedDate;
	char buffer[20];
	timeInfo = localtime(&currentDateTime);

	//strftime(buffer, sizeof(buffer), "%m-%d-%Y", timeInfo);
	strftime(buffer, sizeof(buffer), "%m-%d", timeInfo);
	//cout << string(buffer);

	return string(buffer);
};