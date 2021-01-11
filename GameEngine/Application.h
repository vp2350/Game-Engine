#pragma once
namespace MyEngine {
	class _declspec(dllexport) Application
	{
		Application();
		virtual ~Application();

		void Run();
	};
}
