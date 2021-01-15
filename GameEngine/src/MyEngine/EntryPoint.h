#pragma once
#ifdef ME_PLATFORM_WINDOWS

extern MyEngine::Application* MyEngine::CreateApplication();
int main(int argc, char** argv)
{
	MyEngine::Log::Init();
	MyEngine_CORE_Warn("Initialized Log!");
	MyEngine_Info("Hello!");

	auto app = MyEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif // ME_PLATFORM_WINDOWS
