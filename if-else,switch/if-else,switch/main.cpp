//����������� ���������(���������) include � ����(����������)
#include <conio.h>
#include <iostream>
#include <ostream>
#include <climits>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>

using namespace std;

// ��������� ,������� ������� cout � endl � ������������ std
//using std::cout;
//using std::cin;
//using std::endl;
//using std::ios_base;
//using std::istream;
//using std::swap;
// � ������ ������� ���������� ���� � ���������

#include <iostream>
#include <conio.h>
#include <math.h>
#include <atlstr.h>

#pragma region String32
////���� ������ S � S0. ����� ���������� ��������� ������ S0 � ������ S. 
//int main()
//{
//	char s[100];
//	cin.getline(s,100);
//	char search[200];
//	cin.getline(search,200);
//	/*
//privet
//werwerwerprhvetpprivet333privet	= s
//i = 3
//j = 2
//s[i] == search[j]
//
//	*/
//	int i=0;
//	while (i < strlen(s))
//	{
//		if (search[0] == s[i])
//		{
//			int h = i;
//			for (int j = 1; j < strlen(search); j++)
//			{
//				if (s[j] != search[++i])
//				{
//					i=h+1;
//					break;
//				} 
//			}
//		}
//
//	}
//
//
//
//	_getch();
//	return 0;
//}

#pragma endregion

#pragma region ������ �3062. �������� ��������
////������ �������� � ���������� ��� �� ����� input.txt, ��������� �� ����� ��� � ���� output.txt. ������ ����� �� ������ ��������� � ��������� �� �������.
////:: ���������� :: ������� :: ������� :: ���� :: ������ ������� :: ���������
////����������� �� �������, ���	1
////����������� �� ������, ��������	64
////����	Free Pascal	GNU C	GNU C++	Delphi	Java	PHP	Python 2.7	Perl	Mono C#	Python 3.1	Haskell
////Min �����, ���	0.001	0.002	0.001	0.002	0.118	0.024	0.008	0.008	0.041	0.047	0.005
////������� �����, ���	0.006	0.006	0.011	0.013	0.227	0.032	0.107	0.008	0.072	0.06	0.006
////������ �������	1738	63	779	239	41	3	18	1	57	71	2
////� ������ ���� ��������� �������� x ����������, � ����� �� ������ ���� ���������� ������ �� 10% �� ����������� ��������. �� ������� ����� y ���������� ����� ���, �� ������� ������ ���������� �������� �� ����� y ����������.
////
////������� ������
////��������� �������� �� ���� �������������� ����� x � y
////
////�������� ������
////��������� ������ ������� ���� ����������� �����.
////
////�������
////������� ������
////10
////20
////
////�������� ������
////9
//int main()
//{
//	int y;
//	double x;
//	int res = 1;
//	
//	cin >> x >> y;
//
//	while (x < y)
//	{
//		x = x + x*0.1;
//		res = res + 1;
//
//	}
//	
//	
//	cout << res;
//
//	_getch();
//	return 0;
//}

#pragma endregion

#pragma region ������ �315. ����� ���������
////������ �315. ����� ���������
////������ �������� � ���������� ��� �� ����� input.txt, ��������� �� ����� ��� � ���� output.txt. ������ ����� �� ������ ��������� � ��������� �� �������.
////:: ���������� :: ������� :: ������� :: ������ :: ���� :: ������ ������� :: ���������
////����	Free Pascal	GNU C	GNU C++	Delphi	Java	PHP	Python 2.7	Perl	Mono C#	Ruby	Python 3.1	Haskell
////Min �����, ���	0.001	0.001	0.001	0.002	0.11	0.02	0.006	0.008	0.038	0.008	0.046	0.008
////������� �����, ���	0.007	0.012	0.007	0.009	0.274	0.142	0.036	0.008	0.06	0.009	0.066	0.009
////������ �������	3045	148	2057	719	82	5	23	1	153	2	127	3
////�� ������� ������������ n ��������� ����� 12+22+...+n2.
////
////������� ������
////�������� ������������ ����������� ����� n, �� ������������� 100
////
////�������� ������
////���������� �������  ����������� �����.
////
////�������
////������� ������
////2
////�������� ������
////5
//int main()
//{
//	int n;
//	int res = 0;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//
//		res = res + pow(i,2);
//	}
//
//	cout << res;
//
//	_getch();
//	return 0;
//}

#pragma endregion

#pragma region ������ �2949. ����� ��������	
//////������ �������� � ���������� ��� �� ����� input.txt, ��������� �� ����� ��� � ���� output.txt. ������ ����� �� ������ ��������� � ��������� �� �������.
//////:: ���������� :: ������� :: ������� :: ������ :: �������� ���� :: ���� :: ������ ������� :: ���������
//////����������� �� �������, ���	1
//////����������� �� ������, ��������	64
//////����	Free Pascal	GNU C	GNU C++	Delphi	Java	PHP	Python 2.7	Perl	Mono C#	Ruby	Python 3.1	Haskell
//////Min �����, ���	0.001	0.001	0.001	0.002	0.117	0.011	0.006	0.005	0.036	0.006	0.046	0.004
//////������� �����, ���	0.005	0.006	0.009	0.006	0.189	0.016	0.026	0.03	0.055	0.015	0.071	0.008
//////������ �������	2787	155	2153	474	90	4	51	5	146	8	171	5
//////�������� ���������, ������� ��������� �������� ���� ������������� ���������� a � b, ����� ������ �� �������� ������� (�� ���� � ���������� a ������ ���� �������� ��, ��� ������ ��������� � b, � � ���������� b �������� ��, ��� ������ ��������� � a). ����� �������� �������� ����������.
//////
//////������� ������
//////�������� ����� ����� a � b.
//////
//////�������� ������
//////�������� ����� �� ������.
//////
//////����������
//////�������� ������ �� �������� ����� ���:
//////
//////a = input ()
//////b = input ()
//////print (b, a)
//////�� ����  ���� ��������� ������ ����� �������� ����� ���:
//////a = input ()
//////b = input ()
//////# �������� ����
//////# ���� ���
//////print (a, b) 
////// 
//////�������
//////������� ������
//////8
//////5
//////�������� ������
//////5 8
//int main()
//{
//
//	int a,b,c;
//	cin >> a >> b;
//	
//	c = a;
//	a = b;
//	b = c;
//
//
//
//	cout << a << "  " << b;
//
//	_getch ();
//	return 0;
//}

