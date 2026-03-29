#include <iostream>
using namespace std;
int main(){
	int wynik;
	string ocena;
	
	cout << "Podaj wynik egzaminu (liczba punktow): ";
	cin >> wynik;

	if ((wynik >= 0) && (wynik <= 100)) {
		if (wynik == 100) {
		ocena = "celujaca";
    	} else if ((wynik >= 85) && (wynik <= 99)) {
		ocena = "bardzo dobra";
    	}if ((wynik >= 70) && (wynik <= 84)) {
		ocena = "dobra";
    	} else if ((wynik >= 50) && (wynik <= 69)) {
		ocena = "dostateczna";
    	} else if ((wynik >= 0) && (wynik <= 49)) ocena = "niedostateczna";
	} else {
		ocena = "brak";
    	cout << "Liczba jest poza zakresem." << endl;
	}
  
	cout << "Ocena: " << ocena << endl;
    return 0;
}