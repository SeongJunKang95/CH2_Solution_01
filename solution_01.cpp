#include <iostream>
using namespace std; 

double total(double X []){
	double S = X[0] + X[1] + X[2] + X[3] + X[4];

	return S;
}
double avg(double y) {
	double A = y / 5 ;

	return A;
}

	int main()
	{
		double usre[5];

		cout << "ù ��° ������� ������ �Է����ּ���" << endl;
		cin >> usre[0];

		cout << "�� ��° ������� ������ �Է����ּ���" << endl;
		cin >> usre[1];

		cout << "�� ��° ������� ������ �Է����ּ���" << endl;
		cin >> usre[2];

		cout << "�� ��° ������� ������ �Է����ּ���" << endl;
		cin >> usre[3];

		cout << "�ټ� ��° ������� ������ �Է����ּ���" << endl;
		cin >> usre[4];
		
		double TT = total(usre);
		double AA = avg(TT);

		

		cout << "����" << TT;
		cout << "���" << AA;

	
	}  
		
		
	
		


	


