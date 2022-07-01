#include <Ragnar.h>

class LoneRagnar : public Ragnar::Application {
	
};

Ragnar::Application* Ragnar::CreateApplication() {
	return new LoneRagnar();
}