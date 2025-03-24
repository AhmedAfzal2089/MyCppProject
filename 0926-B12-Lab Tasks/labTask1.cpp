//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() {
//	ofstream writeFile("F:\\file handling prac\\abc.txt", ios::out);
//	if (!writeFile) {
//		cout << "Error opening the file";
//		return 1;
//	}
//	writeFile << "My name is Ahmed , ROll no L1F24BSC0926 "<<endl;
//
//	cout << "Writing is done!"<<endl;
//	writeFile.close();
//
//	ifstream readFile("F:\\file handling prac\\abc.txt",ios::in);
//	if (!readFile) {
//		cout << "Error opening the file";
//		return 1;
//	}
//	char ch;
//	while (readFile.get(ch)) {
//		cout << ch;
//	}
//	cout << "Reading is done !";
//	readFile.close();
//
//	ofstream appFile("F:\\file handling prac\\abc.txt", ios::app);
//	if (!appFile) {
//		cout << "Error opening the file";
//		return 1;
//	}
//	appFile<<"This is a new line” at the end of that text in the file. ";
//	cout << "\nAppending is done !";
//	appFile.close();
//}