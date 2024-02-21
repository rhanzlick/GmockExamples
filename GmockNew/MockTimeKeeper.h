#pragma once


#include <string>
#include "ITimeKeeper.h"
#include "gmock/gmock.h"

using namespace std;

class MockTimeKeeper : ITimeKeeper
{
public:
	MOCK_METHOD(string, GetCurrentDate, ());
};

