#pragma once
#include "Core.h"
#include "Log.h"

namespace Ragnar {

	class RAGNAR_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		inline void Run() {
			Log(LogCode::ROUTINE, "Application constructed");
		}

		
	private:
		 
	};

	//Needs to be defined in client
	Application* CreateApplication();

}