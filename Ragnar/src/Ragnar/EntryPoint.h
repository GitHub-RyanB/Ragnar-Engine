#pragma once
#ifdef RG_PLATFORM_WINDOWS

extern Ragnar::Application* Ragnar::CreateApplication();

int main(int argc, char** argv) {
	auto app = Ragnar::CreateApplication();
	app->Run();
	delete app;
}
#endif