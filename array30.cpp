#include <iostream>

using namespace std;

int main () {

string nama[30];

	for (int i = 0;i <= 29;i++){
		cin >> nama[i];
	}
	
	cout << "===========" << endl;
	for (int i = 0;i <= 29;i++){

		cout << nama[i] << endl;
	}
}