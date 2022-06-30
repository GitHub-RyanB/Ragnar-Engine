#pragma once
#include "Core.h"

namespace Ragnar {

	class RAGNAR_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		inline void Run() {
			while (true);
		}

		
	private:
		 
	};

	//Needs to be defined in client
	Application* CreateApplication();

}