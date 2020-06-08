#pragma once


#include "pch.h"
#include "Timer.h"


std::string filename;
std::string line;

Timer::Timer(const std::string& callFunction, const std::string& additionalInfo)
	:startTime(std::chrono::high_resolution_clock().now())
{
	filename = callFunction;
	line = additionalInfo;
}


Timer::~Timer() {
	duration = std::chrono::duration<double>(std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock().now() - startTime)).count();
	std::cout << "***Debug Timer Info***\n";
	std::cout << std::string("\nFile: \"") + std::string(filename) + std::string("\nDuration: ") + std::to_string(duration) + std::string("s (Line: ") + std::string(line) + std::string(")\n\n***End Debug Timer Info***\n\n\n") + "\n";
}


double Timer::getDuration() {
	return duration;
}

