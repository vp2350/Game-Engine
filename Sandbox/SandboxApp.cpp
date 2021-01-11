#include <MyEngine.h>

class Sandbox : public MyEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

MyEngine::Application* CreateApplication()
{
	return new Sandbox();
}