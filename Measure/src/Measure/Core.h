#pragma once

#ifdef MEASURE_PLATFORM_WINDOWS
	#ifdef MEASURE_BUILD_DLL
		#define MEASURE_API __declspec(dllexport)
	#else
		#define MEASURE_API __declspec(dllimport)
	#endif
#else
	#error Measure currently only supports Windows!
#endif