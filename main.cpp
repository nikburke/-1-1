#include <iostream>
using namespace std;
int main() {
  cout << sizeof(int) << "\n";
  cout << sizeof(short int)<< "\n";
  cout << sizeof(long int)<< "\n";
  cout << sizeof(float)<< "\n";
  cout << sizeof(double)<< "\n";
  cout << sizeof(long double)<< "\n";
  cout << sizeof(char)<< "\n";
  cout << sizeof(bool)<< "\n";

int value = -137; // Значение числа
	unsigned int order = 32; // Количество разрядов
	unsigned int mask = 1 << (order - 1); // Маска побитового сравнения
	for (int i = 1; i <= order; i++)
	{
		putchar(value & mask ? '1' : '0'); 
		value <<= 1; // Побитовый сдвиг числа

    
		switch (i){
    case 1:
		 putchar(' ');
	   break;
		case 9:
		 putchar(' ');
	   break;
     case 17:
		 putchar(' ');
	   break;
     case 25:
		 putchar(' ');
	   break;

     } 
	}
cout << '\n';
union {
int value1;
float numb_f = 3.14;
};
	order = 32; // Количество разрядов
	mask = 1 << (order-1); // Маска побитового сравнения
	for (int i = 1; i <= order; i++)
	{
		putchar(value1 & mask ? '1' : '0'); 
		value1 <<= 1; // Побитовый сдвиг числа
		switch (i){
    case 1:
		 putchar(' ');
	   break;
		case 9:
		 putchar(' ');
	   break;
     } 
  }
  cout << '\n';
union {
int value2;
double numb_f1 = 3.14;
};
	order = 64; // Количество разрядов
	mask = 1 << (order-1); // Маска побитового сравнения
	for (int i = 1; i <= order; i++)
	{
		putchar(value2 & mask ? '1' : '0'); 
		value2 <<= 1; // Побитовый сдвиг числа
		switch (i){
    case 1:
		 putchar(' ');
	   break;
		case 12:
		 putchar(' ');
	   break;
     } 
  }





  
  return 0;
  }