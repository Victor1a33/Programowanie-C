#include <iostream>
using namespace std;
int main(){
	int wysokosc, szerokosc;


	cout << "Podaj szerokosc: ";
	cin >> szerokosc; 
	cout << "Podaj wysokosc: ";
	cin >> wysokosc;  
	
	cout << endl;
	
	int margin = -1;
	                
	for (int i = 0; i < wysokosc; i++) {
		margin++;
	    for (int j = 0; j < szerokosc; j++) 
		{
			if (j >= margin && j <= (szerokosc - margin - 1)) {
			cout << "*";
			} else {
				cout << " ";
			}
	    }
	    cout << endl;
	}
	
    return 0;
}