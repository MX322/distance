#include <iostream>
using namespace std;


int main()
{
	double km;

	cout << "Enter distance : ";
	cin >> km;

	double statMil = km / 0.62;
	double nautMil = km / 0.54;

	cout << "\n\tkm in statute miles : " << statMil << "\n\n";
	cout << "\tkm in nautical miles : " << nautMil << "\n";

	return 0;
}
