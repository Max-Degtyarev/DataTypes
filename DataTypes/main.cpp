#include<iostream>
using namespace std;

//#define BOOLEAN
//#define INTEGRAL_TYPES
//#define EXAMPLE
#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4



void main()
{
	setlocale(LC_ALL, "Russian");
#if defined BOOLEAN
	cout << true << "\n";
	cout << false << endl;
#endif

#if defined INTEGRAL_TYPES
	cout << "short:\n";
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << 0 << "..." << USHRT_MAX << endl;
	cout << endl;
#endif

#if defined EXAMPLE
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << endl;

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
	cout << endl;
#endif



#if defined TASK_1
	float number;
	short rub;
	short kop;
	cout << "\t\t\t\t�������������� ����� � �������� ������ \n\n";
	cout << "������� ������� ����� - ";
	cin >> number;
	rub = int(number);
	kop = (number - rub) * 100;
	cout << number << " ���. - ��� " << rub << " ���. " << kop << " ���.";
	cout << "\n\n\n";

#endif




#if defined TASK_2
	float price_of_copybook;
	short quantity_of_copybooks;
	float price_of_pencil;
	short quantity_of_pencils;
	cout << "\t\t\t\t���������� ��������� �������\n\n";
	cout << "������� �������� ������:\n";
	cout << "���� ������� (���.) - ";
	cin >> price_of_copybook;
	cout << "���������� �������� - ";
	cin >> quantity_of_copybooks;
	cout << "���� ��������� (���.) - ";
	cin >> price_of_pencil;
	cout << "���������� ���������� - ";
	cin >> quantity_of_pencils;
	cout << "��������� �������: ";
	cout << price_of_copybook * quantity_of_copybooks + price_of_pencil * quantity_of_pencils;
	cout << " ���.";
	cout << "\n\n\n";

#endif

#if defined TASK_3
	float price_of_copybook;
	float price_of_cover;
	short quantity_of_sets;
	cout << "\t\t\t\t���������� ��������� �������\n\n";
	cout << "������� �������� ������:\n";
	cout << "���� ������� (���.) - ";
	cin >> price_of_copybook;
	cout << "���� ������� (���.) - ";
	cin >> price_of_cover;;
	cout << "���������� ���������� (��.) - ";
	cin >> quantity_of_sets;
	cout << "��������� �������: ";
	cout << (price_of_copybook + price_of_cover) * quantity_of_sets;
	cout << " ���.";
	cout << "\n\n\n";

#endif

#if defined TASK_4
	float distance_to_dacha;
	float consumption;
	float price_of_petrol;
	cout << "\t\t\t\t���������� ��������� ������� �� ���� � �������\n\n";
	cout << "���������� �� ���� (��.) - ";
	cin >> distance_to_dacha;
	cout << "������ ������� (������ �� 100 ��. �������) - ";
	cin >> consumption;
	cout << "���� ����� ������� (���.) - ";
	cin >> price_of_petrol;
	cout << "������� �� ���� � ������� ��������� � ";
	cout << ((distance_to_dacha * consumption / 100) * 2) * price_of_petrol;
	cout << " ���.";
	cout << "\n\n\n";


#endif



}