#pragma endregion

#pragma region ������ �2940. ����
//////������ �������� � ���������� ��� �� ����� input.txt, ��������� �� ����� ��� � ���� output.txt. ������ ����� �� ������ ��������� � ��������� �� �������.
//////:: ���������� :: ������� :: ������� :: ������ :: �������� ���� :: ���� :: ������ ������� :: ���������
//////����������� �� �������, ���	1
//////����������� �� ������, ��������	64
//////����	Free Pascal	GNU C	GNU C++	Delphi	Java	PHP	Python 2.7	Perl	Mono C#	Ruby	Python 3.1	Haskell
//////Min �����, ���	0.001	0.001	0.001	0.002	0.113	0.011	0.006	0.005	0.04	0.006	0.046	0.004
//////������� �����, ���	0.006	0.006	0.007	0.006	0.237	0.106	0.026	0.022	0.061	0.008	0.06	0.007
//////������ �������	2246	128	1755	289	84	8	56	4	135	6	243	7
//////����� ���������� ��������� ������������� ������ � 109 ����������. ������ ���� �������� � �������� ��������� ���� � ���� �� ��������� v ���������� � ���.
////�� ����� ������� �� ����������� ����� t �����?
//////
//////������� ������
//////��������� �������� �� ���� �������� v � t. ���� v>0, �� ���� �������� � ������������� ����������� �� ����, ���� �� �������� v<0, �� � �������������.
//////
//////�������� ������
//////��������� ������ ������� ����� ����� �� 0 �� 108 � ����� �������, �� ������� ����������� ����.
//int main()
//{
//	const int d = 109;
//	int v,t,s;
//	cin >> v >> t;
//	if (v > 0)
//	{
//		s = v * t - d;
//	}
//	else
//	{
//		s = d + v * t;
//	}
//		
//	cout << s;
//
//	_getch();
//	return 0;
//}
#pragma endregion

#pragma region String26 
//int main()//String26. ���� ����� ����� N (> 0) � ������ S. ������������� ������ S � ������ ����� N ��������� �������: 
//// ���� ����� ������ S ������ N, �� ��������� ������ �������, ���� ����� ������ S ������ N, �� � �� ������ �������� ������� �.� 
//{
//	char s[100];
//	cin.getline(s,100);
//	int N;
//	cin >> N;
//	int a = N - strlen(s);
//	a = abs(a);// �������� �� ������
//	if (N > strlen(s))
//	{ 
//		for (int i = strlen(s); i >= 0; i--)
//			s[i+a] = s[i];
//		for (int i = 0; i < a; i++)
//			s[i] = '.';
//	}
//	else
//	{
//		for (int i = 0; i < strlen(s); i++)
//			s[i] = s[a++];
//	}
//	cout << s;
//
//	_getch();
//	return 0;
//}
#pragma endregion

#pragma region String28
//int main()//String28. ��� ������ C � ������ S. ������� ������ ��������� ������� C � ������ S.
//{
//	char s[250];
//	cin.getline(s,250);
//	
//	int a = strlen(s);
//	int i = 0;
//	while (i < a)
//	{	
//		if (s[i] == 'c')
//		{
//			for (int j = a+1; j > i; j--)
//			{
//				s[j] = s[j-1];			
//			}
//			s[i] = 'c';
//			a = strlen(s);
//			i+=2;
//		} else
//			i++;
//	}	
//	cout << s <<  endl;
//	
//
//_getch();
//return 0;
//}
#pragma endregion

//int main()//String28. ��� ������ C � ������ S. ������� ������ ��������� ������� C � ������ S.
//{
//	char str[250];
//	str[0] = '\0';
//	cin.getline(str,250);
//	//char str1[500];
//	char C = 'c';
//	char res;
//	for (int i = 0; i < strlen(str); ++i)
//	{
//		
//		if (str[i] == C)
//		{
//			str[i] = C;
//			//str[i++] = C;
//			//cout << str[i] <<  endl;
//		}
//			cout << str[i] <<  endl;
//	}
//	
//
////i++ // �����������
////++i // ����������
//
//_getch();
//return 0;
//}

//int main()//For20. ���� ����� ����� N (> 0). ��������� ���� ����, ����� ����� 1! + 2! + 3! + � + N! 
//	(��������� N! � N���������� � ���������� ������������ ���� ����� ����� �� 1 �� N: N! = 1�2���N). ����� �������� �������������� ������������, ��������� ���������� � ������� ������������ ���������� � ������� ��������� ��� ������������ �����.
//
//
//{
//	int n;
//	cin >> n;
//	unsigned int res = 1;
//	unsigned int res1 = 0;
//	
//	for (int i = 1; i <= n; i++)
//		
//	{
//		res = res * i;
//		res1 = res1 + res;
//
//
//	}
//	cout << res1;
//
//
//
//
//	_getch();
//	return 0;
//}

//int GetDigit(char d)
//{
//	return d - '0';
//}

//int main()//String23. ���� ������, ������������ �������������� ��������� ���� �<�����>�<�����>���<�����>�, ��� �� ����� ����� �������� ��� ��������� ������ �+� ��� ��� (��������, �4+7�2�8�). ������� �������� ������� ��������� (����� �����).
//{
//	char str[100];
//	cin.getline(str,100);
//	
//	int res = 0;
//	for (int i = 0; i < strlen(str); i++)
//		{	
//			if (str[i] >= 48 && str[i] <= 57)
//			{
//				res = GetDigit(str[i]);
//			}
//			else
//				if (str[i] == '+')
//				{
//					res = res + GetDigit(str[++i]);
//				}
//				else
//					if (str[i] == '-')
//					{
//						res = res - GetDigit(str[++i]);
//					}
//				
//		}
//			cout << res;
//
//i++ // �����������
//++i // ����������*/
//_getch();
//return 0;
//}

