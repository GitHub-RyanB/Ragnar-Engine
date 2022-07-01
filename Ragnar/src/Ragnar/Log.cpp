#pragma warning(disable : 4996)

#include "Log.h"

std::ostream& operator<<(std::ostream& os, const LogCode& code)
{
	switch (code) {
	case LogCode::CRITICAL:
		os << "CRITICAL";
		break;
	case LogCode::ERROR:
		os << "ERROR";
		break;
	case LogCode::WARNING:
		os << "WARNING";
		break;
	case LogCode::ROUTINE:
		os << "ROUTINE";
		break;
	default:
		os << "LOG CODE NOT FOUND";
		break;
	}
	return os;
}

namespace Ragnar {
	void Log(LogCode logCode, const std::string& message, const char* _cdecl errorMessage) {
		time_t now{ time(0) };
		tm* ltm = localtime(&now);

		std::cout << "[" << ltm->tm_hour << ':' << ltm->tm_min << ':' << ltm->tm_sec << "]";	//The time block
		std::cout << " [" << logCode << "]\t" << message;
		if (errorMessage) {
			std::cout << " | " << errorMessage;
		} 
		std::cout << '\n';
	}
}