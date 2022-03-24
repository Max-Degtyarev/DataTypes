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
	cout << "\t\t\t\tПреобразование числа в денежный формат \n\n";
	cout << "Введите дробное число - ";
	cin >> number;
	rub = int(number);
	kop = (number - rub) * 100;
	cout << number << " руб. - это " << rub << " руб. " << kop << " коп.";
	cout << "\n\n\n";

#endif




#if defined TASK_2
	float price_of_copybook;
	short quantity_of_copybooks;
	float price_of_pencil;
	short quantity_of_pencils;
	cout << "\t\t\t\tВычесление стоимости покупки\n\n";
	cout << "Введите исходные данные:\n";
	cout << "Цена тетради (руб.) - ";
	cin >> price_of_copybook;
	cout << "Количество тетрадей - ";
	cin >> quantity_of_copybooks;
	cout << "Цена карандаша (руб.) - ";
	cin >> price_of_pencil;
	cout << "Количество карандашей - ";
	cin >> quantity_of_pencils;
	cout << "Стоимость покупки: ";
	cout << price_of_copybook * quantity_of_copybooks + price_of_pencil * quantity_of_pencils;
	cout << " руб.";
	cout << "\n\n\n";

#endif

#if defined TASK_3
	float price_of_copybook;
	float price_of_cover;
	short quantity_of_sets;
	cout << "\t\t\t\tВычесление стоимости покупки\n\n";
	cout << "Введите исходные данные:\n";
	cout << "Цена тетради (руб.) - ";
	cin >> price_of_copybook;
	cout << "Цена обложки (руб.) - ";
	cin >> price_of_cover;;
	cout << "Количество комплектов (шт.) - ";
	cin >> quantity_of_sets;
	cout << "Стоимость покупки: ";
	cout << (price_of_copybook + price_of_cover) * quantity_of_sets;
	cout << " руб.";
	cout << "\n\n\n";

#endif

#if defined TASK_4
	float distance_to_dacha;
	float consumption;
	float price_of_petrol;
	cout << "\t\t\t\tВычесление стоимости поездки на дачу и обратно\n\n";
	cout << "Расстояние до дачи (км.) - ";
	cin >> distance_to_dacha;
	cout << "Расход бензина (литров на 100 км. пробега) - ";
	cin >> consumption;
	cout << "Цена литра бензина (руб.) - ";
	cin >> price_of_petrol;
	cout << "Поездка на дачу и обратно обойдется в ";
	cout << ((distance_to_dacha * consumption / 100) * 2) * price_of_petrol;
	cout << " руб.";
	cout << "\n\n\n";


#endif



}