//const char symbol = 'c'; 
//int main()//String28. ��� ������ C � ������ S. ������� ������ ��������� ������� C � ������ S.
//{
//	char str[250];
//	str[0] = '\0';
//	cin.getline(str,250);
//	char str1[500];
//	int k = 0;
//	for (int i = 0; i < strlen(str); ++i)
//	{
//		str1[k++] = str[i];
//		if (str[i] == symbol)
//		{			
//			str1[k++] = symbol;
//		}
//	}
//	str1[k] = '\0';
//	cout << str1 << endl;
//
////i++ // �����������
////++i // ����������
//
//_getch();
//return 0;
//}

//int main ()//String23. ���� ������, ������������ �������������� ��������� ���� �<�����>�<�����>���<�����>�, ��� �� ����� ����� �������� ��� ��������� ������ �+� ��� ��� (��������, �4+7�2�8�). ������� �������� ������� ��������� (����� �����).
//{
//	char p = 4+7-2-8;
//	setlocale(LC_ALL , "Russian");
//	cout << (int)p;
//
//
//	_getch();
//	return 0;
//}

//int main()  // String16. ���� ������. ������������� � ��� ��� ��������� ��������� ����� � ��������. 
//{
//	char str[100];
//
//
//	setlocale(LC_ALL , "Russian");
//	cout << "\t������� ��������� ��������� �����" << endl;
//	cin.getline(str,100);
//	
//	
//	for (int i = 0; i < strlen(str); i++)
//	{
//		
//		str[i] = toupper (str[i]);
//		//res = toupper (str[i]);
//		//res = res + toupper (str[i]);
//		//res = res + (char)toupper (str[i]);
//		//tolower(str[0]); ��������� � ���������
//		//toupper (str[i]); ��������� � ���������
//		//cout << (char)toupper (str[i]) << endl;
//	}
//		cout << str << endl;
//	_getch();
//	return 0;
//}

//int main() //While19. ���� ����� ����� N (> 0). ��������� �������� ������� ������ � ������ ������� �� �������, ����� �����, ���������� ��� ��������� ����� N ������ ������. ����� ������� ������������, ��� ����� �� ������ ���������� ����. ������� �����
//
//{
//	setlocale(LC_ALL , "Russian");
//	int N,M;
//	cin >> N;
//	M = N;
//	int res = 0;
//	
//	while (N > 0)
//	{
//		N = N / 10;
//		res = res + 1;
//	}
//	
//	
//	int res1 = 0;
//	for (int i = res; i > 0; i = i - 1)
//	{
//		res1 = res1 + (M % 10) * (pow(10,i-1));
//		M = M / 10;
//		
//	}
//	cout << res1;
//	
//_getch();
//return 0;
//}

//int main()
//{
//	for (int i = 0; i < 256; i++)
//	{
//		cout << i << "  " << char(i) << endl;
//	}
//	_getch();
//	return 0;
//}

//int main()
//{
//	//setlocale(LC_ALL , "Russian");
//	char S[100];	
//	cin.getline(S, 100);
//	//CharToOem(S, S);
//	int res;
//	res = 0;
//	for (int i = 0; i < strlen(S); i++)
//	{
//		char d = S[i];
//		//cout << S[i] << " " << d << endl;
//		if ((d >= 97) && (d <= 122) || (d >= 160) && (d <= 175) || (d >= 224) && (d <= 239))
//		{
//			res = res + 1;
//		}
//		
//		
//	}
//		cout << res;
//	_getch();
//	return 0;
//}

//int DigitCount(int K)
//{
//	int res = 0;
//	while (K > 0)
//	{
//		
//		K = K / 10;
//		res = res + 1;
//	}
//		
//	return res;
//	
//}
//int main()
//{
//	setlocale(LC_ALL , "Russian");
//	int a,b,c,d,e;
//	
//	cout << "\t������� �����\t\n"; 
//	cin >> a >> b >> c >> d >> e;
//	cout << DigitCount(a);
//	cout << DigitCount(b);
//	cout << DigitCount(c);
//	cout << DigitCount(d);
//	cout << DigitCount(e);
//
//	
//	
//
//
//
//	_getch();
//	return 0;
//}

//void InvertDigits(int &K) 
//{
//	// 123
//	int d = DigitCount(K); // 3
//	int r = 0;
//	
//	while (K > 0)
//	{
//		r += (K % 10)*pow(10,d-1);
//		K = K / 10;
//		d--;
//	}
//   K = r;
//}

//int main()
//{
//	setlocale(LC_ALL , "Russian");
//	int a,b,c,d,e;
//	cout << "\t������� �����\t\n"; 
//	cin >> a ;//>> b >> c >> d >> e;
//	InvertDigits(a) ;
//	cout << a << endl;
/////*	InvertDigits(b);
////	InvertDigits(c);
////	InvertDigits(d);
////	InvertDigits(e);*/
////	_getch();
////	return 0;
////}

//int main()
//{
//	setlocale(LC_ALL , "Russian");
//	int N,res,res1,R;
//	cout << "\t������� �����\t\n"; 
//	cin >> N;
//	while (N > 0)
//	{
//		res = N % 100  ;
//		res1 = N / 10;
//		R = res * 
//		cout << res ;
//	N = res1; 
//	
//		
//	}
//	
//
//	
//
//		_getch();
//	return 0;
//}

