#pragma once

#include <memory>

#include "Core.h"
#include "./spdlog/spdlog.h"

namespace Spark
{
	class SPARK_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> CoreLogger;
		static std::shared_ptr<spdlog::logger> ClientLogger;
	};

}

#define SK_CORE_ERROR(...) ::Spark::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SK_CORE_WARN(...) ::Spark::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SK_CORE_INFO(...) ::Spark::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SK_CORE_TRACE(...) ::Spark::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SK_CORE_FATAL(...) ::Spark::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define SK_ERROR(...) ::Spark::Log::GetClientLogger()->error(__VA_ARGS__)
#define SK_WARN(...) ::Spark::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SK_INFO(...) ::Spark::Log::GetClientLogger()->info(__VA_ARGS__)
#define SK_TRACE(...) ::Spark::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SK_FATAL(...) ::Spark::Log::GetClientLogger()->fatal(__VA_ARGS__)