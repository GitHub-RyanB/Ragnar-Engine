#pragma once
#include <iostream>
#include <string>
#include <iomanip>

#ifdef RG_PLATFORM_WINDOWS
	#ifdef RG_BUILD_DLL
		#define RAGNAR_API __declspec(dllexport)
	#else
		#define RAGNAR_API __declspec(dllimport)
	#endif
#else
	#error Ragnar Engine only supports Windows.
#endif