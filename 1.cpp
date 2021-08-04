//#define _CRT_SECURE_NO_WARNINGS   1


/*********************************************************

                      默认参数类型

**********************************************************/
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//void print(int *parry, int count, int num);
//int main()
//{
//	int i_arry[15], count;
//	cout << "please input some number:\n";
//	count = 0;
//	while (cin >> i_arry[count])
//	{
//		count++;
//		if (count >= 15)
//			break;
//	}
//	cout << "use default paramer:\n";
//	print(i_arry, count, 5);
//	cout << "dont :\n";
//	print(i_arry, count, 6);
//	return 0;
//}
//void print(int *parry, int count, int num)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << setw(5) << *(parry + i);
//		if ((i + 1) % num == 0)
//			cout << "\n";
//	}
//	cout << "\n";
//}


/*********************************************************

              演示默认参数值和重载函数的使用

**********************************************************/

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int sum_arry(int arry[], int count)
//{
//	int sum = 0;
//	for (int i = 0; i < count; i++)
//		sum += arry[i];
//	return sum;
//}
//void print(int arry[], int count)
//{
//	for (int i = 0; i < count; i++)
//		cout << setw(5) << arry[i];
//}
//void print(int value)
//{
//	cout << setw(10) << value;
//}
//int main()
//{
//	int arry[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int count = 9;
//	int value = sum_arry(arry, count);
//	if (value > 100)
//		print(arry, count);
//	else
//		print(value);
//	return 0;
//}

/*
//常用流状态符演示
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
cout<<showpos<<12<<" "<<34<<noshowpos<<endl;//showpos显示正号
cout<<hex<<18<<" "<<16<<noshowpos<<endl;//hex显示16进制
cout<<dec<<left<<setw(5)<<5<<setw(5)<<6<<endl;//十进制显示整数
cout<<right<<setw(5)<<5<<setw(5)<<6<<endl;
cout<<showpoint<<12.0<<" "<<13.0<<endl;//输出浮点
cout<<14.01<<" "<<15.04<<endl;
cout<<fixed<<14.01<<" "<<15.04<<endl;//定点显示
cout<<scientific<<14.01<<" "<<15.04<<endl;//尾数和指数
//带参数的常用流状态
cout.width(6);//设置显示宽度
cout<<5<<endl;
cout.fill('x');//设置填充字符
cout.width(6);
cout<<6;
cout.width(4);
cout<<7<<endl;
cout.width(4);
cout.fill(' ');
cout<<7<<endl;
cout.precision(4);//设置有效精度
cout<<12.011234<<endl;
cout<<fixed<<13.0212345<<endl;
//与插入运算符连用的流状态
cout<<setw(5)<<5<<endl;
cout<<setfill('x')<<setw(4)<<7<<endl;//设置填充字符
cout<<setprecision(4)<<12.011234<<endl;//设置有效位数或精度
cout<<fixed<<13.0212345<<endl;
return 0;
}
*/
/****************************************************

文件操作演示

****************************************************/
//#include<iostream>
//#include<fstream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	ifstream fin("C:\\Users\\卢鑫\\Desktop\\1.txt", ios_base::in);
//	if (!fin)
//	{
//		cout << "can't open" << endl;
//		exit(0);
//	}
//	ofstream fout("result.txt", ios_base::out);
//	if (!fout)
//	{
//		cout << "can't open successfully" << endl;
//		exit(0);
//	}
//	int i_arry[100];
//	int count = 0;
//	while (fin >> i_arry[count])
//	{
//		count++;
//		if (count >= 100)
//			break;
//	}
//	for (int i = 0; i<count; i++)
//	{
//		cout << setw(5) << i_arry[i];
//		if ((i + 1) % 8 == 0)
//			cout << "\n";
//	}
//	return 0;
//}


/****************************************************

演示异常的基本操作

****************************************************/
//#include<iostream>
//#include<string>
//using namespace std;
//int strtoint(const string &str)
//{
//	int num = 0;
//	for (unsigned int i = 0; i < str.length(); i++)
//	{
//		if ((str.at(i) >= '0') && (str.at(i) <= '9'))
//		{
//			num = num * 10 + str.at(i) - '0';
//		}
//		else
//		{
//			throw str.at(i);
//		}
//	}
//	return num;
//}
//int main()
//{
//	string str;
//	int i_value;
//	cout << "please input a number string :\n";
//	cin >> str;
//	try
//	{
//		i_value = strtoint(str);
//		if (i_value > 10000)
//			throw i_value;
//	}
//	catch (char c)
//	{
//		cout << "input string include illegal character:"<<c << endl;
//		i_value = -1;
//	}
//	catch (int)
//	{
//		cout << "number is too big:"  << endl;
//	}
//	cout << i_value << endl;
//	return 0;
//}

/****************************************************

类的定义

****************************************************/
//#include<iostream>
//using namespace std;
//class Date
//{
//private:
//	int year;
//	int month;
//	int day;
//public:
//	inline void init_date(int y, int m, int d);
//	bool is_leap_year()
//	{
//		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//			return true;
//		else
//			return false;
//	}
//	void print()
//	{
//		cout << year << "-" << month << "-" << day << endl;
//	}
//
//};
//void Date::init_date(int y, int m, int d)
//{
//	year = y;
//	month = m;
//	day = d;
//}
//void main()
//{
//	Date today, yesterday, tommorrow;
//	today.init_date(2015, 2, 28);
//	yesterday.init_date(2015, 2, 27);
//	if (today.is_leap_year())
//		tommorrow.init_date(2015, 2, 29);
//	else
//		tommorrow.init_date(2015, 3, 1);
//	yesterday.print();
//	today.print();
//	tommorrow.print();
//}

/*****************************************************

类的构造函数

******************************************************/
//#include<iostream>
//using namespace std;
//class Date
//{
//private :
//	int year;
//	int month;
//	int day;
//public:
//	void init_date(int y, int m, int d)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	bool is_leap_year()
//	{
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//	    return true;
//	else
//	    return false;
//     }
//	void print()
//	{
//		cout << year << "-" << month << "-" << day << endl;
//	}
//};
//void main()
//{
//	Date oneday;
//	oneday.print();
//	oneday.print();
//	oneday.init_date(2015, 8, 3);
//	oneday.print();
//}
/*****************************************************

析构函数

******************************************************/
//#include<iostream>
//using namespace std;
//class person
//{
//	char *pname;
//public:
//	person(char*PN = "noname")
//	{
//		cout << "constructing " << PN << "\n";
//		pname = new char[strlen(PN) + 1];
//		if (pname)
//			strcpy(pname, PN);
//	}
//	~person()
//	{
//		cout << "destructing" << pname << "\n";
//		delete pname;
//	}
//};
//int main()
//{
//	person p1("randy");
//	return 0;
//}


/******************
验证usingnamespace位置
******************/

//
//#include<iostream>
//int main()
//{
//	using namespace std;
//	cout << "hello" << endl;
//	return 0;
//}


/******************
自定义函数
******************/
//#include<iostream>
//using namespace std;
//void simon(int );
//int main()
//{
//	simon(3);
//	cout << "pick an integer:\n";
//	int count;
//	cin >> count;
//	simon(count);
//	cout << "Done!\n";
//	return 0;
//}
//void simon(int n)
//{
//	cout << "simon says touch your toes " << n << " times" << endl;
//}

/*2.7.3*/
//#include<iostream>
//using namespace std;
//void self_defining_function1(void);
//void self_defining_function2(void);
//int main()
//{
//	self_defining_function1();
//	self_defining_function1();
//	self_defining_function2();
//    self_defining_function2();
//	return 0;
//}
//void self_defining_function1()
//{
//	cout << "There blind mice\n";
//}
//void self_defining_function2()
//{
//	cout << "See how there run\n";
//}

/*2.7.7*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x;
//	int y;
//	cout << "Enter the number of hours:";
//	cin >> x;
//	cout << "Enter the number of minutes:";
//	cin >> y;
//	cout << x << ":" << y << endl;
//	return 0;
//}

/*C++打印进制*/
//#include<iostream>
//#include<climits>
//using namespace std;
//int main()
//{
//	int chest = 42;
//	int waist = 42;
//	int inseam = 42;
//	cout << hex;
//	cout << waist;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch = 'M';
//	cout << 'M';
//	cout.put(ch);
//	return 0;
//}

/*验证换行符*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << endl;
//	cout << "\n";
//	cout << '\n';
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "\aOperation\"HyperHype\"is now activated!\n";
//	cout << "Enter your code:________\b\b\b\b\b\b\b\b";
//	long code;
//	cin >> code;
//	cout << "\aCode verified! Proceed with Plan 23!\n";
//	return 0;
//}


/*验证string类*/
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//int main()
//{
//	char charr[20];//未初始化，结束随机
//	string str;
//	cout << "Length of string in charr before input:"
//		<< strlen(charr) << endl;
//	cout << "Length of string in str before input:"
//		<< str.size() << endl;
//	cout << "Enter a line of text:\n";
//	cin.getline(charr, 20);
//	cout << "you entered :" << charr << endl;
//	cout << "enter another line of text :\n";
//	getline(cin, str);
//	cout << "Length of string in charr after input:"
//		<< strlen(charr) << endl;
//	cout << "Length of string in str after input:"
//		<< str.size() << endl;
//	return 0;
//}

/*在程序中使用结构*/
//#include<iostream>
//using namespace std;
//struct inflatable
//{
//	char name[20];
//	float volume;
//	double price;
//};
//int main()
//{
//	inflatable guest =
//	{
//		"Glorious Gloria",
//		1.88,
//		29.99
//	};
//	inflatable pal = 
//	{ "Audacious Arthur",
//	   3.12,
//	   32.99
//	};
//	cout << "Expand your guest list with " << guest.name;
//	cout << "and " << pal.name  << "!\n";
//	cout << "you can have both for $";
//	cout << guest.price + pal.price << endl;
	//return 0;
//}

//#include<iostream>
//using namespace std;
//const int FOOT_TO_INCH = 12;
//int main()
//{
//	int nights = 1001;
//	int *pt = new int;
//	*pt = 1001;
//	cout << "nights value= " << nights << ": location " << &nights << endl;
//	return 0;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	double *p3 = new double[3];
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//	cout << "p3[1] is " << p3[1] << endl;
//	p3 = p3 + 1;
//	cout << "now p3[0] is " << p3[0] << endl;
//	cout << "p3[1] is " << p3[1] << endl;
//	p3 = p3 - 1;
//	delete[]p3;
//	return 0;
//}


/*use different forms of strings */
//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	char animal[20] = "bear";
//	const char *bird = "wren";
//	char *ps;
//	cout << animal << " and ";
//	cout << bird << endl;
//	cout << "Enter a kind of animal:";
//	cin >> animal;
//	ps = animal;
//	cout << ps << endl;
//	cout << "before using strcpy():\n";
//	cout << animal << " at " << (int *)animal << endl;
//	cout << ps << " at " << (int *)ps << endl;
//	ps = new char[strlen(animal) + 1];
//	strcpy(ps, animal);
//	cout << "after using strcpy():\n";
//	cout << animal << " at " << (int *)animal << endl;
//	cout << ps << " at " << (int *)ps << endl;
//	delete[]ps;
//	return 0;
//}

/*the use of the structure pointer*/
//#include<iostream>
//struct inflatable
//{
//	char name[20];
//	float volume;
//	double price;
//};
//using namespace std;
//int main()
//{
//	inflatable *ps = new inflatable;
//	cout << "Enter name of inflatable item :";
//	cin.get(ps->name, 20);
//	cout << "Enter volume in cubic feet :";
//	cin >> (*ps).volume;
//	cout << "Enter price: $";
//	cin >> ps->price;
//	cout << "name : " << (*ps).name << endl;
//	cout << "volume:" << ps->volume << " cubic feet\n";
//	cout << "price:$" << ps->price << endl;
//	delete ps;
//	return 0;
//}

/**/
//#include<iostream>
//#include<cstring>
//using namespace std;
//char * getname(void)
//{
//	char temp[80];
//	cout << "Enter last name: ";
//	cin >> temp;
//	char *pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//	return pn;
//}
//int main()
//{
//	char * name;
//	name = getname();
//	cout << name << " at " << (int *)name << endl;
//	delete[]name;
//	name = getname();
//	cout << name << " at " << (int *)name << endl;
//	delete[]name;
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<array>
//using namespace std;
//int main()
//{
//	double al[4] = { 1.2, 2.4, 3.6, 4.8 };
//	array<double, 4>a3 = { 1, 2, 3, 4 };
//	array<double, 4>a4;
//	a4 = a3;
//	cout << a4[2] << endl<< &a4[2] << endl;
//	cout << a3[2] << endl << &a3[2] << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//struct CandyBar
//{
//	char brand[20];
//	float weight;
//	unsigned int calorie;
//};
//int main()
//{
//	CandyBar *pc = new CandyBar[3];
//	strcpy(pc[0].brand, "Mocha Munch");
//	pc[0].weight = 2.3;
//	pc[0].calorie = 456;
//	strcpy(pc[1].brand, "Hershery bar");
//	pc[1].weight = 2.4;
//	pc[1].calorie = 445;
//	strcpy(pc[2].brand, "Musketeeres");
//	pc[2].weight = 2.5;
//	pc[2].calorie = 556;
//	cout << "My 1st CandyBar is " << pc[0].brand << "." << endl;
//	delete[]pc;
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x = 100;
//	cout.setf(ios_base::boolalpha);
//	cout << (x < 3) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	cout << "Enter a word>>" << endl;
//	string word;
//	cin >> word;
//	char temp;
//	int i, j;
//	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
//	{
//		temp = word[i];
//		word[i] = word[j];
//		word[j] = temp;
//	}
//	cout << word << "\nDone \n";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char word[5] = "?ate";
//	for (char ch = 'a'; strcmp(word, "mate"); ch++)
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "After loop ends,word is " << word << endl;
//	return 0;
//}


//#include<iostream>
//#include<ctime>
//using namespace std;
//int main()
//{
//	cout << "Enter the delay time\n";
//	float secs;
//	cin >> secs;
//	clock_t delay = secs*CLOCKS_PER_SEC;
//	cout << "starting\a\n";
//	clock_t strat = clock();
//	while (clock() - strat < delay)
//		;
//	cout << "Done\a" << endl;
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	double prices[5] = { 4.33, 2.3, 4.5, 6.7, 6.4 };
//	for (double &x : prices)
//	{
//		x = x*0.8;
//		cout << x << std::endl;
//	}
//	return 0;
//}


