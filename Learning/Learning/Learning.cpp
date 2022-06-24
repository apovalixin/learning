#include <iostream>
#include <string>

using namespace std;

class cofeegrinder {

private:
	bool CheckVolt()
	{

		return false;
	}
public:
	void Start() {

		if (CheckVolt())
		{
			cout << "Work" << endl;
		}
		else
		{
			cout << "Error" << endl;
		}
	}
};

int main(){

	setlocale(LC_ALL, "ru");
	
	cofeegrinder a;

	a.Start();

	

	return 0;
}
