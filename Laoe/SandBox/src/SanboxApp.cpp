#include <Laoe.h>

class Sanbox : public Laoe::Application
{
public:
	Sanbox()
	{
	}
	~Sanbox()
	{
	}

private:

};


/*
int main()
{
	Sanbox*sanbox = new Sanbox();
	sanbox->Run();
	delete sanbox;
}
*/

Laoe::Application*Laoe::CreateApplication()
{
	return new Sanbox();
}