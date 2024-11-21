#include<iostream>
using namespace std;

int main() {
	int greet_msg;
	cout << "1 for  Morning\n 2 for Afternoon\n 3 for Evening\n 4 for Night: ";
	cin >> greet_msg;
	switch (greet_msg)
	{
	case 1:
		cout << "Morning";
		break;
	case 2:
		cout << "Afternoon";
		break;
	case 3:
		cout << "Evening";
		break;
	case 4:
		cout << "Night";
		break;

	default:
		cout << "input is invalid";
		break;
	}
	


}