#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;

void Student::set_value(void)
{
    cin >> num;
    cin >> name;
    cin >> sex;
}

void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex:" << sex << endl;
}

void Student::xstudent(int num, string name, char sex)
{
    num = num;
    name = name;
    sex = sex;
}