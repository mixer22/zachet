#include <iostream>
#include <fstream>
#include "Set.h"
using namespace std;

int main()
{
    Set s1;
    Set s2;
    Set s3;

    char a,b,c,d,e,f;
    cout << "Enter 1 elem s1" << endl;
    cin >> a;
    cout << "Enter 2 elem s1" << endl;
    cin >> b;
    cout << "Enter 3 elem s1" << endl;
    cin >> c;
    cout << "Enter 1 elem s2" << endl;
    cin >> d;
    cout << "Enter 2 elem s2" << endl;
    cin >> e;
    cout << "Enter 3 elem s2" << endl;
    cin >> f;

    cout << "s1 = s1 + " << a << " +" << b << " +" << c << endl;
    s1 = s1 + a;
    s1 = s1 + b;
    s1 = s1 + c;
    s1.showset();
    cout << endl;

    cout << a << " is a member of s1?" << endl;
    cout << a << " -";
    s1.isMember(a);
    cout << endl;

    cout << "W is a member of s1?" << endl;
    cout << "W-";
    s1.isMember('W');
    cout << endl;

    cout<< "s1 = s1 - " << b << endl;
    s1 = s1 - b;
    s1.showset();
    cout << "s1 = s1 - " << a << endl;
    s1 = s1 - a;
    s1.showset();
    cout << "s1 = s1 - " << c << endl;
    s1 = s1 - c;
    s1.showset();
    cout << endl;

    cout << "s1 = s1 + " << a << " +" << b << " +" << c << endl;
    s1 = s1 + a;
    s1 = s1 + b;
    s1 = s1 + c;
    s1.showset();
    cout << endl;

    cout << "s2 = s2 + " << d << " +" << e << " +" << f << endl;
    s2 = s2 + d;
    s2 = s2 + e;
    s2 = s2 + f;
    s2.showset();
    cout << endl;

    cout << "s1 == s2 ? : " << s1.compare(s2) << endl;
    cout << endl;

    cout << "s3 = s1 + s2" << endl;
    s3 = s1 + s2;
    s3.showset();
    cout << endl;

    cout << "s3 = s3 - s1" << endl;
    s3 = s3 - s1;
    s3.showset();

    // ������ � ������

    // ���� ���������: ��������� ���� -> ��������� ������ �� �����, ����������� ���������� � char ������ ����� � ������ �����
    // ������ ���� char � ��������� s1, ����� ����� ������ �� ����� � ����� �� ������� ���������� ��� � ��������� s2 � ��� �����
    // ���� ���� �� ����������. ��� �������� ����� ������� vector ��������
    // ����� ���������� ����� ����� ������� ��������� ������ for ���������� ������� compare ��� ��������� � ������� ������ ��� ����

    ifstream in("example.txt");
    if (!in.is_open())
        cout << "File isn't open!";
    char* s = new char[100];

    while (!in.eof())
    {
        in.getline(s,100,'.'); // ��������� �� �����
        /*
         * ��� ������ ���� ������������� ��������, �� � ������ ����� �� ����� ��� ��������, ��� ������ �� ������� ����� �� ���� ��� ��� � 8 ������
         */
    }
    // ��� ��������� ���� ���������
    return 0;
}