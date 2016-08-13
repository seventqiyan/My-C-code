#include<iostream>
const int ArSize = 80;
int main () {
	using namespace std;
	char lien[ArSize];
	int spaces = 0;

	cout << "Enter a lien of text:\n";
	cin.get(lien,ArSize);
	cout << "Computer lien:\n"<<lien<<endl;
	cout <<"Lien through first period:\n";
	for (int i = 0; lien[i]!= '0'; i++) {
		cout << lien[i];
		if(lien[i] == '.')
			break;
		if(lien[i] == ' ')
			continue;
		spaces++;

	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";
	return 0;
}
