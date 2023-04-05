#include <iostream>
using namespace std;


void faktoriyel(int *a) {
	int carpým = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 1; j <= a[i]; j++) {
			
			carpým *=j;
			  
			


		}
		 cout << carpým << endl;
		




	}
	
}


int main() {
	

	int x, dizi[5];
	for (int i = 0; i < 5; i++) {
		cout << "dizi elemanlarini girin" << endl;

		cin>> dizi[i];

	

	}

	 faktoriyel(dizi);

	

	

	 

	  system("PAUSE");
	  return 0;

}