#pragma once

#ifdef LE_PLATFORM_WINDOWS

extern Laoe::Application*Laoe::CreateApplication();

int main(int argc, char** argv)
{
	//printf("Laoe Engine\n");
	auto app = Laoe::CreateApplication();
	app->Run();
	delete app;
}

#endif
