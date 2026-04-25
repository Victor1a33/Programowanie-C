#include <iostream>
using namespace std;
int main(){
	int liczba;
	string decyzja;
	
	do {
		cout << "Podaj liczbe: ";
		cin >> liczba;
		
		cout << "Wprowadziles liczbe: " << liczba << endl;
		
		cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
		cin >> decyzja;
	} while (decyzja == "t");
	
	cout << "Dziekuje za wprowadzenie liczb.";
	
    return 0;
}