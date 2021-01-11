#pragma once

#include "Core.h"

namespace MyEngine {
	class _declspec(dllexport) Application
	{
	public:	
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}
