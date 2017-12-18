#include <iostream>
using namespace std;
// SEMIH SAHIN - POZITIF BOLENLER

int main(){
	int sayi, i=2;
	do{
		cout << "Pozitif bir tamsayi giriniz: ";
		cin >> sayi;
	}while(sayi<=0);
	system("cls");
	cout << sayi << " sayisinin pozitif bolenleri:\n1";
	for(i; i<=sayi; i++){
		if (sayi%i==0){
			cout << ", " << i;
		}
	}
	cout << "\n\n";
	system("pause");
	return 0;
}
