#pragma once

#ifdef LE_PLATFORM_WINDOWS
		#ifdef LE_BUILD_DLL
					#define LAOE_API __declspec(dllexport)
		#else
					#define LAOE_API __declspec(dllimport)
		#endif//LE_BUILD_DLL
#else
		#error Laoe only suport windows!
#endif // LE_PLATFORM_WINDOWS
