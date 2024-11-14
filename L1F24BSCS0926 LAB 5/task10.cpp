#include<iostream>
using namespace std;

int main() {
	int total_weight;
	int num_choc;
	cout << "Enter the number of chocolates being sold:" << endl;
	cin >> num_choc;
	int weightINounces;
	cout << "Enter weight of one chocolate in ounces:" << endl;
	cin >> weightINounces;
	cout << "Enter o to calculate in ounces"<<endl;
	cout << "Enter p for pounds"<<endl;
	cout << "Enter g for gram"<<endl;
	cout << "Enter k for kilogram"<<endl;
	char choice;
	cout << "Enter the choice for weighing"<<endl;
	cin >> choice;
	if (choice == 'o') {
		total_weight = num_choc* weightINounces;
		cout << "The weight in ounces is: " << total_weight << endl;
	}if (choice == 'p') {
		total_weight = num_choc* weightINounces/16;
		cout << "The weight in pounds is: " << total_weight << endl;
	}if (choice == 'g') {
		total_weight = num_choc* weightINounces*28.349;
		cout << "The weight in gram is: " << total_weight << endl;
	}if (choice == 'k') {
		total_weight = (num_choc* weightINounces * 28.349)/100;
		cout << "The weight in kilogram is: " << total_weight << endl;
	}
	return 0;
}
