#pragma once

#include "Core.h"


namespace Laoe {

	class LAOE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	//To be defined in CLIENT
	Application* CreateApplication();

}