/*5.9.1*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int sum = 0;
//	int x, y;
//	cin >> x;
//	cin >> y;
//	for (int i = x; i <= y; i++)
//	{
//		 sum += i;
//	}
//	cout << sum << endl;
//	return 0;
//}


/*5.9.2*/
//#include<iostream>
//#include<array>
//const int ArSize = 101;
//
//using namespace std;
//
//int main()
//{
//	array<long double, ArSize>factorials;
//	factorials[1] = factorials[0] = 1;
//	for (int i = 2; i < ArSize; i++)
//	{
//		factorials[i] = i*factorials[i - 1];
//	}
//	for (int i = 0; i < ArSize; i++)
//	{
//		cout << i << "!=" << factorials[i] << endl;
//	}
//	return 0;
//}


/*5.9.3*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int ch;
//	int sum = 0;
//	do 
//	{
//		cin >> ch;
//		sum += ch;
//	} while (ch);
//	cout << sum << endl;
//	return 0;
//}

/*5.9.4*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n=0;
//	int sum1 = 100;
//	int sum2 = 100;
//	while (sum2 >= sum1)
//	{
//		n++;
//		sum1 = 100 + 10 * n;
//		sum2 = sum2+sum2*0.5;
//	}
//	cout << n << endl;
//	return 0;
//}

/*5.9.5*/
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int i = 0;
//	const string Month[] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL",
//		"AUG", "SEP", "OCT", "MOV", "DEC" };
//	int sale_amount[12] = {};
//	unsigned int sum = 0;
//	for (i = 0; i < 12; i++)
//	{
//		cout << "Enter the sale amount of  " << Month[i]  << ":";
//		cin >> sale_amount[i];
//	}
//	cout << "Input DONE!" << endl;
//	for (i = 0; i < 12; i++)
//	{
//		cout<< Month[i] << "SALE :" << sale_amount[i] << endl;
//		sum += sale_amount[i];
//	}
//	cout << "Total sale " << sum << "this year" << endl;
//	return 0;
//}

/*5.9.5*/
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int i = 0;
//	int j = 0;
//	const string Month[] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL",
//		"AUG", "SEP", "OCT", "MOV", "DEC" };
//	int sale_amount[3][12] = {};
//	unsigned int sum = 0;
//	for (j = 0; j< 3; j++)
//	{
//		cout << "the " << j + 1 << " year" << endl;
//		for (i = 0; i < 12; i++)
//		{
//			cout << "Enter the sale amount of  " << Month[i] << ":";
//			cin >> sale_amount[j][i];
//		}
//	}
//	cout << "Input DONE!" << endl;
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 12; i++)
//		{
//			cout << Month[i] << "SALE :" << sale_amount[i] << endl;
//			sum += sale_amount[j][i];
//		}
//	}
//	cout << "Total sale " << sum << "this year" << endl;
//	return 0;
//}


/*5.9.7*/
//#include<iostream>
//#include<string>
//struct car
//{
//	string maker[20];
//	int date_year;
//};
//using namespace std;
//int main()
//{
//	int n;
//	int i;
//	cout << "How many cars do you wish to catalog ?\n";
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cout << "Car # " << i + 1 << endl;
//		cout << "Please input the maker\n";
//		cin >>car.maker[20];
//		cout << "Please input the data_year\n";
//	}
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arry[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//}


////#include<iostream>
////using namespace std;
////int regression_equation(int size,int x[], int y[],int new_student)
////{
////	int t1 = 0,t2 = 0, t3 = 0,t4 = 0;
////	double a = 0, b = 0;
////	int i = 0;
////	for (i = 0; i < size; i++)
////	{
////		t1 += x[i] * x[i];
////		t2 += x[i];
////		t3 += x[i] * y[i];
////		t4 += y[i];
////	}
////	b= (t3 - t2*t4 / size) / (t1 - t2*t2 / size);
////	a = t4 / size - b*t2 / size;
////	cout << "y=" << b << " * x + " << a << endl;
////	return (b*new_student + a);
////}
////int main()
////{
////	int student[10] = {2,6,8,8,12,16,20,20,22,26};
////	int profit[10] = {58,105,88,118,117,137,157,169,149,202};
////	int student_new=0;
////	cin >> student_new;
////	int profit_new=0;
////	profit_new=regression_equation(10.0,student,profit,student_new);
////	cout << profit_new << endl;
////	return 0;
////}

//#include<iostream>
//using namespace std;
//unsigned int c_in_str(const char *str, char ch);
//int main()
//{
//	char mmm[15] = "minium";
//	char *wail = "ululate";
//	unsigned int ms = c_in_str(mmm, 'm');
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//struct polar
//{
//	double distance;
//	double angle;
//};
//struct rect
//{
//	double x;
//	double y;
//};
//polar rect_to_polar(rect xypos)
//{
//	polar answer;
//
//	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//	return answer;
//}
//void show_polar(polar dapos)
//{
//	const double Rad_to_deg = 57.29577951;
//	cout << "angle= " << dapos.angle*Rad_to_deg;
//	cout << "degrees\n";
//}
//int main()
//{
//	rect rplace;
//	polar pplace;
//	cout << "Enter the x and y values:";
//	while (cin >> rplace.x>>rplace.y)
//	{
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "Next two numbers (q to quit):";
//	}
//	cout << "Done .\n";
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//struct polar
//{
//	double distance;
//	double angle;
//};
//struct rect
//{
//	double x;
//	double y;
//};
//void rect_to_polar(const rect *pxy, polar *pda)
//{
//	pda->distance = sqrt(pxy->x*pxy->x + pxy->y*pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//}
//void show_polar(const polar*pa)
//{
//	const double Rad_to_deg = 57.29577951;
//	cout << "Distance =  " << pa->distance;
//	cout << "  angle = " << pa->angle*Rad_to_deg;
//	cout << "degree\n";
//}
//int main()
//{
//	rect rplace;
//	polar pplace;
//	cout << "Enter the x and y value :";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		rect_to_polar(&rplace, &pplace);
//		show_polar(&pplace);
//		cout << "Next two numbers (q to quit):\n";
//	}
//	cout << "Done>>\n";
//	return 0;
//}

//#include<iostream>
//#include<string>
//const int SIZE = 5;
//using namespace std;
//void display(const string sa[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << "  :  " << sa[i] << endl;
//	}
//}
//int main()
//{
//	string list[SIZE];
//	cout << "Enter your " << SIZE << "favorite astronomical sights :\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << i + 1 << ":";
//		getline(cin, list[i]);
//	}
//	cout << "Your list :\n";
//	display(list, SIZE);
//	return 0;
//}

//#include<iostream>
//#include<array>
//#include<string>
//const int Seasons = 4;
//using namespace std;
//const array<string, Seasons>Snames = { "Spring", "summer", "Fall", "Winter" };
//void fill(array<double, Seasons>*pa);
//void show(array<double, Seasons>da);
//int main()
//{
//	array<double, Seasons>expense;
//	fill(&expense);
//	show(expense);
//	return 0;
//}
//void fill(array<double, Seasons>*pa)
//{
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << "Enter " << Snames[i] << "  expense:";
//		cin >> (*pa)[i];
//	}
//}
//void show(array<double, Seasons>da)
//{
//	double total = 0.0;
//	cout << "\nEXPENSE\N";
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << Snames[i] << ": $ " << da[i] << endl;
//		total += da[i];
//	}
//	cout << "Total Expense : $" << total << endl;
//}

//#include<iostream>
//#include<string>
//#include<ctype.h>
//const int SIZE = 1000;
//using namespace std;
//int main()
//{
//	char strr[SIZE];
//	char word[26];
//	char str[SIZE];
//	int i = 0, m = 0;
//	int count[SIZE] = {0};
//	cout << "Please enter a string of characters>>" << endl;
//	cin.getline(strr, SIZE);
//	for (int k = 0; k < strlen(strr); k++)
//	{
//		if (isalpha(strr[k]))
//		{
//			if (isupper(strr[k]))
//			{
//				strr[k] = strr[k] + 32;
//			}
//			str[m] = strr[k];
//			m++;
//		}
//		else
//			break;
//		str[m] = '\0';
//	}
//	for ( i = 0; i < 26; i++)
//	{
//		int count1 = 0;
//		word[i] = i + 97;
//		for (int j = 0; j < strlen(str); j++)
//		{
//			if (word[i] == str[j])
//			{
//				++count1;
//				count[i] = count1;
//			}
//		}
//			if (count[i] >= 1)
//			{
//				cout << word[i] << "  " << count[i] << endl;
//			}
//	}
//
//	return 0;
//}


////no function
//#include<iostream>
//using namespace std;
//int main()
//{
//	int factorial = 1;
//	int arry[3] = { 4, 6, 8 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = arry[i]; j>0; j--)
//		{
//			factorial *= j;
//		}
//		cout << arry[i] << "!=" << factorial << endl;
//		factorial = 1;
//	}
//	return 0;
//}

//with the function

//#include<iostream>
//using namespace std;
//int Factorial(int n)
//{
//	int factorial = 1;
//	for (int i = n; i > 0; i--)
//	{
//		factorial *= i;
//	}
//	return factorial;
//}
//int main()
//{
//	int factorial = 1;
//	int arry[3] = { 4, 6, 8 };
//	for (int i = 0; i < 3; i++)
//	{
//		cout <<arry[i]<<"!="<< Factorial(arry[i]) << endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int Len = 66;
//const int Divs = 6;
//void subdivide(char ar[], int low, int high, int level)
//{
//	if (level == 0)
//		return;
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	subdivide(ar, low, mid, level - 1);
//	subdivide(ar, mid, high, level - 1);
//}
//int main()
//{
//	char ruler[Len];
//	int i;
//	for (i = 0; i < Len - 2; i++)
//		ruler[i] = ' ';
//	ruler[Len - 1] = '\0';
//	int max = Len - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = '|';
//	cout << ruler << endl;
//	for (i = 0; i <= Divs; i++)
//	{
//		subdivide(ruler, min, max,i);
//		cout << ruler << endl;
//		for (int j = 1; j < Len - 2; j++)
//			ruler[j] = ' ';
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//inline double square(double x)
//{
//	return x*x;
//}
//int main()
//{
//	double a, b;
//	double c = 13.0;
//
//	a = square(5.0);
//	b = square(4.5 + 7.5);
//	cout << "a=" << a << " ,b=" << b << endl;
//	cout << "c=" << c;
//	cout << ",c squared=" << square(c++) << endl;
//	cout << "now c=" << c << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//double cube(double a);
//double refcube(double &ra);
//int main()
//{
//	double x = 3.0;
//	cout << cube(x);
//	cout << "=cube of " << x << endl;
//	cout << refcube(x);
//	cout << "=refcube of " << x << endl;
//	return 0;
//}
//double cube(double a)
//{
//	a *= a*a;
//	return a;
//}
//double refcube(double &ra)
//{
//	ra *= ra*ra;
//	return ra;
//}

//#include<iostream>
//using namespace std;
//const int ArSize = 80;
//char *left(const char *str, int n = 1);
//int main()
//{
//	char sample[ArSize];
//	cout << "Enter a string \n";
//	cin.get(sample, ArSize);
//	char *ps = left(sample, 4);
//	cout << ps << endl; 
//	delete[]ps;
//	ps = left(sample);
//	cout << ps << endl;
//	delete[]ps;
//	return 0;
//}
//char *left(const char *str, int n)
//{
//	if (n < 0)
//		n = 0;
//	char *p = new char[n + 1];
//	int i;
//	for (i = 0; i < n&&str[i]; i++)
//		p[i] = str[i];
//	while (i <= n)
//		p[i++] = '\0';
//	return p;
//}

#/*include<iostream>
using namespace std;
template<typename T>
void Swap(T &a, T &b);
int main()
{
	int i = 10, j = 20;
	cout << "i,j=" << i << "," << j << endl;
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);
	cout << "Now i,j=" << i << "," << j << endl;
	double x = 24.5, y = 81.7;
	cout << "x,y=" << x << "," << y << endl;
	cout << "Using complier-generated double swapper:\n";
	Swap(x, y);
	cout << "Now x,y=" << x << "," << y << endl;
	return 0;
}
template<typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}*/

