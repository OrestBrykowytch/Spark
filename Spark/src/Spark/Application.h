#pragma once

#include "Core.h"


namespace Spark
{
	class SPARK_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	// Defined in CLIENT
	Application* CreateApplication();
}