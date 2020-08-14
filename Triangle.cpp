#include <iostream>
using namespace std;
/*
From : Ayeko Leke

This is just a test Repo.

*/
int main() {
	int size = 5;
	int space = size;
	for (int i = 0; i < size; i++) {
		for (int s = 0; s < space; s++) {
			cout<<" ";
		}
		space--;
		for (int j = 0; j < i + 1; j++) {
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