//#include<iostream>
//using namespace std;
//template<typename T>
//void Swap(T &a, T &b);
//
//struct job
//{
//	char name[40];
//	double salary;
//	int floor;
//};
//template<>void Swap<job>(job &j1, job &j2);
//void show(job &j);
//int main()
//{
//	using namespace std;
//	cout.precision(2);
//	cout.setf(ios::fixed, ios::floatfield);
//	int i = 10, j = 20;
//	cout << "i,j=" << i << "," << j << endl;
//	cout << "Using compiler-generated int swapper:\n";
//	Swap(i, j);
//	cout << "Now i,j=" << i << "," << j << endl;
//
//
//	job sue = { "Susan Yaffee", 7300.60, 7 };
//	job sindey = { "Sideny Taffee", 78060.72, 9 };
//	cout << "Before job swapping :\n";
//	show(sue);
//	show(sindey);
//	Swap(sue, sindey);
//	cout << "After job swapping :\n";
//	show(sue);
//	show(sindey);
//	return 0;
//}
//template<typename T>
//void Swap(T &a, T &b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//template<>void Swap<job>(job &j1, job &j2)
//{
//	double t1;
//	int t2;
//	t1 = j1.salary;
//	j1.salary = j2.salary;
//	j2.salary = t1;
//	t2 = j1.floor;
//	j1.floor = j2.floor;
//	j2.floor = t2;
//}
//void show(job &j)
//{
//	cout << j.name << ":$" << j.salary << "on floor" << j.floor << endl;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	/*cout << sizeof("\thow do you do?\0i am student.") << endl;
//	cout << strlen("\thow do you do?\0i am student.");*/
//
//	cout << sizeof("abcdef\0wer")<<endl;
//	cout << sizeof("abcdef\0wery")<<endl;
//	cout << strlen("abcdef\0wer") << endl;
//	cout << strlen("abcdef\0wer\0") << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	void set(int m, int n)
//	{
//		x = m;
//		y = n;
//	}
//	void print()const
//	{
//		cout << "(" << x << " ," << y << ")\n";
//	}
//	friend Point operator+(const Point &a, const Point &b);
//	friend Point add(const Point &a, const Point &b);
//};
//Point operator+(const Point &a, const Point &b)
//{
//	Point s;
//	s.set(a.x + b.x, a.y + b.y);
//	//s.print();
//	return s;
//}
//Point add(const Point &a, const Point &b)
//{
//	Point s;
//	s.set(a.x + b.x, a.y + b.y);
//	//s.print();
//	return s;
//}
//int main()
//{
//	Point a, b;
//	a.set(3, 2);
//	b.set(1, 5);
//	(a + b).print();
//	operator+(a, b).print();
//	add(a,b).print();
//	return 0;
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	double a = 1E-3;
//	cout << a << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	cin >> ch;
//	if (ch >= 65&&ch <= 90)
//		cout << "yes\n";
//	else
//		cout << "no\n";
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	int i = 0;
//	int m, n;
//	int t;
//	for (i = 0; i < 5; i++)
//	{
//		cin >> arr[i];
//	}
//	int max =arr[0];
//	int min = arr[0];
//	for (i = 1; i < 5; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (max == arr[i])
//		{
//			cout << "number : " << i << endl;
//			m = i;
//		}
//	}
//	for (i = 1; i < 5; i++)
//	{
//		if (arr[i]<min)
//		{
//			min = arr[i];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (min == arr[i])
//		{
//			cout << "number : " << i << endl;
//			n = i;
//		}
//	}
//	cout << "After swap\n";
//	t = arr[m];
//	arr[m] = arr[n];
//	arr[n] = t;
//	for (i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//#include<iostream>   
//using namespace std;
//double ave(double a[])
//{
//	int sum = 0;
//	int length = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < length; i++)
//		sum += a[i];
//	return sum / length;
//}
//int main()
//{
//	int i = 0;
//	double a[80];
//	cout << "input a[]" << endl;
//	while (cin >> a[i])
//	{
//		i++;
//	}
//	cout << "average is" << ave(a);
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int ave(int a[100])
//{
//	int sum = 0;
//	int length = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < length; i++)
//		sum += a[i];
//	return sum / length;
//}
//int main()
//{
//	int a[100];
//	int i = 0;
//	while ((cin>>a[i])!=EOF)
//	{
//		i++;
//	}
//	cout << ave(a) << endl;;
//	return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int sum = 0, value = 0;
//	vector<int>test;
//	//实际上非数字就会结束循环
//	cout << "以*号作为结束；";
//	while (cin >> value)
//		test.push_back(value);
//	vector<int>::iterator it;
//	for (it = test.begin(); it != test.end(); it++)
//		cout << *it << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int ave(int a[100])
//{
//	int sum = 0;
//	int length = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < length; i++)
//		sum += a[i];
//	return (sum / length);
//}
//int main()
//{
//	int a[5];
//	int i = 0;
//	a[i] = 0;
//	while (i<5&&cin>>a[i])
//	{
//		i++;
//	}
//	a[i] = '\0';
//	cout << ave(a) << endl;
//	return 0;
//}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//const double p = 3.14;
//int main()
//{
//	float r, h;
//	float s, area;
//	cout << "输入半径和高:" << endl;
//	//start
//	cin >> r >> h;
//	area = (1/ 3.0) * p * r * r * h;
//	//end
//	cout << setiosflags(ios::fixed);
//	cout << setprecision(2);
//	cout << "area=" << area << endl;
//	return 0;
//}
//计算Π的近似值
//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int n = 0;
//	double m,pi=2;
//	do
//	{
//		n++;
//		m = 4 *n*n / (4 * n*n - 1);
//		pi = fabs(pi*m);
//	} while ();
//	cout.setf(ios::fixed, ios::floatfield);
//	cout << "Π的值为" << setprecision(4) << pi << "，n的值为：" <<n<< endl;
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	double pi = 1.0, l;
//	int i;
//	for (i = 1; (2 * i)*(2 * i)*1.0 / ((2 * i - 1)*(2 * i + 1)) > 1E-3; i++)
//	{
//		l = (2 * i)*(2 * i)*1.0/ ((2 * i - 1)*(2 * i + 1));
//		pi *= l*;
//	}
//	cout << 2 * pi << "   " << i << endl;
//	return 0;
//}

//计算Π的近似值

//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int n = 281, i, j;
//	float pi = 2.0;
//	for (i = 1, j = 2; i < 2 * n + 1; i += 2, j += 2)
//		pi = pi * (pow(j, 2)) / (i * (i + 2));
//	cout.setf(ios::fixed, ios::floatfield);
//	cout << "Π的值为" << setprecision(4) << pi << "，n的值为：281" << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Time
//{
//	int h;
//	int m;
//	int s;
//	int s_past;
//public:
//	void set(int a, int b, int c,int d)
//	{
//		a = h;
//		b = m;
//		c = s;
//		d = s_past;
//	}
//};
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c;
//	cin >> d;
//	
//}
//#include <iostream>
//using namespace std;
//class Time
//{
//	int hour;
//	int minute;
//	int second;
//public:
//	void init(int h, int m, int s)
//	{
//		hour = h;
//		minute = m;
//		second = s;
//	}
//	void add(int num)
//	{
//		second = second + num;
//		if (second >= 60)
//		{
//			minute += second / 60;
//			second = second % 60;
//		}
//
//		if (minute >= 60)
//		{
//			hour += minute / 60;
//			minute = minute % 60;
//		}
//		if (hour >= 24)
//		{
//			hour = hour % 24;
//		}
//	}
//	void print()
//	{
//		cout << hour << " " << minute << " " << second;
//	}
//};
//int main()
//{
//	int h, m, s;
//	cin >> h >> m >> s;
//	int num;
//	cin >> num;
//	Time time;
//	time.init(h, m, s);
//	time.add(num);
//	time.print();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Time
//{
//	int hour;
//	int minute;
//	int second;
//public:
//	void set(int a, int b, int c)
//	{
//		hour = a;
//		minute = b;
//		second = c;
//	}
//	int get_seconds()
//	{
//		int num = (59 - second) + (59 - minute) * 60 + (23 - hour) * 3600;
//		return num;
//	}
//};
//int main()
//{
//	Time time_one, time_two;
//	int h1, m1, s1;
//	cin >> h1 >> m1 >> s1;
//	int h2, m2, s2;
//	cin >> h2 >> m2 >> s2;
//	time_one.set(h1, m1, s1);
//	time_two.set(h2, m2, s2);
//	cout<< (time_one.get_seconds() - time_two.get_seconds());
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//	int year;
//	int month;
//	int day;
//public:
//	void set(int a, int b, int c);
//	void is_leap(int m);
//	void after_add(int n);
//	void print();
//};
//void Date::set(int a, int b, int c)
//{
//	year = a;
//	month = b;
//	day = c;
//}
//bool is_leap(int m)
//{
//	if (m % 4 == 0 && m % 100 != 0 || m % 400 == 0)
//		return true;
//	else
//		return false;
//}
//void Date::after_add(int n)
//{
//	day = day + n;
//}
//int main()
//{
//	int year, month, day;
//	cin >> year >> month >> day;
//	int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (is_leap(year) == true) a[2] = 29;
//	int x;
//	cin >> x;
//	while (x != 0)
//	{
//		day++;
//		if (day>a[month])
//		{
//			day = 1;
//			month++;
//		}
//		if (month>12)
//		{
//			month = 1;
//			year++;
//			if (is_leap(year) == true) 
//				a[2] = 29;
//			else a[2] = 28;
//		}
//		x--;
//	}
//	cout << year << " " << month << " " << day;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//bool is_leap(int m)
//{
//	if (m % 4 == 0 && m % 100 != 0 || m % 400 == 0)
//		return true;
//	else
//		return false;
//}
//class Date
//{
//	int year;
//	int month;
//	int day;
//public:
//	void set(int a, int b, int c)
//	{
//		year = a;
//		month = b;
//		day = c;
//	}
//	int day_follow(int y1,int m1,int d1,int y2,int m2,int d2)
//	{
//		int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		int i;
//		int sum = 0;
//		int total = 0;
//		if (y1 != y2)
//		{
//			if (is_leap(y1) == true)
//			{
//				a[2] = 29;
//				for (i = 0; i < m1; i++)
//				{
//					total += a[i];
//				}
//				sum += (366 - total);
//			}
//			else
//			{
//				for (i = 0; i < m1; i++)
//				{
//					total += a[i];
//				}
//				sum += (365 - total);
//			}
//			for (i = y1 + 1; i < y2; i++)
//			{
//				if (is_leap(i) == true)
//				{
//					sum += 366;
//				}
//				else
//					sum += 355;
//			}
//			if (is_leap(y2) == true)
//			{
//				a[2] = 29;
//				for (i = 0; i < m2; i++)
//				{
//					sum += a[i];
//				}
//			}
//		}
//		if (y1 == y2)
//		{
//			for (i = m1; i < m2; i++)
//			{
//				sum += a[i];
//			}
//		}
//		sum = sum + d2 - d1;
//	}
//};
//
//int main()
//{
//	int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int y1, m1, d1;
//	cin >> y1 >> m1 >> d1;
//	int y2, m2, d2;
//	cin >> y2 >> m2 >> d2;
//	Date t_1, t_2;
//	t_1.set(y1, m1, d1);
//	t_2.set(y2, m2, d2);
//	cout <<day_follow(y1, m1, d1, y2, m2, d2) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//bool is_leap(int m)
//{
//	if ((m % 4 == 0 && m % 100 != 0 )|| (m % 400 == 0))
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int y1, m1, d1;
//	cin >> y1 >> m1 >> d1;
//	int y2, m2, d2;
//	cin >> y2 >> m2 >> d2;
//	int i;
//	int sum = 0;
//	int total = 0;
//	if (y1 != y2)
//	{
//		if (is_leap(y1) == true)
//		{
//			a[2] = 29;
//			for (i = 0; i < m1; i++)
//			{
//				total += a[i];
//			}
//			sum += (366 - total);
//		}
//		else
//		{
//			for (i = 0; i < m1; i++)
//			{
//				total += a[i];
//			}
//			sum += (365 - total);
//		}
//		for (i = y1 + 1; i < y2; i++)
//		{
//			if (is_leap(i) == true)
//			{
//				sum += 366;
//			}
//			else
//				sum += 355;
//		}
//		if (is_leap(y2) == true)
//		{
//			a[2] = 29;
//			for (i = 0; i < m2; i++)
//			{
//				sum += a[i];
//			}
//		}
//	}
//	if (y1 == y2)
//	{
//		for (i = m1; i < m2; i++)
//		{
//			sum += a[i];
//		}
//	}
//	sum = sum + d2 - d1;
//	cout << sum << endl;
//	return 0;
//}

//#include  <iostream>
//using namespace std;
//
//int isLeap(int year);
//int MonthDay(int year, int month);
//int GoDays(int year, int month, int day);
//
//int main()
//{
//	int year1, month1, day1;
//	int year2, month2, day2;
//	cin>> year1 >> month1 >> day1;
//	cin >> year2 >> month2 >> day2;
//	int sum = GoDays(year2, month2, day2);
//	for (int y = year1; y<year2; y++)
//		sum = sum + 365 + isLeap(y);
//	sum = sum - GoDays(year1, month1, day1);
//	cout << sum << endl;    // 4600
//	return 0;
//}
//
//int isLeap(int year) // 返回值1,是; 返回值0,不是。
//{
//	int r4 = year % 4;
//	int r100 = year % 100;
//	int r400 = year % 400;
//	if (r400 == 0 || (r4 == 0 && r100 != 0))
//		return 1; // 1600 2000    1988 2020
//	else
//		return 0;  // 2021 2022 2023   
//}
//
//int MonthDay(int year, int month)
//{
//	int leap = isLeap(year);
//	int day = 31;
//	if (month == 4 || month == 6 || month == 9 || month == 11)
//		day = 30;
//	else
//	if (month == 2)
//		day = 28 + leap;
//	return day;
//}
//
//int GoDays(int year, int month, int day)
//{
//	int sum = day;
//	for (int m = 1; m<month; m++)
//		sum = sum + MonthDay(year, m);
//	return sum;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int sum = 0, value = 0;
//	int n = 0;
//	int b[100];
//	vector<int>test;
//	cout << "以*号作为结束；";
//	while (cin >> value)
//		test.push_back(value);
//	vector<int>::iterator it;
//	for (it = test.begin(); it != test.end(); it++)
//	{
//		b[n++] = *it;
//		cout << *it << " ";
//	}
//	b[n] = '\0';
//	cout << endl;
//	cout <<n<< endl;
//	for (int i = 0; i < n; i++)
//	{
//		sum += b[i];
//	}
//	cout << sum / n << endl;
//	cout << endl;
//	return 0;
//}
//
//#include<iostream>
//#include<vector>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//	
//	vector<string> strs;
//	string s;
//	while (cin >> s)
//	{
//		strs.push_back(s);
//	}
//	cout << strs.size();
//	return 0;
//}
/*给定一个N*M方格的迷宫，迷宫里有T处障碍，障碍处不可通过。给定起点坐标和终点坐标，
问: 每个方格最多经过1次，有多少种从起点坐标到终点坐标的方案。
   在迷宫中移动有上下左右四种方式，每次只能移动一个方格。数据保证起点上没有障碍。*/
//#define _CRT_SECURE_NO_WARNINGS   1
//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int sx[8] = { 0, 0, 1, 1, 1, -1, -1, -1 };//八个方向，初始化赋好值
//int sy[8] = { 1, -1, 0, 1, -1, 0, 1, -1 };
//int n, i, j, ans = 0;
//int a[100][100], b[100][100];
//
//void dfs(int s, int t)
//{
//	int i, x, y;
//	if (s == 1 && t == n)//如果到达终点，方案数+1
//	{
//		ans++;
//		return;
//	}
//	for (i = 0; i<8; ++i)//枚举八个方向
//	{
//		x = s + sx[i];
//		y = t + sy[i];
//		if (x>0 && y>0 && x <= n&&y <= n&&a[x][y] == 0 && b[x][y] == 0)//前四个条件是判断是否越界，最后一个是判断是否访问
//		{                                                //过
//			b[x][y] = 1;
//			dfs(x, y);
//			b[x][y] = 0;
//		}
//	}
//	return;
//}
//
//int main()
//{
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; ++i)
//	for (j = 1; j <= n; ++j)
//		scanf_s("%d", &a[i][j]);
//	b[1][1] = 1;//b[i][j]表示坐标为（i,j）这个点有没有被访问过
//	dfs(1, 1);
//	printf("%d", ans);
//	return 0;
//}


