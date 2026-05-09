#include <iostream>
using namespace std;
int main(){
	int ilosc;
	
	ilosc = 0;
	                
	for (int i = 1; i <= 9; i++) {
	    for (int j = 0; j <= 9; j++) {
	    	for (int x = 0; x <= 9; x++) {
				if ((j != i) && (x != i) && (x != j)) {
					cout << i << j << x << endl;
					ilosc += 1;
				}
			}
	    }
	    cout << endl;
	}
	
	cout << "Liczba bez powtarzajacych sie cyfr: " << ilosc;
	
    return 0;
}