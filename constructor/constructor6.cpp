// C++ Program to illustrate how to use default arguments
// with parameterized constructor
#include <iostream>
using namespace std;

// class
class GFG {
private:
	int data;

public:
	// parameterized constructor with default values
	GFG(int x = 0) { data = x; }

	int getData() { return data; }
};

int main()
{

	GFG obj1; // will not throw error

	GFG obj2(25);

	cout << "First Object Data: " << obj1.getData() << endl;
	cout << "Second Object Data: " << obj2.getData()
		<< endl;

	return 0;
}