//20210513  comn on

//#include  <iostream>
//using namespace std;
//#define CLASS 3
//#define STU 4
//int FindMax(int score[CLASS][STU], int m, int *pRow, int *pCol);
//int main()
//{
//	int score[CLASS][STU], i, j, maxScore, row, col;
//	cout << "Please enter score:" << endl;
//	for (i = 0; i < CLASS; i++)
//	{
//		for (j = 0; j < STU; j++)
//		{
//			cin >> score[i][j];
//		}
//	}
//	maxScore = FindMax(score, CLASS, &row, &col);
//	cout << "maxScore = " << maxScore << ", class= " << row + 1 << ", number = " << col + 1 << endl;
//	return 0;
//}
//int FindMax(int score[][STU], int m, int* pRow, int* pCol)
//{
//	int i, j, maxScore;
//	maxScore = score[0][0];
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < STU; j++)
//		{
//			if (score[i][j] > maxScore)
//			{
//				maxScore = score[i][j];
//				*pRow = i;
//				*pCol = j;
//			}
//		}
//	}
//	return(maxScore);
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class studentID
//{
//	int value;
//public:
//	studentID(int id = 0)
//	{
//		value = id;
//		cout << "Assigning student id " << value << "\n";
//	}
//};
//class student
//{
//	string name;
//	studentID id;
//public:
//	student(string n = "noName", int ssID = 0)
//	{
//		cout << "Constructing student " + n + "\n";
//		name = n;
//		studentID id(ssID);
//	}
//};
//int main()
//{
//	student s("Randy", 58);
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class studentID
//{
//	int value;
//public:
//	studentID(int id = 0)
//	{
//		value = id;
//		cout << "Assigning student id " << value << "\n";
//	}
//};
//class student
//{
//	string name;
//	studentID id;
//public:
//	student(string n = "noName", int ssID = 0)
//		:id(ssID), name(n)//正规的大气的写法
//	{
//	cout << "Constructing student " <<n<<"\n";
//	}
//};
//int main()
//{
//	student s("Randy", 58);
//	student("jerry");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout << "A->";
//	}
//};
//class B
//{
//public:
//	B()
//	{
//		cout << "B->";
//	}
//};
//class C
//{
//public:
//	C()
//	{
//		cout << "C->";
//	}
//};
//void fuc()
//{
//	cout << "\nfunc";
//	A a;
//	static B b;
//	C c;
//}
//int main()
//{
//	cout << "main : ";
//	for (int i = 1; i <= 2; i++)
//	{
//		for (int j = 1; j <= 2;++j)
//		if (i == 2)
//			C c;
//		else
//			A a;
//		B b;
//	}
//	fuc();
//	fuc();
//}

//#define  _CRT_SECURE_NO_WARNINGS  1
//	 
//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//	char *pName;
//public:
//	Person(char *pN = "noName")
//	{
//		cout << "Constructing " << pN << "\n";
//		pName = new char[strlen(pN) + 1];
//		if (pName)
//			strcpy(pName, pN);
//	}
//	~Person()
//	{
//		cout << "Destructing " << pName << "\n";
//		delete[]pName;
//	}
//};
//int main()
//{
//	Person p1("Randy");
//	Person p2;
//	return 0;
//}



	 
//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//	char *pName;
//public:
//	Person(char *pN = "noName")
//	{
//		cout << "Constructing " << pN << "\n";
//		pName = new char[strlen(pN) + 1];
//		if (pName)
//			strcpy(pName, pN);
//	}
//	~Person()
//	{
//		cout << "Destructing " << pName << "\n";
//		delete[]pName;
//	}
//};
//int main()
//{
//	Person p1("Randy");
//	Person p2(p1);
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS  1
	 
////#include<iostream>
////#include<string>
////using namespace std;
////class Person
////{
////	char *pName;
////public:
////	Person(char *pN = "noName")
////	{
////		cout << "Constructing " << pN << "\n";
////		pName = new char[strlen(pN) + 1];
////		if (pName)
////			strcpy(pName, pN);
////	}
////	Person(const Person &s)
////	{
////		cout << "Copy constructing " << s.pName << "\n";
////		pName = new char[strlen(s.pName) + 1];
////		if (pName)
////			strcpy(pName, s.pName);
////	}
////	~Person()
////	{
////		cout << "Destructing " << pName << "\n";
////		delete[]pName;
////	}
////};
////int main()
////{
////	Person p1("Randy");
////	Person p2(p1);
////	return 0;
////}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout << "A->";
//	}
//	~A()
//	{
//		cout << "<-~A";
//	}
//};
//class B
//{
//public:
//	B()
//	{
//		cout << "B->";
//	}
//	~B()
//	{
//		cout << "<-~B";
//	}
//};
//class C
//{
//public:
//	C()
//	{
//		cout << "C->";
//	}
//	~C()
//	{
//		cout << "<-~C";
//	}
//};
//void func()
//{
//	cout << "\nfunc : ";
//	A a;
//	cout << "ok->";
//	static B b;
//	C c;
//}
//int main()
//{
//	cout << "main : ";
//	for (int i = 1; i <= 2; ++i)
//	{
//		for (int j = 1; j <= 2;++j)
//		if (i == 2)
//			C c;
//		else
//			A a;
//		B b;
//	}
//	func();
//	func();
//	return 0;
//}


#define  _CRT_SECURE_NO_WARNINGS  1

//#include<iostream>
//#include<string>
//using namespace std;
//class Student
//{
//	string name;
//public:
//	Student(const string &s) :name(s){}
//};
//void fn(Student &s)
//{
//	cout << "ok\n";
//}
//int main()
//{
//	fn(Student("Jenny"));
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Person
//{
//	char *pName;
//public:
//	Person(char *pN = "noName")
//	{
//		cout << "Constructing " << pN << "\n";
//		pName = new char[strlen(pN) + 1];
//		if (pName)
//			strcpy(pName, pN);
//	}
//	Person(const Person &s)
//	{
//		cout << "copy Constructing " << s.pName << "\n";
//		pName = new char[strlen(s.pName) + 1];
//		if (pName)
//			strcpy(pName, s.pName);
//	}
//	Person &operator=(Person &s)
//	{
//		cout << "Assigning " << s.pName << "\n";
//		if (this == &s)
//			return s;
//		delete[]pName;
//		pName = new char[strlen(s.pName) + 1];
//		if (pName)
//			strcpy(pName, s.pName);
//		return *this;
//	}
//	~Person()
//	{
//		cout << "Destructing " << pName << "\n";
//		delete[]pName;
//	}
//};
//int main()
//{
//	Person p1("Randy");
//	Person p2("Jenny");
//	p2 = p1;
//}

//#include<iostream>
//using namespace std;
//class DateTime
//{
//	int year;
//	int month;
//	int day;
//	int hour;
//	int minute;
//	int second;
//public:
//	DateTime(int a, int b, int c, int d, int e, int f)
//		:year(a), month(b), day(c), hour(d), minute(e), second(f)
//	{}
//	int isLeapYear()
//	{
//		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//			return 1;
//		else
//			return 0;
//	}
//	void add(int num)
//	{
//		second = second + num;
//		if (second >= 60)
//		{
//			minute += second / 60;
//			second = second % 60;
//		}
//
//		if (minute >= 60)
//		{
//			hour += minute / 60;
//			minute = minute % 60;
//		}
//		if (hour >= 24)
//		{
//			day += hour / 24;
//			hour = hour % 24;
//		}
//		int Month[13] = { 0, 31, 28 + isLeapYear(), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		while (day > Month[month])
//		{
//			day -= Month[month];
//			month++;
//			if (month > 12)
//			{
//				month -= 12;
//				year++;
//				Month[2] = 28 + isLeapYear();
//			}
//		}
//	}
//	void print()
//	{
//		cout << year<<" " << month <<" "<< day<<" " << hour <<" "<< minute<<" " << second<<" " << endl;
//	}
//};
//
//int main()
//{
//	int year, month, day, hour, minute, second;
//	cin >> year >> month >> day >> hour >> minute >> second;
//	int second_add;
//	cin >> second_add;
//	DateTime s(year, month, day, hour, minute, second);
//	s.add(second_add);
//	s.print();
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//class DateTime
//{
//	int year;
//	int month;
//	int day;
//	int hour;
//	int minute;
//	int second;
//public:
//	DateTime(int a, int b, int c, int d, int e, int f)
//			:year(a), month(b), day(c), hour(d), minute(e), second(f)	{}
//		int isLeapYear()
//		{
//			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//				return 1;
//			else
//				return 0;
//		}
//		int get_second()
//		{
//			int total_second = 0;
//			int total_day = 0;
//			isLeapYear();
//			int Month[13] = { 0, 31, 28 + isLeapYear(), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//			for (int i = 0; i < month; i++)
//			{
//				total_day += Month[i];
//			}
//			total_second = second + minute * 60 + hour * 3600 + (total_day+day) * 3600 * 24;
//			return total_second;
//		}
//};
//int main()
//{
//	int year1, month1, day1, hour1, minute1, second1;
//	int year2, month2, day2, hour2, minute2, second2;
//	cin >>year1>>month1>>day1>>hour1>> minute1>>second1;
//	cin >>year2>>month2>>day2>>hour2>> minute2>>second2;
//	DateTime T1(year1, month1, day1, hour1, minute1, second1);
//	DateTime T2(year2, month2, day2, hour2, minute2, second2);
//	cout<<T2.get_second() - T1.get_second()<<endl;
//	return 0;
//}


/*小华自从上大学后发现班级活动明显变多了，这天他们又准备去外面玩了，班长叫小华选出一些人在活动上表演节目，
以下是小华选人的策略:
把班级中的n个人，编号为1～n。由班长从1开始数数。班长数1，所有人都蹲下。数2，先看2是不是素数，如果是，那么
是这个数倍数的人改变动作(站着的话蹲下，蹲着的话站起来), 其他人保持不动。如果2不是素数，所有人的不动。
然后数3, 看3是不是素数......直到班长数到k.最后就让站着的同学为大家表演。
输入
两个整数，n和k。k≤100000。n≤100000
输出
站着的人的编号, 中间用空格隔开。*/
//#include<iostream>
//using namespace std;
//int is_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int number_class;
//	int k;
//	int t;
//	int a[100000];
//	for (int x = 0; x < 100000; x++)
//	{
//		a[x] = 1;
//	}
//	cin >> number_class>>k;
//	for (int i = 2; i <= k; i++)
//	{
//		if (is_prime(i))
//		{
//			for (int j = 1; j <= number_class; j++)
//			{
//				if (0==j%i)
//				{
//					t = -a[j];
//					a[j] = t;
//				}
//			}
//		}
//	}
//	for (int l = 1; l <= number_class; l++)
//	{
//		if (a[l] == -1)
//		{
//			cout << l;
//			cout << " ";
//		}
//	}
//	return 0;
//}
//


//#include <iostream>
//using namespace std;
//class Complex
//{
//	int real, imaginary;
//public:
//	Complex() {}
//	Complex(int a, int b) { real = a; imaginary = b; }
//	Complex plus(Complex a, Complex b)
//	{
//		Complex c;
//		c.real = a.real + b.real;
//		c.imaginary = a.imaginary + b.imaginary;
//		return c;
//	}
//	Complex multiply(Complex a, Complex b)
//	{
//		Complex c;
//		c.real = a.real * b.real - a.imaginary * b.imaginary;
//		c.imaginary = a.imaginary * b.real + a.real * b.imaginary;
//		return c;
//	}
//	void Output()
//	{
//		if (imaginary > 0)cout << real << '+' << imaginary << 'i' << endl;
//		else if (imaginary == 0)cout << real << endl;
//		else
//			cout << real << imaginary << 'i' << endl;
//	}
//};
//int main()
//{
//	int x[3][2];
//	for (int i = 0; i < 3; i++)cin >> x[i][0] >> x[i][1];
//	Complex a(x[0][0], x[0][1]), b(x[1][0], x[1][1]), c(x[2][0], x[2][1]), d, e;
//	d = d.plus(a, b); e = e.plus(d, c); e.Output();
//	d = d.multiply(a, b); e = e.multiply(d, c); e.Output();
//}

//#include<iostream>
//using namespace std;
//class Complex
//{
//	int real;
//	int imaginary;
//public:
//	Complex(){}
//	Complex(int a, int b)
//		:real(a), imaginary(b){}
//	Complex add(Complex a, Complex b)
//		{
//			Complex c;
//			c.real = a.real + b.real;
//			c.imaginary = a.imaginary + b.imaginary;
//			return c;
//		}
//		Complex multiply(Complex a, Complex b)
//		{
//			Complex c;
//			c.real = a.real * b.real - a.imaginary * b.imaginary;
//			c.imaginary = a.imaginary * b.real + a.real * b.imaginary;
//			return c;
//		}
//		void print()
//		{
//			if (imaginary > 0)cout << real << '+' << imaginary << 'i' << endl;
//			else if
//				(imaginary == 0)cout << real << endl;
//			else
//				cout << real << imaginary << 'i' << endl;
//			}
//
//};
//int main()
//{
//	int x[3][2];
//	for (int i = 0; i < 3; i++)
//		cin >> x[i][0] >> x[i][1];
//	Complex a(x[0][0], x[0][1]), b(x[1][0], x[1][1]), c(x[2][0], x[2][1]), d, e;
//	d = d.add(a, b);
//	e = e.add(d, c);
//	e.print();
//	d = d.multiply(a, b);
//	e = e.multiply(d, c); 
//	e.print();
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//class Complex
//{
//	int real;
//	int imaginary;
//public:
//	Complex(int a, int b)
//		:real(a), imaginary(b){}
//	int get_length(int a, int b)
//	{
//		int c = sqrt(a*a + b*b);
//		return c;
//	}
//	bool operator>
//};
//int main()
//{