//int main()
//{
//	char S[100], rez[200];	
//	cin.getline(S, 100); // ��������� � ������� ������, �������� �� 100 ��������
//	int j = 0;
//	// strlen - ����� ������
//	for (int i = 0; i < strlen(S); i++)
//	{
//		rez[j++] = S[i];
//		rez[j++] = ' ';
//	}
//	rez[j] = '\0'; // ��������� � ����� �������������� ������ ������ ����� ������
//	cout << rez << endl;	
//
//	_getch();
//	return 0;
//}

//int main()
//{
//	int N, d = 65;
//	cin >> N;
//	for (int i=1; i<=N; i++)
//	{
//		cout << d << " " << (char)d << endl;
//		d++;
//	}
//	
//	/*char C; ����� ���� �������� ascii
//	
//	for (int i=0; i < 256; i++)
//		cout << i << " " << (char)i << endl;*/
//
//	_getch();
//	return 0;
//}

//int main()
//{
//	char C;
//	cin >> C ;
//	int d = (int)C;
//
//	if ((d >= 48) && (d <= 57))
//		cout << "Is digit!";
//	//cout << C << " " << (int) C << endl;
//	//for (int i=0; i < 256; i++)
//		//cout << i << " " << (char)i << endl;
//
//	_getch();
//	return 0;
//}

//int main()
//{
//	setlocale(LC_ALL , "Russian");
//	int A,B;
//	cout << "\t������� ����� � < ����� �\t\n"; 
//	cin >> A >> B;
//	for (int i = A; i <= B; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			cout << i << " ";
//		}
//		cout << endl;	
//	}
//	
//
//		_getch();
//	return 0;
//}

//int main()
//{
//	setlocale(LC_ALL , "Russian");
//	int a,c; 
//	
//	cout << "\t������� ���-�� ���\t\n"; 
//	cin >> a ;
//
//
//	cout << a % 60 << endl;
//
//
//	
//		_getch();
//	return 0;
//}

//int main()
//{
//	setlocale(LC_ALL , "Russian");
//	int x,y,P,P1; 
//	cout << "\t������� X\t\n"; 
//	cin >> x ;
//	P = pow(x,6);
//	P1 = pow(x,2);
//int x2 = pow(x,2);
//y = 3�pow(x2, 3) � 6�x2 � 7
//	//y = 3�x6 � 6�x2 � 7
//		y = 3*P-6*P1-7;
//	
//	cout << y << endl;
//
//		_getch();
//	return 0;
//}

//int main()
//{
//	setlocale(LC_ALL , "Russian");
//	int num; 
//	int a,c,d;
//	const int b = 10;
//	cout << "\t������� ����� �����\t\n"; 
//	cin >> a ;
//
//		
//		c = a%(a-1);
//
//
//	
//	cout << c << endl;
//
//
//
//	
//	
//	
//	
//	
//	
//		_getch();
//	return 0;
//}
 
//int res ( int x, int y, int z )
//{
//	int * mas;
//	mas = new int[x];
//	mas[0] = y;
//	cout << mas[0] << " \n";
//	
//	for (int i = 1; i < x; i++)
//	{
//	
//		mas[i] = mas[i-1] + z;
//	
//		
//		cout << mas[i] << endl ;
//		
//	}
//	return 1;
//}
//
//void res1 (int x, int y, int z ,int &u)
//{
//	int * mas;
//	mas = new int[x];
//	mas[0] = y;
//	cout << mas[0] << " \n";
//	
//	for (int i = 1; i < x; i++)
//	{
//	
//		mas[i] = mas[i-1] + z;
//	
//		u = mas[i];
//		cout << u << endl ;
//		
//	}
//	u = 1;
//}
//
//int main()
//{
//	int n,A,D,u;
//	cin >> n;
//	cin >> A >> D;
//	res1 (n,A,D,u);
//	//cout << res (n,A,D) << endl;
//	
//	_getch();
//	return 0;
//}

////Array3. ���� ����� ����� N (> 1), � ����� ������ ���� A � �������� D �������������� ����������. 
////������������ � ������� ������ ������� N, ���������� N ������ ������ ������ ����������: 
////A,    A + D,    A + 2�D,    A + 3�D,    �
////5
////4
////3
////4 7 7+3=10 13
//int main()
//{
//	int n,A,D;
//	cin >> n;
//	// ��������� ��������� �� ������� ������
//	int * mas;
//	// �������� ������
//	mas = new int[n];
//	cin >> A >> D;
//	mas[0] = A; // 4
//	cout << mas[0] << " ";
//	//mas[1] = mas[0] + D; // 4 + 3 = 7
//	//mas[2] = mas[1] + D; // 4 + 2*3 = 10, 7 + 3
//	//mas[3] = mas[2] + D; // 13
//	for (int i = 1; i < n; i++)
//	{
//		mas[i] = mas[i-1] + D; 
//		cout << mas[i] << " ";
//	}
//	cout << endl;
//	// ������� ���������� ����� ��� ������� ������
//	delete []mas;
//	_getch();
//	return 0;
//}

//int Sing( float x )
//{
//	if (x < 0)
//		return -1;
//	else
//		if (x = 0)
//			return 0;
//		else
//			return 1;
//}
//
//void Sing2 (float x, float &y)
//{
//
//
//	if (x < 0)
//		y = -1;
//	else
//		if (x = 0)
//			 y = 0;
//		else
//			y = 1;
//}
//
//void Sing3 (float &x)
//{
//	if (x < 0)
//		x = -1;
//	else
//		if (x = 0)
//			 x = 0;
//		else
//			x = 1;
//}
//
//
//int main()
//{
//	float x,y;
//	setlocale(LC_ALL , "Russian");
//	cout << Sing(6.2)+Sing(7.9) << endl;
//	Sing2 (6.2,y);
//	cout << y << endl;
//	x = -3;
//	Sing3 (x);
//	cout << x << endl;
//
//	_getch();
//	return 0;
//}

