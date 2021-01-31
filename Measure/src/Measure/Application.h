#pragma once

#include "Core.h"

namespace Measure {
	class MEASURE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be Defined in Client
	Application* CreateApplication();
}

