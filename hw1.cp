#include <iostream>
using namespace std;

void main()
{
	float height=0,weight=0,bmi=0;

	cout << "�п�J�����B�魫�G"<<endl;
	while (cin >> height >> weight)
	{
		bmi = weight / ((height / 100) * (height / 100));

		if (bmi < 18.5)
			cout << bmi << " �魫�L��" << endl;
		if (18.5 <= bmi && bmi < 24)
			cout << bmi << " ���`�d��" << endl;
		if (24 <= bmi && bmi < 27)
			cout << bmi << " �L��" << endl;
		if (27 <= bmi && bmi < 30)
			cout << bmi << " ���תέD" << endl;
		if (30 <= bmi && bmi < 35)
			cout << bmi << " ���תέD" << endl;
		if (bmi >= 35)
			cout << bmi << " ���תέD" << endl;
	}
	system("pause");
}