//void PowerA3(int A, int &B)
//{
//	B = pow(A,3);
//}
//
////int main()
////{
////	setlocale(LC_ALL , "Russian");
////	int i = 1;
////	int q, w;
////	while (i <= 5)
////	{
////		//i = i + 1;
////		cin >> q;
////		PowerA3(q,w);
////		cout << w << endl;
////		i = i + 1;
////	}
////	cout << "��������� 5 ��������" << endl;
////	
////	_getch();
////	return 0;
////}

//int main()
//{
//	setlocale(LC_ALL , "Russian");
//	int num; 
//	int a,b,c,d;
//	cout << "\t������� ����� �����\t\n"; 
//	cin >> a ;
//	cout << "\t������� ����� �� ������� ����� ������\t\n"; 
//	cin >> b ;
//	c = a / b;
//	d = a % b;
//	cout << d << c;
//	
//	
//	
//		_getch();
//	return 0;
//}

/*int main()
{
	setlocale(LC_ALL , "Russian");
	int num; 
	int a,b,c;
	cout << "\t������� ����������� �����\t\n"; 
	cin >> num ;
	a = num / 100;
	b = num / 10 % 10;
	c = num % 10;
	if ((a != b) && (b != c) && (c != a))
	{
		cout << "��� ����� ��������" <<endl;

	}
	else
	{
	cout << "����� ����� ��� ��� ��� ���������� �����" <<endl;
	}
	
	
	
		_getch();
	return 0;
}*/

/*int main()
{
	setlocale(LC_ALL , "Russian");
	float a,b,c;     
	cout << "\t������� a, b\t\n"; 
	cin >> a >> b;
	cout << "a = " << a << " b = " << b << endl;
	
	if (a > b)
	{
		//c = b;;
		//b = a;
		//a = c;
		swap (a,b); //��� ��� ����� ������������ SWAP!!!
		cout << "\t���������� ������ � = �  � = �\t\n";
		cout << " b = " << b <<  " max " << " a = " << a << " min " <<  endl;
	}
	else
	{
		
		cout << " b = " << b <<  " max " << " a = " << a << " min " <<  endl;
	}
		_getch();
	return 0;
}*/

/*const int  N = 5;
const int  M = 5;
int main()
{
	srand( (unsigned)time( NULL ) );
	int matr[N][M];	
	int result = 0;
	for (int i=0; i < N; i++)
	{
		for (int j=0; j < M; j++)
			matr[i][j] = rand() % 2;
			
	}		
	//result = 0;
	
	for (int i=0; i < N; i++)
	{
		
		for (int j=0; j < M; j++)
			
				cout << matr[i][j] << " ";
				cout << endl;
				
		
	}
	
	for (int i = 0; i < N; i++)
	{
		result = 0;
		for (int j = 0; j < M; j++)
			result += matr[j][i];
		cout << result << " ";
	
	}

		
		_getch();
	return 0;
}*/

/*{
	setlocale(LC_ALL , "Russian");
	int a,b;
	a = 50;
	
	for (int i = 1; i < a; i++) 

	{
		i = i % a;
	
		
		cout << i << endl;
	}

	
	_getch();
	return 0;
}*/

/*int main()

{
	setlocale(LC_ALL , "Russian");
	int a,b;
	int res,res1;
	res1 = 0;
	cout << "������� � � \n"; 
	cin >> a >> b;
	
	while (a >= b)
	{
		res = a - b;
		a = res;
		res1 = res1 + 1;
	}
	

	cout << "����� ����� = " <<res1 << endl;
	cout << "������� = " << a;
	
	
	_getch();
	return 0;
}*/

/*int main()
{
	setlocale(LC_ALL , "Russian");
	int a,b;
	bool res,res1;
	cout << "������� � � \n"; 
	cin >> a >> b;
	cout << " � = " << a <<  " � = " << b << endl; 
	res = a % 2 == 0;
	res1 = b % 2 == 0;
	
	
	
		
			
	 cout <<" a = "<< res ;
	 cout <<" b = "<< res1 ;
	
	_getch();
	return 0;
}
*/

/*int main()
{
	setlocale(LC_ALL , "Russian");
	int a,b,res;
	
	cout << "������� ����� �������� � � \n"; 
	cin >> a >> b;
	cout << "�� ����� ������� � " << a << " ��" << " � ������� � " << b << " ��" << endl; 
		res = a % b;
		
			
			
		cout << "������� ������� A " << res ;

	
	_getch();
	return 0;
}*/

/*int main()
{
	setlocale(LC_ALL , "Russian");
	int a,b,c,res;
	res = 0;
	cout << "input a b c\n"; 
	cin >> a >> b >> c;
		/*if  (a >= 0)
			{
			res = res + 1;
			}
			
		if (b >= 0)
			{
			res = res + 1;
			}	
			
		if (c >= 0)
			{
			res = res + 1;
			}
		
			
			
		cout << "������������� �����  " << (a >= 0) + (b >= 0) + (c >= 0);

	
	_getch();
	return 0;
}*/

/*
{
	setlocale(LC_ALL , "Russian");
	int a,b,c;
	cout << "input a b c\n"; 
	cin >> a >> b >> c;
		if  ((a >= 0) && (b >= 0) && (c >= 0))
			{
			cout << " 3 ������������� ����� " ; 
			}
		else
{
			
			if (((a >= 0) && (b < 0) && (c >= 0)) || ((a >= 0) && (b >= 0) && (c < 0)) || ((a < 0) && (b >= 0) && (c >= 0)))
			{
			cout << " 2 ������������� ����� " ;
			}	
			

		else
{
			
			
				if (((a >= 0) && (b < 0) && (c < 0)) || ((a < 0) && (b >= 0) && (c < 0)) || ((a < 0) && (b < 0) && (c >= 0)))
			{
			cout << " 1 ������������� ����� " ;
			}
		else
{
			

				if ((a < 0) && (b < 0) && (c < 0))
			{
			cout << " 0 ������������� ����� " ;
			}
		
		
				}}}
		

	
	*/

