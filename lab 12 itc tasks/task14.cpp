#include<iostream>
using namespace std;
int main() {
	int arr[5] = { 5,3,5,7,5 };
	int num;
	cout << "Enter the number you want to check: ";
	cin >> num;
	int count=0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] == num) {
			count++;
		}
	}
	cout << endl;
	cout << "This element is: " << count << " times in array";
}