#pragma once

#include <string>
#include "ITimeKeeper.h"

//Real Implementation of TimeKeeper Interface
class TimeKeeper : public ITimeKeeper
{
private:
	static TimeKeeper* keeper;
	TimeKeeper();

public:
	static TimeKeeper* GetTimeKeeper();
	std::string ITimeKeeper::GetCurrentDate();
};

