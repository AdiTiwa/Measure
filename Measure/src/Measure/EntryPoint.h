#pragma once

#ifdef MEASURE_PLATFORM_WINDOWS

extern Measure::Application* Measure::CreateApplication();

	int main(int argc, char** argv) {
		auto app = Measure::CreateApplication();
		app->Run();
		delete app;
	}

#endif