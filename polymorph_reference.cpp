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
public:
	virtual void process() 
	{
		cout << "Derived::process" << endl;
	}

	void method()
	{
		cout << "Derived::method" << endl;
	}
};


void process(Base& base)
{
	base.process();
}

int main()
{
	Base base;
	Derived derived;

	process(base);			// "Base::process"
	process(derived);		// "Derived::process"
	
	Base base1 = derived;	
	Base& base2 = derived;	

	base1.process();		// "Base::process"
	base2.process();		// "Derived::process"

	return 0;
}