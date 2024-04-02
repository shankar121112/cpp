// C++ Program to count the number of objects created and
// destroyed
#include <iostream>
using namespace std;

// global variable to count
int count = 0;

// class definition
class Test {
public:
	Test()
	{
		count++;
		cout << "No. of Object created: " << count << endl;
	}

	~Test()
	{
		cout << "No. of Object destroyed: " << count
			<< endl;
          count--;
	}
};

// driver code
int main()
{
	Test t, t1, t2, t3;
	return 0;
}

