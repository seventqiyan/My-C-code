#include<iostream>
#include<string>
#include<cstring>
int main() {
	using namespace std;
	char charr[20];
	string str;

	cout << "Length of string in charr beffore input: "
	     << strlen(charr) << endl;

	cout << "Length of string in str beffore input: "
	     << str.size()<<endl;

	cout << "Enter aline of text:\n";
	cin.getline(charr,20);
	cout << "You entred: "<< charr << endl;
	
	cout << "Enter aline of text:\n";
	getlaine(cin,str);
	cout << "You entred: "<< str << endl;

	cout << "Length of string in charr after input: "
	     << strlen(charr)<<endl;

	cout << "Length of string in str after input: "
	     << str.size()<<endl;
	return 0;
}
