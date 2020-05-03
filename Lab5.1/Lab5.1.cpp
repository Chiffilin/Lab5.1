#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, d, e, g,ans;
	ifstream F;
	ofstream Test;
	Test.open("D:\\Games\\Test.txt", ios::out);
	F.open("D:\\Games\\f.txt", ios::in);
	F >> a >> b >> c >> d >> e >> g;
	ans = a * b * c * d * e * g;
	Test << "Ответ: "<<ans;
	F.close();
	Test.close();
	system("pause");
	return 0;
}