#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace MyEngine {
	class MyEngine_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private: 
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define MyEngine_CORE_Trace(...)	::MyEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MyEngine_CORE_Info(...)		::MyEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MyEngine_CORE_Warn(...)		::MyEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MyEngine_CORE_Error(...)	::MyEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MyEngine_CORE_Fatal(...)	::MyEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log macros
#define MyEngine_Trace(...)		::MyEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MyEngine_Info(...)		::MyEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define MyEngine_Warn(...)		::MyEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MyEngine_Error(...)		::MyEngine::Log::GetClientLogger()->error(__VA_ARG_S_)
#define MyEngine_Fatal(...)		::MyEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
