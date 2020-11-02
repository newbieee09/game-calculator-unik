#include <iostream>
using namespace std;

int main()
{
	float a,b,hasil,jawabanku;
	char aritmatika;
	
	cout << "==========SIMPLE CALCULATOR PROGRAM========== \n \n";
	cout << "INSERT VALUE FIRST = "; cin >> a; 
	cout << "Pilih Operator = +, -, *, /  = "; cin >> aritmatika;
	cout << "INSERT VALUE SECOND = "; cin >> b;
	
	cout << "\n \n ==========TOTAL VALUE========== : " << endl;
	//cout << a << aritmatika << b;
	
	if (aritmatika == '+'){
		hasil = a + b;
	}else if (aritmatika == '-'){
		hasil = a - b;
	}else if (aritmatika == '*'){
		hasil = a * b;
	}else if (aritmatika == '/'){
		hasil = a / b;
	}else {
		cout << "YOUR OPERATOR IS UNDIFINED" << endl;
	}
	cin >> jawabanku;
	if (hasil != jawabanku){
		cout << "false";
	} else {
		cout << "true";
	}
}
