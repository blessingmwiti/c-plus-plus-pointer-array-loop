#include <iostream>
using namespace std;
int main () {
	int a[3] = {2, 3, 4};
	int *ip;
	ip = a;
	for (int i = 0; i < 3; i++) {
		cout<<"*(ip + "<<i<<") : "<<*(ip + i)<<" \n";
	}
	for (int j = 0; j < 3; j++) {
		cout<<"arrays in a : "<<a[j]<<" \n";
	}
	cout<<"location of array a is : "<<&a<<" \n";
	return 0;
}