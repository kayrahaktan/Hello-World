#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	cout << "Merhaba " << "D�nya\n" << endl;
	return 0;
}