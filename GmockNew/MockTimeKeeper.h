#pragma once

#include "ITimeKeeper.h"
#include "gmock/gmock.h"

using namespace std;

class MockTimeKeeper : public ITimeKeeper
{
public:
	MOCK_METHOD(string, GetCurrentDate, (), (override));
};

