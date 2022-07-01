#pragma once
#include "Core.h"

enum class LogCode {
	ERROR,
	WARNING,
	ROUTINE,
	CRITICAL,
};

namespace Ragnar {

	void RAGNAR_API Log(LogCode logCode, const std::string& message, const char* _cdecl errorMessage=nullptr);

}