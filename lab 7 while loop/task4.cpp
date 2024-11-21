#include<iostream>
using namespace std;

int main() {
	int num,rem;
	cout << "Enter num: ";
	cin >> num;
	while (num != 0) {
		rem = num % 10;
		if (rem == 0) {
			cout << num << endl;
		}
		else {
			cout << rem;
		}
		num /= 10;
	}
	return 0;
	system("pause");
}