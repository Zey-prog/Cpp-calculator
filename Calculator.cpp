#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	char op;
	float num1;
	float num2;
		
	while(1){
		cout << "===========" <<endl;
		cout <<"CALCULATOR" <<endl;
		cout << "===========" <<endl;
		cout <<">>";
		cin >> num1 >> op >> num2;
		
		switch(op)
	{
		case '+' :
			cout <<num1+num2;
			break;
		case '-' :
			cout <<num1-num2;
			break;
		case '*' :
			cout <<num1*num2;
			break;
		case '/' :
			cout <<num1/num2;
			break;
		default:
			cout << "You've entered a wrong key try again";
	}
	cout <<endl;
	system("pause");
	system("CLS");
	}
	
	return 0;
}