//}
/*#include <iostream>
using namespace std;
class Complex
{
	int real,imaginary;
public:
	Complex(int x = 0, int y = 0)
		:real(x), imaginary(y){}

	int operator<(const Complex& c2)
	{
		if ((*a + b * b)<(c2.a*c2.a + c2.b*c2.b))
			return 1;
		else
			return 0;
	}

	Complex operator=(const Complex &c2)
	{
		a = c2.a;
		b = c2.b;
		return *this;
	}

	void print()
	{
		if (b>0)
			cout << a << "+" << b << "i" << endl;
		if (b<0)
			cout << a << b << "i" << endl;
		if (b == 0)
			cout << a << endl;
	}
};

int main()
{
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1;
	cin >> a2 >> b2;
	cin >> a3 >> b3;
	Complex c1(a1, b1);
	Complex c2(a2, b2);
	Complex c3(a3, b3);
	Complex t;
	if (!(c1 < c2))
	{
		t = c1;
		c1 = c2;
		c2 = t;
	}
	if (!(c2 < c3))
	{
		t = c2;
		c2 = c3;
		c3 = t;
	}
	if (!(c1 < c2))
	{
		t = c1;
		c1 = c2;
		c2 = t;
	}
	c1.print();
	c2.print();
	c3.print();
	return 0;
*/

/*#include <iostream>
using namespace std;
class Complex
{
	int a, b;
public:
	Complex(int x = 0, int y = 0)
	{
		a = x;
		b = y;
	}

	int operator<(const Complex& c2)
	{
		if ((a*a + b * b)<(c2.a*c2.a + c2.b*c2.b))
			return 1;
		else
			return 0;
	}

	Complex operator=(const Complex &c2)
	{
		a = c2.a;
		b = c2.b;
		return *this;
	}

	void print()
	{
		if (b>0)
			cout << a << "+" << b << "i" << endl;
		if (b<0)
			cout << a << b << "i" << endl;
		if (b == 0)
			cout << a << endl;
	}
};

int main()
{
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1;
	cin >> a2 >> b2;
	cin >> a3 >> b3;
	Complex c1(a1, b1);
	Complex c2(a2, b2);
	Complex c3(a3, b3);
	Complex t;
	if (!(c1 < c2))
	{
		t = c1;
		c1 = c2;
		c2 = t;
	}
	if (!(c2 < c3))
	{
		t = c2;
		c2 = c3;
		c3 = t;
	}
	if (!(c1 < c2))
	{
		t = c1;
		c1 = c2;
		c2 = t;
	}
	c1.print();
	c2.print();
	c3.print();
}*/

//#include<iostream>
//using namespace std;
//class Complex
//{
//	int real;
//	int imaginary;
//public:
//	Complex(){}
//	Complex(int a, int b)
//	{
//		real = a;
//		imaginary = b;
//	}
//	int operator <(const Complex &m)
//	{
//		if ((real*real + imaginary*imaginary) < (m.real*m.real + m.imaginary*m.imaginary))
//			return 1;
//		else
//			return 0;
//	}
//	Complex operator =(const Complex &m)
//	{
//		real = m.real;
//		imaginary = m.imaginary;
//		return *this;
//	}
//	void print()
//	{
//		if (imaginary > 0)
//		{
//			cout << real << "+" << imaginary << "i" << endl;
//		}
//		if (imaginary == 0)
//		{
//			cout << real << endl;
//		}
//		if (imaginary < 0)
//		{
//			cout << real << imaginary << "i" << endl;
//		}
//	}
//
//};
//int main()
//{
//	int r1, i1, r2, i2, r3, i3;
//	cin >> r1 >> i1;
//	cin >> r2 >> i2;
//	cin >> r3 >> i3;
//	Complex c1(r1, i1);
//	Complex c2(r2, i2);
//	Complex c3(r3, i3);
//	Complex t;
//	if (!(c1 < c2))
//	{
//		t = c1;
//		c1 = c2;
//		c2 = t;
//	}
//	if (!(c2 < c3))
//	{
//		t = c2;
//		c2 = c3;
//		c3 = t;
//	}
//	if (!(c1 < c2))
//	{
//		t = c1;
//		c1 = c2;
//		c2 = t;
//	}
//	c1.print();
//	c2.print();
//	c3.print();
//	return 0;
//}


//#include  <iostream>
//using namespace std;
//int strlength(char *a)
//{
//	int count = 0;
//	while (*a++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n1, n2;
//	char *list1 = "See no evil, hear no evil,";
//	char *list2 = "blind and deaf?";
//	n1 = strlength(list1);
//	n2 = strlength(list2);
//	cout << list1 << endl;
//	cout << "The length of list1 = " << n1 << endl;
//	cout << list2 << endl;
//	cout << "The length of list2 = " << n2 << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Complex
//{
//	int real;
//	int imaginary;
//public:
//	Complex(){}
//	Complex(int a, int b)
//		:real(a), imaginary(b){}
//	void init(int a, int b)
//	{
//		real = a;
//		imaginary = b;
//	}
//	void print()
//	{
//		if (imaginary > 0)
//		{
//			cout << real << "+" << imaginary << "i" << endl;
//		}
//		if (imaginary == 0)
//		{
//			cout << real << endl;
//		}
//		if (imaginary < 0)
//		{
//			cout << real << imaginary << "i" << endl;
//		}
//	}
//	friend bool operator<(Complex &c1, Complex &c2)
//	{
//		return c1.real < c2.real || (c1.real == c2.real && c1.imaginary< c2.imaginary);
//	}
//	friend bool operator>(Complex &c1, Complex &c2)
//	{
//		return c1.real > c2.real || (c1.real == c2.real && c1.imaginary > c2.imaginary);
//	}
//};
//class Complexarry
//{
//	Complex arry[20];
//	Complex temp;
//	int n;
//public:
//	Complexarry(int n)
//	{
//		this->n = n;
//		int a, b;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a >> b;
//			arry[i].init(a, b);
//		}
//	}
//	void sort()
//		{
//			for (int i = 0; i < n-1; i++)
//			{
//				for (int j = n-1; j >i; j--)
//				{
//					if (arry[j] < arry[j - 1])
//					{
//						temp = arry[j];
//						arry[j] = arry[j - 1];
//						arry[j - 1] = temp;
//					}
//				}
//			}
//			for (int k = 0; k < n; k++)
//			{
//				arry[k].print();
//			}
//		}
//};
//int main()
//{
//	int n;
//	cin >> n;
//	Complexarry m(n);
//	m.sort();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Rect
//{
//	int length;
//	int width;
//public:
//	//构造函数
//	Rect(int a = 0, int b = 0)
//		:length(a), width(b){}
//	//拷贝构造函数
//	Rect(Rect &c)
//	{
//		length = c.length;
//		width = c.width;
//	}
//	//set函数
//	void set(int a,int b)
//	{
//		length = a;
//		width = b;
//	}
//	//计算面积
//	void GetArea()
//	{
//		cout << length*width << endl;
//	}
//};
//int main()
//{
//	int l, w;
//	cin >> l >> w;
//	Rect t(l, w);
//	t.GetArea();
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//class Vector2d
//{
//	int x, y;
//public:
//	Vector2d (int a, int b)
//		: x(a), y(b){}
//	Vector2d(){};
//	void friend operator -(Vector2d &m, Vector2d &n)
//	{
//		cout << sqrt((m.x - n.x)*(m.x - n.x) + (m.y - n.y)*(m.y-n.y))
//	}
//	void friend ostream <<()
//};
//int main()
//{
//
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char phone_number[20];
//	char *qp = phone_number; //定义一个字符指针qp指向字符串phone_number
//	int quhao = 0; //区号
//	long int number = 0; // 电话号码
//	cout << "please input a phone number with the format(999)99999-999:" << endl;
//	cin >> phone_number;
//	//atoi(phone_number);
//	quhao += strtok("(", ")");
//	atoi(quhao);
//	cout << "区号是:" << quhao << endl;
//	cout << "电话号码是:" << number << endl;
//	return 0;
//}
//


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char phone_number[20];
//	char *qp = phone_number; //定义一个字符指针qp指向字符串phone_number
//	int quhao = 0; //区号
//	long int number = 0; // 电话号码
//	cout << "please input a phone number with the format(999)99999-999:" << endl;
//	cin >> phone_number;
//	char *e = ")";
//	char *p=strtok(phone_number,e);
//	*p++;
//	cout << "区号是:" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout<<*p++;
//	}
//	cout << endl;
//	char *s = "-";
//	char *q = strtok(phone_number, s);
//
//	while (*q++)
//	{
//		cout << *q;
//	}
//	return 0;
//}


/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Phone_number;
	cin >> Phone_number;
	cout << Phone_number << endl;
	int Phone_number1[15] = atoi(Phone_number);
	for (unsigned int i = 0; i < Phone_number.length(); i++)
	{
		if (Phone_number1[i] >= ' 0 '&& Phone_number1[i] <=' 9')
			cout << Phone_number[i];
	}
	//string quhao = Phone_number.substr(1, 3);
	//cout << quhao << endl;
	return 0;
}*/


//#include<iostream>
//#include<cmath>
//using namespace std;
//class Vector2d
//{
//	double x, y;
//public:
//	Vector2d(){}
//	Vector2d(int a, int b)
//		:x(a), y(b){}
//	double operator -(const Vector2d &t)const
//	{
//		return sqrt((t.x - x)*(t.x - x) + (t.y - y)*(t.y - y));
//	}
//	friend ostream &operator<<(ostream &out, Vector2d c)
//	{
//		out << "(" << c.x << "," << c.y << ")" << endl;
//		return out;
//	}
//};
//int main()
//{
//	double x1, y1, x2, y2;
//	cin >> x1 >> y1 >> x2 >> y2;
//	Vector2d p(x1,y1), q(x2,y2);
//	cout << p - q << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#define N 3
//class City
//{
//	char *name;
//public:
//	City(char *name1)
//		:name(name1){}
//	City(){}
//	bool operator>(City &p)
//	{
//		return this->name;
//	}
//	friend ostream &operator<<(ostream &out, City a)
//	{
//		out << a.name;
//		return out;
//	}
//};
//void sort(City city[], int n)
//{
//	City temp;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (city[i]>city[j])
//			{
//				temp = city[i];
//				city[i] = city[j];
//				city[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	City city[N] = { "Nanjing", "Beijing", "Shsnghai" };
//	for (int i = 0; i < N; i++)
//	{
//		cout << city[i] << endl;
//	}
//	cout << "After sort"<<endl;
//	sort(city,N);
//	for (int i = 0; i < N; i++)
//	{
//		cout << city[i]<<endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<vector>
//using namespace std;
//typedef vector<vector<int>>Mat;
//Mat input();
//void mysort(Mat &a);
//void print(const Mat &a);
//int main()
//{
//	Mat a = input();
//	mysort(a);
//	print(a);
//}
//Mat input()
//{
//	ifstream
//}
//void mysort(Mat &a)
//void print(const Mat &a)




//#include<iostream>
//using namespace std;
//class Animal
//{
//	int weight;
//public:
//	Animal(int w)
//	{
//		weight = w;
//	}
//	int getweight()
//	{
//		cout << "Animal getweight" << endl;
//		return weight;
//	}
//	virtual void print()
//	{
//		cout << "Animal::print" << endl;
//	}
//};
//class Dog :public Animal
//{
//	char voice;
//public:
//	Dog(int w, char v) :Animal(w)
//	{
//		voice = v;
//	}
//	virtual void print()
//	{
//		cout << "Dog::print" << voice << endl;
//	}
//};
//int main()
//{
//	Dog dg(50, 'w');
//	Animal *pd = &dg;
//	pd->getweight();
//	pd->print();
//}


//#include<iostream>
//using namespace std;
//int &add(int a, int b)//返回别名
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int ret = add(3, 4);
//	add(1, 2);
//    cout << ret << endl;
//	return 0;
//}
////


//#include<iostream>
//using namespace std;
//class Array
//{
//	int *data, n;
//public:
//	Array(int x1, int x2)
//	{
//		n = x2 - x1 + 1;
//		data = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			data[i] = x1 + i;
//		}
//	}
//	Array(Array &a)
//	{
//		n = a.n;
//		data = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			data[i] = a.data[i];
//		}
//	}
//	~Array()
//	{
//		delete[]data;
//	}
//	Array & operator+(Array &a)
//	{
//		Array *pv = new Array(*this);
//		for (int i = 0; i < n; i++)
//		{
//			pv->data[i] += a.data[i];
//		}
//		return *pv;
//	}
//	friend ostream &operator<<(ostream &out, Array &a)
//	{
//		for (int i = 0; i < a.n; i++)
//		{
//			out << a.data[i] << " ";	
//		}
//		return out << endl;
//	}
//};
//int main()
//{
//	Array a(10, 20);
//	Array b(20, 30);
//	Array c(a + b);
//	cout << c << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//	int _y;
//	int _m;
//	int _d;
//public:
//	Date(int y, int m, int d)
//		:_y(y), _m(m), _d(d){}
//	bool isLeap()
//	{
//		return (_y % 400 == 0 || (_y % 4 == 0 && _y % 100 != 0));
//	}
//	int MonthDay()
//	{
//		int ds[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		if (_m == 2)
//		{
//			ds[2] = 29;
//		}
//		return ds[_m];
//	}
//};
//int main()
//{
//	Date d(2020, 2, 26);
//	if (d.isLeap() == true)
//		cout << "是闰年" << endl;
//	cout << d.MonthDay() << endl;
//	return 0;
//}


////#include<iostream>
////#include<string>
////using namespace std;
////class Advisor
////{
////	int noOfMeeting;
////};
////class Student
////{
////	string name;
////	int semesterHours;
////	double average;
////public:
////	Student(string pName = "noName")
////		:name(pName), average(0), semesterHours(0){}
////	void addCourse(int hours, double grade)
////	{
////		double totalGrade = (semesterHours*average + grade);
////		semesterHours += hours;
////		average = semesterHours ? totalGrade / semesterHours : 0;
////	}
////	void display()
////	{
////		cout << "name=\"" << name << "\"" << ",hours=" << semesterHours << ",average=" << average << endl;
////	}
////	int getHours()
////	{
////		return semesterHours;
////	}
////	double getAverage()
////	{
////		return average;
////	}
////};
////class GraduateStudent :public Student
////{
////	Advisor advisor;
////	int qualifierGrade;
////public:
////	int getQualifier()
////	{
////		return qualifierGrade;
////	}
////};
////int main()
////{
////	Student ds("lo lee undergrade");
////	GraduateStudent gs;
////	ds.addCourse(3, 2.5);
////	ds.display();
////	gs.addCourse(3, 3.0);
////	gs.display();
////	return 0;
////}



