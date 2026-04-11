#include <iostream>
using namespace std;
int main(){
	float masa, wzrost, BMI;
	string stan;
	
	cout << "Podaj wage (w kilogramach): ";
	cin >> masa;
	cout << "Podaj wzrost (w metrach): ";
	cin >> wzrost;
	
	BMI = masa / (wzrost * wzrost);

	if (BMI < 18.5) {
		stan = "niedowaga";
    	} else if ((BMI >= 18.5) && (BMI <= 24.9)) {
		stan = "w normie";
    	} else if ((BMI >= 25) && (BMI <= 29.9)) {
		stan = "nadwaga";
	} else {
		stan = "otylosc";
	}
  
	cout << "Twoje BMI wynosi: " << BMI << endl;
	cout << "Twoj stan wagowy: " << stan << endl;
    return 0;
}