/*{
	
	int a,b,c,tempB;
	cout << "input a b c\n"; 
	cin >> a >> b >> c;
	cout << "a = " << a << "  b = "<< b << "  c = " << c << endl; 
	tempB = b;
	

	b = a;
	a = c;
	c = tempB;
	
	cout << "a = " << a << "  b = "<< b << "  c = " << c; 

		_getch();
	return 0;
}*/

/*
const int  N = 5;

int main()
{
	setlocale(LC_ALL , "Russian");
	srand( (unsigned)time( NULL ) );
	int mas[N];
	int i;
	for (int i=0; i < N; i++)
		mas[i] = rand() % 20 + 1;
	{
	for (i=0; i < N; i++)
		cout << mas[i] << endl;
	cout << endl;
	}
	int sum = 0;
	for (int i=0; i < N; i++)
		sum += mas[i];
	cout << sum << endl;

	int k;
	cin >> k;
	for (i = 0; i < N; i++)
		if (mas[i] == k)
		{
			cout << i+1;
			break;
		}

	if (i == N)
	{
		cout << "� ������ ������� ��� �������� = " << k << endl;
	}

	
		_getch();
	return 0;
}
*/
	
/*int matr[N][N];	
	for (int i=0; i < N; i++)
		for (int j=0; j<N; j++)
			cin >> matr[i][j];
	for (int i=0; i < N; i++)
	{
		for (int j=0; j<N; j++)
			cout << matr[i][j] << " ";
		cout << endl;
	}*/

/*enum mytype { one, two, last};

int main()
{
	mytype m;
	m = two;

	switch (m)
	{
	case one:
		cout << "one\n";
		break;
	case last:
		cout << "last\n";
		break;
	default:
		cout << "unknown\n";
	}

	/*
	int N=5;
	int result = 1;
	
	cout << result << "!= " << result << endl;
	
	for (int i = 2; i <= 5; i++)
	{
		result = result * i;
		cout << i << "!= " << result << endl;
	}		
	_getch();
	return 0;
}

*/

/*
	������ ��������� ������� ���-�� ����� ,������� ����� �������� � N - � ���������� �����
	1��=1                    =1                            
	2��=1+2                =3
	3��=1+2+4            =7
	4��=1+2+4+8        =15 



	using namespace std;

	void main()
{
	setlocale(LC_ALL , "Russian"); // ���������� �������
	const int N = 4; // ���������� ������
	// pow - ��� ���������� �������, ������������ �� mul
	unsigned long long result = 0, mul = 1; // ��� ����� �������� unsigned long long?

	for (int i = 1; i <= N; i++) // ���� ������ �������� �� ��������� N
	{
		
		result = result + mul;
		// ���� ������� setlocale, �� ����� ������ �� �������
		cout << " �� " << i << " ������ " << mul << " ����� " << endl;
		mul *= 2; // �������� ���������� ����� ��� ��������� ������
	}	
	cout << "����� �����: " << result << endl;
	// ����������� ������ "������� ����� �������..."
	system("pause");
	
}
	*/

/*int main()
{  

setlocale(LC_ALL , "Russian"); 
const int N = 4;
unsigned long long result = 1, pow = 1;

for (int i = 1; i <= 3; i++)
{
	for (int j = 0; j < 3; j++)
	pow *= 2;
		
	cout << " na " << i << " kletke " << result << " zeren " << endl;
	
	result += pow;
	pow = 1;
}
	 
	_getch();

	
	return 0;
}
*/

/*////////////////////////////////������ ����� DO WHILE////////////////////////////////////////////////////////////////////////////////
setlocale(LC_ALL , "Russian");
char exit;
exit = 'y';
cout << "\t����� �� ���������???\t\n";

do
{
cout << "\t��� ������������� ������� Y , ��� ������ N\t\n";
} while (!(cin >> exit && exit == 'y'));
	
cout << "poka";
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
/*////////////////////////////////������ ����� WHILE///////////////////////////////////////////////////////////////////////////////////
setlocale(LC_ALL , "Russian");
char exit;
exit = 'y';
cout << "\t����� �� ���������???\t\n";
	
while (cin >> exit && exit != 'y')
{
cout << "\t��� ������������� ������� Y , ��� ������ N\t\n";
}
	
cout << "\tpoka";
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
/*////////////////////////////////// ������ ����� FOR ,���������� ������� �����////////////////////////////////////////////////////////
setlocale(LC_ALL , "Russian");
const int N = 15;
bool simpelnumber[N+1];
for ( int i = 2; i < N+1; i++)
simpelnumber[i] = true;
for (int i = 2; i <= N; i++)
{
if (simpelnumber[i])
{
for (int j = i*i; j <= N; j+=i)
simpelnumber[j] = false;
		
}

}
	
for ( int i = 2; i < N+1; i++)
if (simpelnumber[i])
cout << i << endl;
	
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*/////////////////////////////���������� ������� � ���������� � ���������� ��� � ���//////////////////////////////////////////////////
setlocale(LC_ALL , "Russian");
const int N = 10;
int A[N];
	
cout << " \t������� ������:\n " << endl;
for (int i = 0; i < N; i++)
{
cout << "������� �������� " << i << " �������� �������: ";
while (!(cin >> A[i]))
{
// ������� ������ cin.clear();
cin.clear();
// �������� �������� �� ������	
while(cin.get() != '\n');
cout << "������� �������� " << i << " �������� �������: ";
}	
		
}
system("cls");
cout << "�������� ������" << endl;
for (int i = 0; i< 10; i++)
cout << "�[" << i << "] = " << A[i] << endl;