//#include <iostream>
//using namespace std;
//class SeqList
//{
//	int a[205], n;
//public:
//	SeqList()
//	{
//
//	}
//	void init(int b[], int n)
//	{
//		this->n = n;
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = b[i];
//		}
//	}
//	void Insert(int x)
//	{
//		a[n] = x;
//		n++;
//	}
//	void Remove(int k)
//	{
//		for (int i = k; i < n - 1; i++)
//		{
//			a[i] = a[i + 1];
//		}
//		n--;
//	}
//	void SearchRemove(int x)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] == x)
//			{
//				Remove(i);
//			}
//		}
//	}
//	void print()
//	{
//		for (int i = 0; i < n; i++)
//			cout << a[i] << " ";
//	}
//};
//int main()
//{
//	int n;  
//	cin >> n;
//	int b[205];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> b[i];
//	}
//	SeqList L;
//	L.init(b, n);
//	int m;  cin >> m;
//	int c[205];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> c[i];
//		if (c[i] > 0)
//			L.Insert(c[i]);
//		if (c[i] < 0)
//			L.SearchRemove(-c[i]);
//	}
//	L.print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	*pa = 20;
//	cout << a << endl;
//	int b = 10;
//	int *&pb = pa;
//	pb = &b;
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#define ADD(a,b) ((a)+(b))
//int main()
//{
//	using namespace std;
//	cout<<ADD(1, 2)<<endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//inline int add(int a, int b)
//{
//
//	return  a + b;
//}
//int main()
//{
//	cout << add(1, 2) << endl;
//	return 0;
//}

//auto的用法
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	auto b = a;//自动推导b的类型
//	cout << b << endl;
//	return 0;
//}
//


//#include<iostream>
//using namespace std;
//int main()
//{
//	/*int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	int &y = x;
//	auto c = y;
//	auto &d = x;
//	cout << typeid(x).name() << endl;
//	cout << typeid(y).name() << endl;
//	cout << typeid(a).name() << endl;
//	cout << typeid(d).name() << endl;*/
//	//int arry[] = { 1, 2, 3, 4, 5 };
//	////范围for
//	//for(auto e:arry)
//	//{
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//	//return 0;
//	/*int arry[] = { 1, 2, 3, 4, 5 };
//	for (auto &e : arry)
//	{
//		e *= 2;
//	}
//	for (auto ee : arry)
//	{
//		cout << ee << " ";
//	}
//	cout << endl;*/
//
//	return 0;
//}
////auto不能声明参数，不能声明数组


//#include<iostream>
//using namespace std;
//class Base
//{
//	int a;
//public:
//	void print()
//	{
//		cout << a << endl;
//	}
//};
//class Derived :public Base
//{
//	int b;
//public:
//	void display()
//	{
//		cout << a << endl;
//	}
//};
//int main()
//{
//	Derived d;
//	//d.print();
//	d.display();
//	cout << d.a;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Bed
//{
//protected:
//	int weight;
//public:
//	Bed()
//		:weight(0){}
//	void Sleep()const
//	{
//		cout << "Sleeping ^^^" << endl;
//	}
//	void setWeight(int i)
//	{
//		weight = i;
//	}
//};
//class Sofa
//{
//protected:
//	int weight;
//public:
//	Sofa()
//		:weight(0){}
//	void watchTV()const
//	{
//		cout << "Watvhing TV" << endl;
//	}
//	void setWeight(int i)
//	{
//		weight = i;
//	}
//};
//class SleeperSofa:public Bed,public Sofa
//{
//public:
//	SleeperSofa(){}
//	void foldOut()const
//	{
//		cout << "Fold the sofa" << endl;
//	}
//};
//int main()
//{
//	SleeperSofa ss;
//	ss.watchTV();
//	ss.foldOut();
//	ss.Sleep();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Furniture
//{
//protected:
//	int weight;
//public:
//	Furniture(){}
//	void setweight(int i)
//	{
//		weight = i;
//	}
//	int getweight()const
//	{
//		return weight;
//	}
//};
//class Bed:virtual public Furniture
//{
//public:
//	Bed(){}
//	void sleep()const
//	{
//		cout << "Sleeping " << endl;
//	}
//};
//class Sofa: virtual public Furniture
//{
//public:
//	Sofa(){}
//	void watchTV()const
//	{
//		cout << "Watching " << endl;
//	}
//};
//class SleeperSofa:public Bed,public Sofa
//{
//	SleeperSofa()
//	:Sofa(), Bed(){}
//	SleeperSofa(){}
//	void foldout()const
//	{
//		cout << "fold out" << endl;
//	}
//};
//int main()
//{
//	SleeperSofa ss;
//	ss.setweight(20);
//	cout << ss.setweight() << endl;
//}

//#define _CRT_SECURE_NO_WARNINGS   1
//
//#include"accountlist.h"
//#include"savings.h"
//#include"checking.h"
//int main()
//{
//	Savings s1("101", 2000), s2("102", 4000);
//	Checking c1("201"), c2("312", 10000);
//	Accountlist a;
//	a.add(s1);
//	a.add(s2);
//	a.add(c1);
//	a.add(c2);
//	Account *p;
//	if (p = a.find("101"))p->deposit(100);
//	if (p = a.find("201"))p->deposit(2000);
//	if (p = a.find("102"))p->withdrawal(2500);
//	if (p = a.find("312"))p->withdrawal(2950);
//	a.display();
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS   1
//
//#include<iostream>
//using std::cout;
//#include"accountlist.h"
//void Accountlist::add(Account &a)
//{
//	Node *pN = new Node(a);
//	if (first)
//	{
//		pN->next = first;
//		first->prev = pN;
//	}
//	first = pN;
//	size++;
//}
//
//void Accountlist::remove(string acntNo)
//{
//	for (Node *p = first; p; p = p->next)
//	if ((p->acnt).getAcntNo() == acntNo)
//	{
//		if (p->prev)p->prev->next = p->next;
//		if (p->next)p->next->prev = p->prev;
//		if (p == first)first = p->next;
//		delete p;
//		size--;
//		break;
//	}
//}
//
//Account *Accountlist::find(string acntNo)const
//{
//	for (Node *p = first; p; p = p->next)
//	if ((p->acnt).getAcntNo() == acntNo)
//		return &(p->acnt);
//	return 0;
//}
//
//void Accountlist::display()const
//{
//	std::cout << "There are " << size << " accounts.\n";
//	for (Node *p = first; p; p->next)
//		(p->acnt).diaplay();
//}
//
//Accountlist::~Accountlist()
//{
//	for (Node *p = first; p = first; delete p)
//		first = first->next;
//}
//
//#ifndef ACCOUNTLIST
//#define ACCOUNTLIST
//#include"account.h"
//class Node
//{
//public:
//	Account &acnt;
//	Node *next, *prev;
//	Node(Account &a)
//		:acnt(a), next(0), prev(0){}
//	bool operator==(const Node &n)const
//	{
//		return acnt == n.acnt;
//	}
//};
//
//class Accountlist
//{
//	int size;
//	Node *first;
//public:
//	Accountlist()
//		: first(0), size(0){}
//	Node*getFirst()const
//	{
//		return first;
//	}
//	int getSize()const
//	{
//		return size;
//	}
//	void add(Account &a);
//	void remove(string acntNo);
//	Account *find(string acntNo)const;
//	bool isEmpty()const
//	{
//		return !size;
//	}
//	void display()const;
//	~Accountlist();
//};
//
//#endif
//#define _CRT_SECURE_NO_WARNINGS   1
//
//#include<iostream>
//#include"checking.h"
//Checking::Checking(string acntNo, double balan)
//:Account(acntNo, balan), remittance(other){}
//
//void Checking::display()const
//{
//	std::cout << "Checking ";
//	Account::diaplay();
//}
//
//void Checking::withdrawal(double amount)
//{
//	if (remittance == remitByPost)
//		amount += 30;
//	if (remittance == remitByCable)
//		amount += 60;
//	if (balance < amount)
//		std::cout << "Insufficient funds withdrawal: " << amount << "\n";
//	else
//		balance -= amount;
//}
//
//#ifndef HEADER_CHECKING
//#define HEADER_CHECKING
//#include"account.h"
//
//enum REMIT
//{
//	remitByPost, remitByCable, other
//};//信汇，电汇，其他
//class Checking :public Account
//{
//	REMIT remittance;
//public:
//	Checking(string acntNo, double balan = 0.0);
//	void withdrawal(double amount);
//	void display()const;
//	void setRemit(REMIT re)
//	{
//		remittance = re;
//	}
//};
//
//#endif
//
//#define _CRT_SECURE_NO_WARNINGS   1
//
//#include<iostream>
//#include"savings.h"
//
//void Savings::display()const
//{
//	std::cout << "Savings ";
//	Account::diaplay();
//}
//
//void Savings::withdrawal(double amount)
//{
//	if (balance < amount)
//		std::cout << "Insuffcient funds withdrawal: " << amount << "\n";
//	else
//		balance -= amount;
//#ifndef HEADER_SAVINGS
//#define HEADER_SAVINGS
//
//#include"account.h"
//#include<string>
//	using std::string;
//	class Savings :public Account
//	{
//	public:
//		Savings(string acntNo, double balan = 0.0)
//			:Account(acntNo, balan){}
//		void display()const;
//		void withdrawal(double amount);
//	};
//
//#endif
//
//#define _CRT_SECURE_NO_WARNINGS   1
//
//#include<iostream>
//#include"account.h"
//
//	Account::Account(string anctNo, double balan)
//		:acntNumber(anctNo), balance(balan){}
//
//	void Account::diaplay()const
//	{
//		std::cout << "Account:" + acntNumber + "=" << balance << "\n";
//	}
//
//#ifndef HEADER_ACCOUNT
//#define HEADER_ACCOUNT
//
//#include<string>
//	using std::string;
//	class Account
//	{
//	protected:
//		string acntNumber;
//		double balance;
//	public:
//		Account(string anctNo, double balan = 0.0);
//		virtual void diaplay()const;
//		double getBalan()const
//		{
//			return balance;
//		}
//		void deposit(double amount)
//		{
//			balance += amount;
//		}
//		bool operator==(const Account &a)
//		{
//			return acntNumber == a.acntNumber;
//		}
//		string getAcntNo()
//		{
//			return acntNumber;
//		}
//		virtual void withdrawal(double amount) = 0;
//	};
//
//#endif


//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "hello,world" << endl;
//	return 0;
//}
//


//#include<stdio.h>
//namespace my_name
//{
//	int a; 
//	int a;
//
//	namespace my_name1
//	{
//		int a;
//		namespace my_name2
//		{
//			int a;
//		}
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	//printf("%d\n", my_name::scanf);
//	return 0;
//}

//#include<stdio.h>
//namespace my_name
//{
//	int a=12;
//}
//int main()
//{
//	printf("%d",my_name:: a);
//	return 0;
//}

