#include<iostream>
#include<cmath>

using namespace std;


int main()
{
	int sayi_1, sayi_2;
	char islem;
	int sonuc;
	
	cout << "HESAP MAKINESI" << endl;
	
	cout << "Sayi 1:" << endl;
	cin >> sayi_1;
	
	cout << "Sayi 2:" << endl;
	cin >> sayi_2;
	
	cout << "Yapmak istediginiz islem (+ - * / ^):" << endl;
	cin >> islem;
	
	
	if (islem == '+')
	{
		sonuc = sayi_1 + sayi_2;
	}
	
	else if (islem == '-')
	{
		sonuc = sayi_1 - sayi_2;
	}
	
	else if (islem == '*')
	{
		sonuc = sayi_1 * sayi_2;
	}
	
	else if (islem == '/')
	{
		sonuc = sayi_1 / sayi_2;
	}
	
	else if (islem == '^')
	{
		sonuc = pow(sayi_1 , sayi_2);
	}
	
	else
	{
		cout << "Hatali islem! Tekrar deneyiniz." << endl;
	}
	
	cout << "Sonuc:" << sayi_1 << islem << sayi_2 << "=" << sonuc << endl;
	system ("pause");
	
	return sonuc;
	
}
