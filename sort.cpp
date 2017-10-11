#include<iostream>
using namespace std;

int main()
{
	int temp, a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0 ; i < 10 ; i++) {
		cout << "Pass " << i << endl;
		for (int k = 0 ; k < 10 ; k++) //Prints out the array before each pass
			cout << a[k] << endl;
		for (int j = 0 ; j < 9-i ; j++)
			if (a[j] < a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
	}
	for (int i = 0 ; i < 10 ; i++)
		cout << a[i] << endl;
}


//SAMPLE: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
