#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	virtual void process()
	{
		cout << "Base::process" << endl;
	}
};

class Derived : public Base
{
private:
	virtual void process() 
	{
		cout << "Derived::process" << endl;
	}
};


void process(Base& base)
{
	base.process();
}

int main()
{
	Derived derived;
	process(derived);

	
	return 0;
}