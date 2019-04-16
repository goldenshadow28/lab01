#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
int rows = 0;
int columns = 0;
do {
cout << "Enter number of rows and columns: " << endl;
cin >> rows >> columns;
for (int i = 0; i < columns; i++) {
	for (int j = 0; j < rows; j++) {
		cout << "X.";
	}
	cout << endl;
}
} while (rows != 0 && columns != 0);
}