//#include<iostream>
//using std::cout;
//
//int main()
//{
//	cout << "hello,world" <<std::endl;
//	return 0;
//}
//


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	int b;
//	printf("请输入a的值\n");
//	scanf("%d", &a);
//	printf("%d\n", a);
//	cout << "请输入b的值" << endl;
//	cin >> b;
//	cout << b<<"\n";
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void TestFunc(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	TestFunc(); 
//	TestFunc(10);
//}
//#include<iostream>
//using namespace std;
//int n;
//void TestFunc(int a , int b = 10, int c=n)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl<<endl;
//}
//int main()
//{
//	TestFunc(4);
//	TestFunc(4,5);
//	TestFunc(4,5,6);
//	return 0;
//}
////a.h
//void TestFunc(int a = 10);
//// a.c
//void TestFunc(int a = 20)
//{}
//// 注意：如果生命与定义位置同时出现，
////恰巧两个位置提供的值不同，
////那编译器就无法确定到底该用那
////个缺省值。
//#include<iostream>
//using namespace std;


//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "give up her\n" << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int f(int a, int b)
//{
//}
//void f(int a, int b)
//{
//}
//int main()
//{
//
//}
//
//#include<iostream>
//using namespace std;
//int add(int a, int b)
//{
//	return a + b;
//}
//double add(double a, double b)
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << add(1, 2) << endl;
//	cout << add(1.51, 2.51) << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class ClassA
//{
//	int data;
//public:
//	ClassA(int n)
//	{
//		data = n;
//	}
//
//};
//int main()
//{
//	ClassA* a1 = new ClassA(5);
//	ClassA a2();
//	ClassA a3(3);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int c = 30;
//class class1
//{
//private:
//	int a;
//	static int b;
//public:
//	class1()
//	{
//		a = 10;
//	}
//	void set(int x, int y, int z)
//	{
//		a += x;
//		b += y;
//		c += z;
//	}
//	void display()
//	{
//		cout << a << " " << b << " " << c << endl;
//	}
//};
//int class1::b = 20;
//int main()
//{
//	class1 a1, a2;
//	a1.set(1, 2, 3);
//	a1.display();
//	a2.set(4, 5, 6);
//	a2.display();
//}

//#include<iostream>
//using namespace std;
//class Class2
//{
//	int x;
//public:
//	Class2(int i)
//	{
//		x = i;
//		cout << "1  " << x << endl;
//	}
//	Class2(double i)
//	{
//		x = (int)i * 2;
//		cout << "2  " << x<<endl;
//	}
//	~Class2()
//	{
//		cout << "3   " << x << endl;
//	}
//};
//int main()
//{
//	int a = 10;
//	double b = 3.5;
//	Class2 a1(a), a2(a * 1.0);
//	Class2 *a3 = new Class2(b);
//	delete a3;
//	return 0;
//}
//

//
//#include<iostream>
//using namespace std;
//class ClassA
//{
//	int x;
//public:
//	ClassA(int i)
//	{
//		x = i;
//	}
//	void disp()
//	{
//		cout << x << ",";
//	}
//};
//class ClassB :public ClassA
//{
//	int x;
//public:
//	ClassB(int i) :ClassA(i + 10)
//	{
//		x = i;
//	}
//	void disp()
//	{
//		ClassA::disp();
//		cout << x << endl;
//	}
//};
//int main()
//{
//	ClassB b(3);
//	b.disp();
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class  studentid
//{
//	int value;
//public:
//	studentid(int id = 0)
//	{
//		value = id;
//		cout << "Assigning student id " << value << endl;
//	}
//};
//class student
//{
//	string name;
//	studentid id;
//public:
//	student(string n = "noname", int ssid = 0)
//		:id(ssid), name(n)
//	{
//		cout << "constructing student " << n << endl;
//	}
//};
//int main()
//{
//	student s("jack", 100);
//	student t("tom");
//}
//


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	virtual void show()
//	{
//		cout << "show A" << endl;
//	}
//};
//class B:public A
//{
//	void show()
//	{
//		cout << "show B" << endl;
//	}
//};
//void fun(A*ptr, A&ref, A b)
//{
//	ptr->show();
//	ref.show();
//	b.show();
//}
//int main()
//{
//	A a, *p = new B;
//	B b;
//	fun(p, a, b);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Count
//{
//	int n;
//public:
//	Count(int i)
//	{
//		n = i;
//	}
//	int &operator++()
//	{
//		n += 5;
//		return n;
//	}
//	int operator++(int)
//	{
//		int t = n;
//		n += 10;
//		return t;
//	}
//	Count operator+(Count &c2);
//	void show()
//	{
//		cout << n << endl;
//	}
//};
//Count Count::operator+(Count &c2)
//{
//	return Count(n + c2.n);
//}
//int main()
//{
//	Count A(10), B(10);
//	A++;
//	A.show();
//	++B;
//	B.show();
//	(A + B).show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class base
//{
//public:
//	base()
//	{
//		cout << "cb " << endl;
//	}
//	~base()
//	{
//		cout << "db " << endl;
//	}
//};
//class sub1 :virtual public base
//{
//public:
//	sub1()
//	{
//		cout << "cs1 " << endl;
//	}
//	~sub1()
//	{
//		cout << "ds1 " << endl;
//	}
//};
//class sub2 :virtual public base
//{
//public:
//	sub2()
//	{
//		cout << "cs2 " << endl;
//	}
//	~sub2()
//	{
//		cout << "ds2 " << endl;
//	}
//};
//class sub3 :public sub1, public sub2
//{
//public:
//	sub3()
//	{
//		cout << "cs3 " << endl;
//	}
//	~sub3()
//	{
//		cout << "ds3 " << endl;
//	}
//};
//int main()
//{
//	sub3 s;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << a << " " << b << endl;
//	int &ra = a;
//	cout << a << " " << b << " " << ra<<endl;
//	ra = b;
//	cout << a << " " << b << " " << ra<<endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int &ra = a;
//	ra = b;
//	cout << ra << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	const int a = 10;
//	const int &ra = a;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int b = 10;
//	int &rb = b;
//	const int &crb = b;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int b = 10;
//	const double &rb = b;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//
//}

//void swap(int &left,int right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//int& Count()
//{
//	static int n = 0;
//		n++;
//	return n;
//}
//#include<iostream>
//using namespace std;
//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int& ret = Add(1, 2);
//	Add(3, 4);
//	cout << "Add(1, 2) is :" << ret << endl;
//	return 0;
//}
//#include<iostream>
//#include <time.h>
//using namespace std;
//struct A
//{
//	int a[10000];
//};
//void TestFunc1(A a){}
//void TestFunc2(A& a){}
//void TestRefAndValue()
//{
//	A aa;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	TestFunc1(aa);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//	TestFunc2(aa);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}
//
//#include<iostream>
//#include <time.h>
//using namespace std;
//struct A{ int a[10000]; };
//void TestFunc1(A a){}
//void TestFunc2(A& a){}
//void TestRefAndValue();
//int main()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//#include<iostream>
//#include <time.h>
//using namespace std;
//struct A{ int a[10000]; };
//A a;
//// 值返回
//A TestFunc1() { return a; }
//// 引用返回
//A& TestFunc2(){ return a; }
//void TestReturnByRefOrValue(){}
//int main()
//{
//	// 以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//	// 以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//	// 计算两个函数运算完成之后的时间
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& ra = a;
//	ra = 20;
//	int* pa = &a;
//	*pa = 20;
//	return 0;
//}
//


//#include <iostream>
//#include <cstdlib>
//#include <cmath>
//using namespace std;
//class Complex 
//{
//private:
//	double real, imag;
//public:
//	Complex(double r);
//	Complex(double r, double i);
//	Complex(Complex cl, Complex c2);
//	void print()
//	{
//		cout << real << "," << imag << endl;
//	}
//};
//Complex::Complex(double r)  //构造函数 1
//{
//	real = r;
//	imag = 0;
//}
//Complex::Complex(double r, double i)  //构造数 2
//{
//	real = r;
//	imag = i;
//}
//Complex::Complex(Complex cl, Complex c2)  //构造函数 3
//{
//	real = cl.real + c2.real;
//	imag = cl.imag + c2.imag;
//}
//int main() {
//	Complex cl(3), c2(1, 2), c3(cl, c2), c4 = 7;
//	print(c1);
//	return 0;
//}
//


//#include <iostream>
//#include <cstdlib>
//#include <cmath>
//using namespace std;
//class Complex
//{
//private:
//	double real, imag;
//public:
//	Complex(double r);
//	Complex(double r, double i);
//	Complex(Complex cl, Complex c2);
//	void print()
//	{
//		cout << real << "," << imag << endl;
//	}
//};
//Complex::Complex(double r)  //构造函数 1
//{
//	real = r;
//	imag = 0;
//}
//Complex::Complex(double r, double i)  //构造数 2
//{
//	real = r;
//	imag = i;
//}
//Complex::Complex(Complex cl, Complex c2)  //构造函数 3
//{
//	real = cl.real + c2.real;
//	imag = cl.imag + c2.imag;
//}
//int main() {
//	Complex c1(3), c2(1, 2), c3(c1, c2), c4 = 7;
//	c1.print();
//	c2.print();
//	return 0;
//}


//#include < iostream >
//using namespace std;
//class A 
//{
//public:
//
//	virtual `A()
//	{
//		cout << " A::A(called " << endl :
//	}
//};
//
//class B : public A
//{
//public:
//
//	B(int i)
//	{
//
//		buf = new char[i];
//	}
//
//	virtual `B()
//	{
//		delete[]buf;
//
//		cout << B::BО called << endl;
//	}
//
//private:
//
//	char *buf;
//};
//
//void fun(A *a)
//{
//	delete a;
//}
//
//		int main()
//		{
//			A*a = newB(14);
//			B*b = newB(13);
//			B*c = newB(12);
//			fun(a);
//
//			fun(b);
//
//			fun(c);
//
//			return 0;
//		}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	virtual ~A()
//	{
//		cout << "A::~A() called" << endl;
//	}
//};
//class B :public A
//{
//public:
//	B(int i)
//	{
//		buf = new char[i];
//	}
//	virtual ~B()
//	{
//		delete[]buf;
//		cout << "B::~B called" << endl;
//	}
//private:
//	char *buf;
//};
//void fun(A*a)
//{
//	delete a;
//	cout << "delete" <<endl;
//}
//int main()
//{
//	A *a = new B(14);
//	B *b = new B(13);
//	B *c = new B(12);
//	fun(a);
//	fun(b);
//	fun(c);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	virtual ~A()
//	{
//		cout << "A::~A() called" << endl;
//	}
//};
//class B :public A
//{
//public:
//	B(int i)
//	{
//		buf = new char[i];
//	}
//	virtual ~B()
//	{
//		delete[]buf;
//		cout << "B::~B called" << endl;
//	}
//private:
//	char *buf;
//};
//void fun(A*a)
//{
//	delete a;
//	cout << "delete" <<endl;
//}
//int main()
//{
//	A *a = new B(14);
//	B *b = new B(13);
//	B *c = new B(12);
//	fun(a);
//	fun(b);
//	fun(c);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	virtual ~A()
//	{
//		cout << "A::~A() called" << endl;
//	}
//};
//class B :public A
//{
//public:
//	B(int i)
//	{
//		buf = new char[i];
//	}
//	virtual ~B()
//	{
//		delete[]buf;
//		cout << "B::~B called" << endl;
//	}
//private:
//	char *buf;
//};
//void fun(A*a)
//{
//	delete a;
//	cout << "delete" <<endl;
//}
//int main()
//{
//	A *a = new B(14);
//	B *b = new B(13);
//	B *c = new B(12);
//	fun(a);
//	fun(b);
//	fun(c);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	virtual ~A()
//	{
//		cout << "A::~A() called" << endl;
//	}
//};
//class B :public A
//{
//public:
//	B(int i)
//	{
//		buf = new char[i];
//	}
//	virtual ~B()
//	{
//		delete[]buf;
//		cout << "B::~B called" << endl;
//	}
//private:
//	char *buf;
//};
//void fun(A*a)
//{
//	delete a;
//	cout << "delete" <<endl;
//}
//int main()
//{
//	A *a = new B(14);
//	B *b = new B(13);
//	B *c = new B(12);
//	fun(a);
//	fun(b);
//	fun(c);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char str[] = "SSWLIA", c;
//	int k;
//	for (k = 2; (c = str[k]) != '\0'; k++)
//	{
//		switch (c)
//		{
//		case 'I':++k;
//			break;
//		case 'L':
//			continue;
//		default :
//			cout << c; continue;
//		}
//		cout << '*';
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A
//{
//	friend class B;
//public:
//	int a;
//};
//class B
//{};
//class C :public B
//{
//	void func(A *pt);
//};
//void C::func(A *pt)
//{
//	pt->a++;
//}
//int main()
//{
//
//}


//#include<iostream>
//using namespace std;
//class ClassA
//{
//	int data;
//public:
//	ClassA(int n=1)
//	{
//		data = n;
//	}
//};
//int main()
//{
//	ClassA *a1=new ClassA();
//	ClassA a2();
//	ClassA a3;
//	ClassA *p = new ClassA();
//}



//#include<iostream>
//using namespace std;
//class ClassA
//{
//public:
//	ClassA(int i)
//	{
//		x = i;
//	}
//	void disp()
//	{
//		cout << x << ',';
//	}
//private:
//	int x;
//};
//class ClassB :public ClassA
//{
//public:
//	ClassB(int i) :ClassA(i + 10)
//	{
//		x = i;
//	}
//	void disp()
//	{
//		ClassA::disp();
//		cout << x << endl;
//	}
//private:
//	int x;
//};
//int main()
//{
//	ClassB b(3);
//	b.disp();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int c = 30;
//class Class1
//{
//private:
//	int a;
//	static int b;
//public:
//	Class1(){ a = 10; }
//	void set(int x, int y, int z){ a += x, b += y, c += z; }
//	void display(){ cout << a << " " << b << " " << c << endl; }
//};
//int Class1::b = 20;
//void main()
//{
//	Class1 a1, a2;
//	a1.set(1, 2, 3);
//	a1.display();
//	a2.set(4, 5, 6);
//	a2.display();
//}

//#include <iostream>
//using namespace std;
//class Class2
//{
//public:
//	Class2(int i)
//	{
//		x = i;
//		cout << "construct1: " << x << "\n";
//	}
//	Class2(double i)
//	{
//		x = (int)i * 2;
//		cout << "construct2: " << x << "\n";
//	}
//	~Class2()
//	{
//		cout << " destruct : " << x << "\n";
//	}
//private:
//	int x;
//};
//void main()
//{
//	int a = 10;
//	double b = 3.5;
//	Class2 a1(a), a2(a * 1.0);
//	Class2 *a3 = new Class2(b);
//	delete a3;
//}


//#include<iostream>
//#include <string>
//using namespace std;
//class StudentID{
//	int value;
//public:
//	StudentID(int id = 0){
//		value = id;
//		cout << "Assigning student id " << value << endl;
//	}
//};
//class Student{
//	string name;
//	StudentID id;
//public:
//	Student(string n = "no name", int ssID = 0) :id(ssID), name(n){
//		cout << "Constructing student " << n << "\n";
//	}
//};
//void main(){
//	Student s("Jack", 100); 
//	Student t("Jone");
//}


//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	virtual void show()
//	{ cout << "show class A" << endl; }
//};
//class B :public A 
//{
//public:
//	void show()
//	{ cout << "show class B" << endl; }
//};
//void fun(A*ptr, A &ref, A b)
//{
//	ptr->show();
//	ref.show();
//	b.show();
//}
//int main()
//{
//	A a, *p = new B;
//	B b;
//	fun(p, a, b);
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Count
//{
//	int n;
//public:
//	Count(int i){ n = i; }
//	int & operator++(){ n += 5; return n; }
//	int operator++(int){ int t = n; n += 10; return t; }
//	Count operator+(Count &c2); 
//		void show(){ cout << n << '\n'; }
//};
//Count Count::operator+(Count &c2){
//	return Count(n + c2.n);
//}
//void main()
//{
//	Count A(10), B(10);
//	A++;
//	A.show();
//	++B;
//	B.show();
//	(A + B).show();
//}

//#include<iostream>
//using namespace std;
//class base
//{
//public:
//	base(){ cout << "constructing base class" << endl; }
//	~base(){ cout << "destructing base class" << endl; }
//};
//class sub1 :virtual public base
//{
//public:
//	sub1(){ cout << "constructing sub1 class" << endl; }
//	~sub1(){ cout << "destructing sub1 class" << endl; }
//};
//class sub2 :virtual public base
//{
//public:
//	sub2(){ cout << "constructing sub2 class" << endl; }
//	~sub2(){ cout << "destructing sub2 class" << endl; }
//};
//class sub3 :public sub1, public sub2
//{
//public:
//	   sub3(){ cout << "constructing sub3 class" << endl; }
//	   ~sub3(){ cout << "destructing sub3 class" << endl; }
//};
//void main()
//{
//	sub3 s;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//	int day, month, year;
//public:
//	Date()
//		{}
//	void set(int d, int m, int y)
//	{
//		day = d;
//		month=m;
//	    year=y;
//	}
//	void print()
//	{
//		cout << year << "-" << month << "-" << day << endl;
//	}
//};
//int main()
//{
//	Date a;
//	a.set(2020, 1, 1);
//	a.print();
//}

//#include<iostream>
//using namespace std;
//class T
//{
//public:
//	T(int x){ a = x; b += x; };
//	static void display(T c)
//	{
//		cout << "a=" << c.a << '\t' << "b=" << c.b << endl;
//	}
//private:
//	int a;
//	static int b;
//};
//int T::b = 5;
//void main()
//{
//	T A(3), B(5);
//	T::display(A);
//	T::display(B);
//}
//#include <iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void f(){ cout << "f0+"; }
//	void g(){ cout << "g0+"; }
//};
//class Derived : public Base
//{
//public:
//	void f(){ cout << "f+"; }
//	void g(){ cout << "g+"; }
//};
//void main(){ Derived d; Base *p = &d; p->f(); p->g(); }


//#include<iostream>
//using namespace std;
//double pi = 3.1415;
//
//class Basic {
//public:
//	virtual double getArea() = 0;//面积
//	virtual double getVolume() = 0;//体积
//};
//
//class Circular :public Basic {
//protected:
//	double radius;
//public:
//	Circular(double r) :radius(r){
//		 
//	}
//	double getArea() {
//		return pi * radius * radius;
//	}
//	double getVolume() {
//		return 0.0;
//	}
//	~Circular() {
//
//	}
//};
//
//class Column :public Circular {
//private:
//	double height;
//public:
//	Column(double r, double h) :Circular(r), height(h) {
//
//	}
//	double getVolume() {
//		return Circular::getArea()* height;
//	}
//	double getArea() {
//		return 2 * Circular::getArea() + 2 * pi * radius * height;
//	}
//	~Column() {
//
//	}
//};
//
//int main() {
//	Circular circle(5);
//	Column column(4, 2);
//	cout << circle.getArea() << endl;
//	cout << circle.getVolume() << endl;
//	cout << column.getArea() << endl;
//	cout << column.getVolume() << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Test{
//public:
//	Test(){}
//	~Test(){ cout << '#'; }
//};
//int main(){
//	Test temp[2], *pTemp[2];
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//class B1
//{
//public:
//	int nv;
//	void fun(){ cout << "Member of B1." << endl; }
//};
//class B2
//{
//public:
//	int nv;
//	void fun(){ cout << "Member of B2." << endl; }
//};
//class D1 :public B1, public B2
//{
//public:
//	int nv;
//	void fun(){ cout << "Member of D1." << endl; }
//};
//void main()
//{
//	D1 d1;
//	d1.nv = 1;
//	d1.fun();
//	d1.B1::nv = 2;
//	d1.B1::fun();
//	d1.B2::nv = 3;
//	d1.B2::fun();
//}

//#include <iostream>
//using namespace std;
//class A{
//public:
//	virtual void show(){ cout << "show class A" << endl; }
//};
//class B :public A {
//public:
//	void show(){ cout << "show class B" << endl; }
//};
//void fun(A*ptr, A &ref, A b){
//	ptr->show();
//	ref.show();
//	b.show();
//}
//int main(){
//	A a, *p = new B;
//	B b;
//	fun(p, a, b);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//	class BASE{
//		char c;
//	public:
//		BASE(char n) :c(n){}
//		~BASE(){ cout << c; }
//	};
//	class DERIVED :public BASE{
//		char c;
//	public:
//		DERIVED(char n) :BASE(n + 1), c(n){}
//		~DERIVED(){ cout << c; }
//	};
//	int main()
//	{
//		DERIVED('x');
//		return 0;
//	}

//#include<iostream>
//using namespace std;
//class B
//{
//public:
//	B(){}
//	B(int i){ b = i; }
//	virtual void virfun()
//	{
//		cout << "B::virfun()called.\n";
//	}
//private:
//	int b;
//};
//class D :public B
//{
//public:
//	D(){}
//	D(int i, int j) :B(i){ d = j; }
//private:
//	int d;
//	void virfun()
//	{
//		cout << "D::virfun()called.\n";
//	}
//};
//void fun(B *obj)
//{
//	obj->virfun();
//}
//int main()
//{
//	D *pd = new D;
//	fun(pd);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//class A
//{
//	int x;
//public:
//	A(int a){ x = ++a; }
//	~A(){ cout << x << '\n'; }
//	int get(){ return x; }
//};
//class B :public A
//{
//	int y;
//public:
//	B(int b) :A(b){ y = get() + b; }
//	B() :A(5){ y = 6; }
//	~B(){ cout << y << '\n'; }
//};
//void main(void)
//{
//	B b(5);
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	cout<<"hello world!";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//inline int add(int a, int b)
//{
//	return a + b;
//}
//inline int sub(int c, int d);
//int main()
//{
//	cout<<add(1, 2)<<endl;
//	cout << sub(4, 3) << endl;
//	return 0;
//}
// int sub(int c, int d)
//{
//	return c - d;
//}



//#include<iostream>
//using namespace std;
//#define ADD(a,b)  (a+b)
//int main()
//{
//	int x;
//	x = ADD(1, 2)*2;
//	cout << x << endl;
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//#define ADD(int a,int b)
//{
//	return a + b;
//}
//int main()
//{
//	int x;
//	x = ADD(1, 2) * 2;
//	cout << x << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class student
//{
//	int id;
//	int test_score;
//	void fail();
//};
//void student::fail()
//{
//	if (test_score < 60)
//		cout << "yes" << endl;
//	else
//		cout << "no" << endl;
//}
//int main()
//{
//	student sst;
//	cin >> sst.test_score;
//	sst.fail();
//}



//#/*include<iostream>
//using namespace std;
//class student
//{
//private:
//	int id;
//public:
//	int score;
//	void fail();
//};
//void student::fail()
//{
//	if (score > 60)
//	{
//		cout << "no" << endl;
//	}
//	else
//	{
//		cout << "yes" << endl;
//	}
//}
//int main()
//{
//}*/





//#include<iostream>
//using namespace std;
//int main()
//{
//
//}

//class Classname
//{
//	//类体>>由成员变量和成员函数组成
//
//};

//#include<iostream>
//using namespace std;
//class student
//{
//public:
//	int id;
//	char *name;
//	int score;
//};
//int main()
//{
//	student st;
//	st.id = 0000;
//	st.name = "tom";
//	st.score = 98;
//
//}


//#include<iostream>
//using namespace std;
//class student
//{
//	int id;
//	int score;
//	int age;
//	void fail()
//	{
//		if (score > 60)
//			cout << "no" << endl;
//		else
//			cout << "yes" << endl;
//	}
//};
//int main()
//{
//	student st1;
//	student st2;
//	cout << sizeof(st1) << endl;
//	cout << sizeof(st2) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//
//};
//int main()
//{
//	A a;
//	cout << sizeof(a) << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void Display()//输出
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	void SetDate(Date* this,int year, int month, int day)//设置
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//int main()
//{
//	Date d1, d2;
//	d1.SetDate(&d1,2018, 5, 1);
//	d2.SetDate(&d2,2018, 7, 1);
//	d1.Display();
//	d2.Display();
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//class Date
//{
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2;
//	d1.SetDate(2018, 5, 1);
//	d1.Display();
//	Date d2;
//	d2.SetDate(2018, 7, 1);
//	d2.Display();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.Display;
//	return 0;
//}


//class Date
//{
//public:
//	// 1.无参构造函数
//	Date()
//	{}
//	// 2.带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1; // 调用无参构造函数
//	Date d2(2015, 1, 1); // 调用带参的构造函数
//	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
//	Date d3();
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	/*Date()
//	{
//		_year = 1900;
//		_month = 1;
//		_day = 1;
//	}*/
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//// 以下测试函数能通过编译吗？
//int main()
//{
//	Date d1;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//private:
//	int _year;
//	int _month;
//	int _day;
//public:
//	void display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//};
//int main()
//{
//	Date d1;
//	d1.display();
//}

//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	// 基本类型(内置类型)
//	int _year;
//	int _month;
//	int _day;
//	// 自定义类型
//	Time _t;
//};
//int main()
//{
//	Date d;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//	int _a;
//public:
//	A(int a=0)
//	{
//		cout << "A(int a=0)构造函数" << endl;
//		_a = a;
//	}
//	void Print()
//	{
//		cout << _a << endl;
//	}
//};
//class Date
//{
//	int _year;
//	int _month;
//	int _day;
//	A _aa;
//public:
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//		_aa.Print();
//	}
//};
//int main()
//{
//	Date d;
//	d.print();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//private:
//	int _year;
//	int _month;
//	int _day;
//public:
//	Date(int year,int month,int day)
//	{
//		cout << "构造";
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << _year << "-" << _month << "-" << _day<<endl;
//	}
//	~Date()
//	{
//		cout << "析构" << _year << "-" << _month << "-" << _day << endl;
//	}
//};
//int main()
//{
//	Date d1(2021,7,21);
//	Date d2(2022, 7, 21);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//
//	// 这里d2调用的默认拷贝构造完成拷贝，d2和d1的值也是一样的。
//	Date d2(d1);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("hello");
//	String s2(s1);
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//
//}


//#include<iostream>
//using namespace std;
//class Time
//{
//	int hour;
//	int minute;
//	int second;
//public:
//	Time(int a, int b, int c)
//	{
//		hour = a;
//		minute = b;
//		second = c;
//	}
//};
//int main()
//{
//	Time T1(8,12,24);
//	Time T2(8, 12, 46);
//	Time T3(9, 23, 12);
//	cout << T1 - T2 << endl;
//}
//

//#include<iostream>
//using namespace std;

//
//#include<iostream>
//using namespace std;
//class Time
//{
//	int hour;
//	int minute;
//	int second;
//public:
//	Time(int a, int b, int c)
//	{
//		hour = a;
//		minute = b;
//		second = c;
//	}
//};
//Time operator +(Time &t1, Time &t2)
//{
//	Time t(t1.)
//}
//int main()
//{
//	Time T1(8, 12, 24);
//	Time T2(8, 12, 46);
//	Time T3(9, 23, 12);
//	cout << << endl;
//}
//
//
//
////返回值类型  operator 运算符（形参表）
////{
////	……
////}


//#include<iostream>
//using namespace std;
//class Complex
//{
//	int _a;
//	int _b;
//public:
//	Complex(int a, int b)
//	{
//		_a = a;
//		_b = b;
//	}
//	void show()
//	{
//		cout << "(" << _a << "," << _b << ")" << endl;
//	}
//	friend Complex operator +(Complex &C1, Complex &C2);
//};
//Complex operator +(Complex &C1, Complex &C2)
//{
//	Complex C(C1._a + C2._a, C1._b + C2._b);
//	return C;
//}
//int main()
//{
//	Complex C1(1, 2);
//	Complex C2(2, 3);
//	Complex C3 = C1 + C2;
//	C3.show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Complex
//{
//	int _a;
//	int _b;
//public:
//	Complex(int a, int b)
//	{
//		_a = a;
//		_b = b;
//	}
//	void show()
//	{
//		cout << "(" << _a << "," << _b << ")" << endl;
//	}
//	
//};
//Complex operator +(Complex &C1, Complex &C2)
//{
//	
//}
//int main()
//{
//	Complex C1(1, 2);
//	Complex C2(2, 3);
//	Complex C3 = C1 + C2;
//	C3.show();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Complex
//{
//	int _a;
//	int _b;
//public:
//	Complex(int a, int b)
//	{
//		_a = a;
//		_b = b;
//	}
//	void show()
//	{
//		cout << "(" << _a << "," << _b << ")" << endl;
//	}
//	Complex &operator =(const Complex &C)
//	{
//		if (this != &C)
//		{
//			_a = C._a;
//			_b = C._b;
//		}
//		return *this;
//	}
//};
//int main()
//{
//	Complex C1(1, 2);
//	Complex C2 = C1;
//	C2.show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Complex
//{
//	int _a;
//	int _b;
//public:
//	Complex(int a, int b)
//	{
//		_a = a;
//		_b = b;
//	}
//	void show()
//	{
//		cout << "(" << _a << "," << _b << ")" << endl;
//	}
//	bool operator <(const Complex C1)
//	{
//		if ((C1._a*C1._a + C1._b*C1._b) < (_a*_a + _b*_b))
//			return true;
//		else
//			return false;
//	}
//};
//int main()
//{
//	Complex C1(1, 2);
//	Complex C2(2, 3);
//	if (C1 < C2)
//		cout << "<" << endl;
//	return 0;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Complex
//{
//public:
//	Complex()
//	{
//		a = 0;
//		b = 0;
//	}
//	//重载前置++
//	Complex& operator++()
//	{
//		a++;
//		b++;
//		return *this;
//	}
//	//重载后置++
//	Complex operator++(int)
//	{
//		Complex temp;
//		temp.a = this->a;
//		temp.b = this->b;
//		a++;
//		b++;
//		return temp;
//	}
//private:
//	int a;
//	int b;
//};
//
//int main()
//{
//	Complex c;
//	cout << ++c << endl;//前置++
//	//cout << c++ << endl;//后置++
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//int main() {
//	A aa(1);
//	aa.Print();
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//
//}

////#/*include<stdio.h>
//struct s1
//{
//	int a;
//	char c1;
//
//	char c2;
//};
//int main()
//{
//	s1 s1;
//	printf("%d \n", sizeof(s1));
//	return 0;
//}*/

//
//#include<iostream>
//using namespace std;
//int main()
//{
//
//}
//
//#include<stdio.h>
//#pragma pack(1)//修改默认对齐数
//struct s
//{
//	char i;
//	int a;
//	char j;
//};
//#pragma pack()//表示修改结束
//int main()
//{
//	struct s a1;
//	printf("%d\n", sizeof(a1));
//	return 0;
//}


////位段
//#include<stdio.h>
//struct A
//{
//	int _a : 2;//两个比特位
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}


//#include<stdio.h>
//union s
//{
//	char i;
//	int a;
//};
//int main()
//{
//	union s s1;
//	s1.i = 0x11223344;
//	s1.a = 0x55;
//	printf("%x", s1);
//}

