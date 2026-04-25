#include <iostream>
using namespace std;
int main(){
	int wysokosc, szerokosc;

	cout << "Podaj szerokosc: ";
	cin >> szerokosc; 
	cout << "Podaj wysokosc: ";
	cin >> wysokosc;  
	
	cout << endl;  
	                
	for (int i = 0; i < wysokosc; i++) {	
	    for (int j = 0; j < szerokosc; j++) 
		{
	        if ((i == 0) || (i == wysokosc - 1)) {
			cout << "-";
			} else if ((j == 0 || j == szerokosc - 1) && (i != 0) && (i != wysokosc -1)) {
				cout << "|";
			} else if ((i + j) % 2 == 1) {
				cout << "*";
			} else {
				cout << "#";
			}
	    }
	    cout << endl;
	}
	
    return 0;
}