int max,min;
max = A[0];
min = A[0];
for (int i = 0; i< 10; i++)
{
if (max < A[i])
max = A[i];
if (min > A[i])
min = A[i];
}
cout << "max = " << max << " min = " << min; 
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
/*/////////////////////////////���������� ������� � ������� ����� FOR//////////////////////////////////////////////////////////////////
setlocale(LC_ALL , "Russian");
const int N = 10;
int A[N];
	
for (int i = 0; i < N; i++)
{
		
A[i] = i+2;
cout << "A[" << i << "]= " << A[i] << endl;
}
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*/////////////////////////////������� ���� � �������//////////////////////////////////////////////////////////////////////////////////	
setlocale(LC_ALL , "Russian");
const int N = 10;
bool A[N];// ������ �� �-��������
// sizeof()-����� ��������������� ������ � �������� � �����
cout << sizeof(A) << endl; 
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
/*/////////////////////////////�� ����� ������/////////////////////////////////////////////////////////////////////////////////////////
setlocale(LC_ALL , "Russian"); 
int a;
char b;
b = '*'; 
cout << "������� �����:  ";
cin >> a;
for (int i = 0; i < a; i++)
{
	for (int j = 0; j <= i; j++)
		
	cout << b ;
	cout << endl;
	
}
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*////////////////////////////�� ������� ������ ��� � ���//////////////////////////////////////////////////////////////////////////////
setlocale(LC_ALL , "Russian"); 
int a,b,nod,nok,temp;
	
cout << " Enter a and b ����� ����� " << endl;
//cin >> a >> b;
	
if (!(cin >> a >> b ))
{
cout << "8888" << endl;
_getch();
return -1;
}
int a1 = a;
int b1 = b;
while (b > 0)
{
a %= b;
temp = a;// libo swap (a,b);
a = b;
b = temp;
}
	
nod = a;
nok = (a1 * b1)/nod; 
	
cout << "nod = " << nod << endl;
cout << "nod = " << nok << endl;
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

/*///////////////////////////���������� ����� � �_�������//////////////////////////////////////////////////////////////////////////////
	
setlocale(LC_ALL , "Russian"); 
unsigned long long result = 2;
	
	for (int i = 1; i <= 20; i++)
{
		
	cout << " 2^" << i << " = " << result << endl;
	result *= 2; 
		
}
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

/*///////////////////////////������� ������ ��� �������////////////////////////////////////////////////////////////////////////////////

setlocale(LC_ALL , "Russian"); 
const int N = 64;
unsigned long long result = 1, pow = 1;
//int i;
	
for (int i = 1; i <= 64; i++)
{
for (int j = 0; j < i; j++)
pow *= 2;
		
cout << " na " << i << " kletke " << result << " zeren " << endl;
	
result += pow;
pow = 1;
}
*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
			
/*if (i < 100);
{
break;
}
}
	
/*setlocale(LC_ALL , "Russian");
double a,b;
char Operator;
cout << " input a +,-,*,/ b " ;
cin >> a >> Operator >> b;
switch (Operator)
{
case '+': cout << a+b ;break;
case '-':cout << a-b ;break;
case '*':cout << a*b ;break;
case '/': cout << a/b ;break; 
default: cout << " error ";
			
}
*/

/*setlocale(LC_ALL , "Russian");
double a,b;
char Operator;
cout << " input a +,-,*,/ b " ;
cin >> a >> Operator >> b;
if (Operator == '+') 
cout << a+b << endl;
else
if (Operator == '-')
cout << a-b << endl;
else 
if (Operator == '*')
cout << a*b << endl;
else
if (Operator == '/')
cout << a/b << endl;
else 
cout << "Error" << endl;
*/

/*Operator = a + b;
cin >> a >> Operator >> b;
Operator = a + b;
	
cout << Operator ;
	
	
	
/*setlocale(LC_ALL , "Russian");
double a,b,c,D,x1,x2;
cout << " ���������� ��������� ax^2+bx+c=0\n " ;
cout << " \tinput a\n " ;
cin >> a;	
cout << " a =  " << a << endl;
cout << " \tinput b\n " ;
cin >> b;	
cout << " b =  " << b << endl;
cout << " \tinput c\n " ;
cin >> c;	
cout << " c =  " << c << endl << endl;
	
D = (b*b - 4*a*c);
cout << " D = " << D << endl;

if (D > 0)
{
x1 = (-b+sqrt(D))/(2*a);
x2 = (-b-sqrt(D))/(2*a);
cout << " x1 = " << x1 << endl;
cout << " x2 = " << x2 << endl;
}
else
{
if (D == 0)
{
x1 = (-b/(2*a));
cout << " x1 = " << x1 << endl;
}
else
{
if ( D < 0 )
{
cout << " ������ ��� " << endl;
}
}
}*/
	
/*setlocale(LC_ALL , "Russian");
int Ruble;
cout << "������� ���-�� ������\n";
cin >> Ruble;
cout << " � ��� " << Ruble << "";
if (Ruble < 0)
cout << " Error ";
	if (Ruble%100 >= 11 && Ruble%100 <= 19)
{
	cout << " ������\n "; 
}
else 
{
	if ((Ruble%10 >= 5 && Ruble%10 <= 9) || (Ruble%10 == 0))
{
	cout << " ������ " << endl;
}
else
{
	if (Ruble%10 >= 2 && Ruble%10 <= 4)
{
	cout << " ����� " << endl;
}
else
{
	if (Ruble%10 == 1)
{
	cout << " ����� " << endl;
}
}
}
}
*/

