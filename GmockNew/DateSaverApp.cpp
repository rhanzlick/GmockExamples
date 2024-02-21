#include "DateSaverApp.h"

#include <map>
#include <ctime>
#include <regex>

using namespace std;

DateSaverApp::DateSaverApp(ITimeKeeper* timeKeeper) : timeKeeper(timeKeeper) {

	InternalDateMap = map<string, string>{};

}

void DateSaverApp::ValidateDateFormat(string date) {
	regex pattern("([0-9]{1,2}-[0-9]{1,2})");
	//regex pattern(R"(\\d{1,2}-\\d{1,2})");
	smatch matches;
	if (date == "" || !regex_search(date, matches, pattern)) {
		throw invalid_argument("Query date must be valid and not empty.");
	}
}

string DateSaverApp::VerifyDate() {
	string dateValue = timeKeeper->GetCurrentDate();
	ValidateDateFormat(dateValue);

	//if (dateValue == "") throw invalid_argument("Query date must be valid and not empty.");
	//if (dateValue == "") return false;

	if (InternalDateMap.empty() || InternalDateMap[dateValue] == "") {
		return "Date is not significant.";
	}
	else {
		//string message = InternalDateMap[dateValue];
		return InternalDateMap[dateValue];
	}
}

//True if a new date is added
bool DateSaverApp::AddNewDate() {

	string dateValue = timeKeeper->GetCurrentDate();
	ValidateDateFormat(dateValue);
	//if (dateValue == "") return false;

	if (InternalDateMap.empty() || InternalDateMap[dateValue] == "") {
		InternalDateMap[dateValue] = "This Date is significant!";
		return true;
	}
	else {
		return false;
	}
}