#include "pch.h"
#include <string>
#include "../baseball/baseball.cpp"

using namespace std;

TEST(TestCaseName, TestName) {
	Baseball game;
	EXPECT_THROW(game.guess(string("12")), length_error);
}

TEST(TestCaseName, TestName2) {
	Baseball game;
	EXPECT_THROW(game.guess(string("12s")), invalid_argument);
}