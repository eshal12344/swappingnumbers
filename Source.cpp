#include<iostream>
using namespace std;
void swap(int& a,int& b) {
	int c=0;
	c = a;
	a = b;
	b = c;

}
int main() {
	int a, b;
	cout << "Enter the value of a =";
	cin >> a;
	cout << "Enter the value of b =";
	cin >> b;
	swap(a, b);
	cout << "Value of a after exchange =" <<a<< endl;
	cout << "Value of b after exchange =" <<b<< endl;

	return 0;
}