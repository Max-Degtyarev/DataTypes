#include<iostream>
using namespace std;

//#define TASK_1
#define TASK_2

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1

	double money;
	cout << "������� �������� �����: "; cin >> money;
	//money += 1e-10;
	money += .0000000001;
	cout << money << endl;
	int rub = money; // ������� �������������� ����� �� double � int � ������� ������
	cout << rub << " ���.\t";
	int cop = (money - rub) * 100;
	cout << cop << " ���.\n";


#endif

#ifdef TASK_2

	double price_of_copybook, price_of_pencil;
	int number_of_copybooks, number_of_pencils;
	cout << "������� ��������� �������: "; cin >> price_of_copybook;
	cout << "������� ���������� ��������: "; cin >> number_of_copybooks;
	cout << "������� ��������� ���������: "; cin >> price_of_pencil;
	cout << "������� ���������� ���������� "; cin >> number_of_pencils;
	double total_price = price_of_copybook * number_of_copybooks + price_of_pencil * number_of_pencils;
	cout << "����� ��������� �������: " << total_price << " ���." << endl;



#endif



}
