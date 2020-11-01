#pragma once

#include <stdio.h>

#ifdef SK_PLATFORM_WINDOWS

extern Spark::Application* Spark::CreateApplication();

int main(int argc, char** argv)
{
	printf("Spark\n");
	auto app = Spark::CreateApplication();

	app->run();

	delete app;
}

#endif