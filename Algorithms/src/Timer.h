#pragma once

#include <chrono>
#include <iostream>
#include <string>

class Timer
{
public:
	Timer(const std::string& callFunction, const std::string& additionalInfo);
	~Timer();
	double getDuration();
	double duration;

private:
	std::chrono::time_point<std::chrono::steady_clock> startTime;
};



#define TIMER	Timer timer(std::string(__FILE__), std::to_string(__LINE__))
