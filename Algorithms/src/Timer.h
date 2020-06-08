#ifdef _DEBUG
#ifndef TIMER_H
#define TIMER_H

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
	const std::string& callFunction;
	const std::string& additionalInfo;
	std::chrono::time_point<std::chrono::steady_clock> startTime;
};


#define TIMER	Timer timer(std::string(__FUNCTION__), std::to_string(__LINE__))


#endif
#endif

