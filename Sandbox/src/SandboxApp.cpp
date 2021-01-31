#include <Measure.h>

class Sandbox : public Measure::Application
{
public:
	Sandbox()
	{
	
	}

	~Sandbox()
	{
	
	}

};

Measure::Application* Measure::CreateApplication()
{
	return new Sandbox();
}