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

		cout << "첫 번째 사용자의 점수를 입력해주세요" << endl;
		cin >> usre[0];

		cout << "두 번째 사용자의 점수를 입력해주세요" << endl;
		cin >> usre[1];

		cout << "세 번째 사용자의 점수를 입력해주세요" << endl;
		cin >> usre[2];

		cout << "네 번째 사용자의 점수를 입력해주세요" << endl;
		cin >> usre[3];

		cout << "다섯 번째 사용자의 점수를 입력해주세요" << endl;
		cin >> usre[4];
		
		double tt = total(usre);
		double AA = avg(tt);

		cout << "총점" << tt;
		cout << "평균" << AA;

		// cout << "총점" << total(usre);
	}  //double total = usre[0] + usre[1] + usre[2] + usre[3] + usre[4];
		//double avg = total / 5;
		//cout << "총점" << total << endl;
		//cout << "평군" << avg << endl;
	
		


	


