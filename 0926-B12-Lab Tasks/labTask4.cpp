#include<iostream>
using namespace std;
int main() {
	char ch;
	char sent_arr[] = "Book reading is a good practice. Almost all type of books is available in soft form as well. We often need to find some keywords in order to read about it from books.";
	int size = sizeof(sent_arr) / sizeof(sent_arr[0]);
	cout << "Enter the keyword you want to search :";
	int char_count = 0;
	cin >> ch;
	for (int i = 0; i < size; i++) {
		if (ch == sent_arr[i]) {
			cout << "\nThe character fount at index " << i;
			break;
		}

	}

	for (int i = 0; i < size; i++) {
		if (ch == sent_arr[i]) {
			char_count++;
		}

	}
	cout << "\nNumber of times the character is : " << char_count;
}
