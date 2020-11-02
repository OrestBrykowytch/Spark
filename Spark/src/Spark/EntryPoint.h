#pragma once

#include <stdio.h>

#ifdef SK_PLATFORM_WINDOWS

extern Spark::Application* Spark::CreateApplication();

int main(int argc, char** argv)
{
	Spark::Log::Init();
	SK_CORE_WARN("Initialized log");
	SK_INFO("Initialized log");

	auto app = Spark::CreateApplication();

	app->run();

	delete app;
}

#endif