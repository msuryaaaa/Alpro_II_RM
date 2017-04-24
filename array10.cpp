#include <iostream>

using namespace std;

int main () {

string nama[10];

	for (int i = 0;i <= 9;i++){
		cin >> nama[i];
	}
	
	cout << "===========" << endl;
	for (int i = 0;i <= 9;i++){

		cout << nama[i] << endl;
	}
}