/*setlocale(LC_ALL , "Russian");
int Ruble;
cout << "������� ���-�� ������";
cin >> Ruble;
	
cout << " � ��� " << Ruble << " " ;
	
if (Ruble < 0)
{
cout << " Error ";
_getch();
return -1;
}
if ((Ruble%100) >= 11 && (Ruble%100) <= 19)
cout << "������\n";
else
switch (Ruble%10)
{
case 1: cout << " �����\n ";break;
case 2:
case 3:
case 4: cout << " �����\n ";break;
default: cout << " ������\n ";
			
}
	
	
	
	
/*bool a = false,b = true;
// �������� ��������
cout.setf(ios_base::boolalpha);
cout << " !a " << !a << endl;
cout << " !b " << !b << endl;

// �������� ���������� �������� ,��� ��� ���������
b = false;
cout << a << "||" << b << "=" << (a||b) << endl;
b = true;
cout << a << "||" << b << "=" << (a||b) << endl;
a = true, b = false;
cout << a << "||" << b << "=" << (a||b) << endl;
b = true;
cout << a << "||" << b << "=" << (a||b) << endl << endl;
// �������� ����������� ��������� , ��� � ���������
a = false, b = false;
cout << a << "&&" << b << "=" << (a&&b) << endl;
b = true;
cout << a << "&&" << b << "=" << (a&&b) << endl;
a = true, b = false;
cout << a << "&&" << b << "=" << (a&&b) << endl;
b = true;
cout << a << "&&" << b << "=" << (a&&b) << endl;

	

	
/*bool a = false, b = true;
cout.setf(ios_base::boolalpha);
cout << " !a " << !a << endl;
cout << " !b " << !b << endl;
	
	
	
	
/*setlocale(LC_ALL , "Russian");
cout.setf(ios_base::boolalpha);
bool a,b;
a = false;
b = true;
if (( a = false ) && ( b = true ))
{
		
//cout.setf(ios_base::boolalpha);
cout << " a " << b << " b " << a << endl;
}
else
{
cout << " [thyz "  << endl;
}
//cout << "a " << b << endl;
//cout.setf(ios_base::boolalpha);
//cout << " a = " << a << ", b = " << b << endl;
	
	
	
/*setlocale(LC_ALL , "Russian");
double BMI;
cout << "\t������� ��� BMI\t\n";
cin >> BMI;
if (BMI <= 15)
cout << "\t���������\t\n";
else if (BMI <= 20)
cout << "\t�������� ���\t\n";
else if (BMI <= 25)
cout << "\t���������� ���\t\n";
else
cout << "\t��������\t\n";

	
/*int a,b;
cout << "Enter a,b:";
cin >> a >> b;	
cout << "a-" << a << "\tb-" << b << endl;
cout << " a <= b " << (a <= b) << endl;
cout << " a >= b " << (a >= b) << endl;
cout << " a == b " << (a == b) << endl;
cout << " a != b " << (a != b) << endl;
cout << " a < b " << (a < b) << endl;
cout << " a > b " << (a > b) << endl;
*/
		
/*setlocale(LC_ALL , "Russian");
double a,b;
double c;
cout << "\t ������� ����� �\t" << endl;
cin >> a;
cout << "\t ������� ����� �\t" << endl;
cin >> b;
c = b*100/a;
cout << "\���� ��������� � ���������\t" << c << endl;
*/

/*setlocale(LC_ALL , "Russian");
int cost,rub;
double kolvo;
cout << "\t ������� ���-�� ������\t" << endl;
cin >> rub;
cout << "\t ������� ��������� ������\t" << endl;
cin >> cost;
kolvo = rub / cost;
cout << "\t �� ������� ������\t" << kolvo << endl;
*/
	
/*setlocale(LC_ALL , "Russian");
cout << "\t��������� �������� ������ � ����" << endl;
int hour,minutes,sec,ostatokMIN,ostatokSEC,ostatokSECC;
const int svh = 3600;
cout << " ���������� ������ " << endl;
cin >> sec;
hour = sec / svh;
ostatokSEC = sec % svh;
ostatokMIN = ostatokSEC / 60;
ostatokSECC = ostatokSEC % 60;
cout << " ���������� �����\t" << hour <<  endl;
cout << " ���������� �����\t" << ostatokMIN << endl;
cout << " ������� ������\t\t" << ostatokSECC <<  endl;
*/

//cout << "BMI" << endl;
//cout << "BMI2" << endl;
//double BMI,Height,Weight;
//cout << "������� ���� � ������\n";
//cin >> Height;
//cout << "������� ��� ���\n";
//cin >> Weight;
//BMI = Weight / (Height*Height);
//cout << "BMI" << BMI << endl;
//double USD;
//int EUR;
//int RUB;
//const double kursRub = 59.15;
//const double kursEur = 0.93;
//cout << "USD" << endl;
//cin >> USD;
//cout << "RUB:\t" << kursRub * USD << endl;
//cout << "EUR:\t"  << kursEur * USD << endl;
//cout << "�������:\t"  << (F - 32) / 1.8 << endl;
// setlocale(LC_ALL , "Russian");
// const int Size = 1024;
// int Gigabytes; // ��������
// int Megabytes; // ��������
// int kbytes; // ��������
// unsigned long long bytes; // ����
// cout << "������� ���-�� ��������" << endl;
// cin >> Gigabytes;
// Megabytes = Gigabytes * Size;
// kbytes = Megabytes * Size;
// bytes = (unsigned long long)kbytes * (unsigned long long)Size;
// cout << "Gigabytes   " << Gigabytes << endl;
// cout << "Megabytes   " << Megabytes << endl;
// cout << "kbytes      " << kbytes << endl;
// cout << "bytes       " << bytes << endl;
// ������� ,������ ��������� ����� ������� // LC_ALL ���������
// setlocale(LC_ALL , "Russian");
// int ��� ����� ����� // double ��� ����� � ��������� ������ // char ��� ������� // boll ��� �������
// bool T = true, F = false; // ,����� �������� ��������: true 1, false 0
// char C = '#';
// double Salary = 12.45;
// int Apple,Carrots,Potaetoes; //����� �������� ����� ������� int Apple = 7; ��� int Apple(7); ���������� ��� ������� �������������
// Apple = 7;
// Carrots = 12;
// Potaetoes = 160;
// int Apple;
// cout << "Apple:" << Apple << endl;
// cout << "Carrots:" << Carrots << endl;
// cout << "Potaetoes:" << Potaetoes << endl;	
// cout << "������ ���!" << endl;
// cout << "������� ���-�� �����" << endl;
// cin >> Apple;
// cout << "� ��� " << Apple << " �����" << endl;
