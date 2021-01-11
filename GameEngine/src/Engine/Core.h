#pragma once

#ifdef ME_PLATFORM_WINDOWS
	#ifdef ME_BUILD_DLL
		#define MyEngine_API _declspec(dllexport)
	#else
		#define MyEngine_API _declspec(dllimport)
#endif
#else
	#error Egnine only supports Windows!
#endif