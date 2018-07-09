#include <iostream>
using namespace std;

void main()
{
	float height=0,weight=0,bmi=0;

	cout << "請輸入身高、體重："<<endl;
	while (cin >> height >> weight)
	{
		bmi = weight / ((height / 100) * (height / 100));

		if (bmi < 18.5)
			cout << bmi << " 體重過輕" << endl;
		if (18.5 <= bmi && bmi < 24)
			cout << bmi << " 正常範圍" << endl;
		if (24 <= bmi && bmi < 27)
			cout << bmi << " 過重" << endl;
		if (27 <= bmi && bmi < 30)
			cout << bmi << " 輕度肥胖" << endl;
		if (30 <= bmi && bmi < 35)
			cout << bmi << " 中度肥胖" << endl;
		if (bmi >= 35)
			cout << bmi << " 重度肥胖" << endl;
	}
	system("pause");
}