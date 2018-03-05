#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <ctype>
#include "../include/BigInteger.h"

BigInteger::BigInteger()
{
    number = "0";
    sign = true;
}

BigInteger::BigInteger(string a)
{
    isdigit(a[0]) ? set_number(a) : set_number(a.substr(1));
    sign = (a[0] != '-');
}

BigInteger::BigInteger(int s)
{
    set_number(s);
    if (s / abs(s) < 0)
        set_sign(false);
    else
        set_sign(true);
}

void BigInteger::set_number(int s)
{
    // s can only be positive number 
    stringstream ss;
    ss << s;
    ss >> number;
}

void BigInteger::set_number(string s)
{
    // s can only be positive number
    number = s;
}

void BigInteger::set_sign(bool s)
{
    // true for positive
    // false for negative 
    sign = s;
}

bool BigInteger::get_sign()
{
    return sign;
}

string BigInteger::get_number()
{
    return number;
}

bool BigInteger::equal(BigInteger a, BigInteger b)
{
    string n1 = a.get_number();
    string n2 = b.get_number();
    bool sign1 = a.get_sign();
    bool sign2 = b.get_sign();

    if (n1 == n2 && sign1 == sign2) return true;
    else return false;
}

bool BigInteger::less(BigInteger a, BigInteger b)
{
    // if a > b return false;
    // else return true;
    bool res;
    string n1 = a.get_number();
    string n2 = b.get_number();

    bool sign1 = a.get_sign();
    bool sign2 = b.get_sign();

    if (sign1 == sign2)
    {
        if ()
        
    }
    else
    {
        if (sign1 == true) res = false;
        else res = true;
    }
    return res;
}

bool BigInteger::greater(BigInteger a, BigInteger b)
{
 
}


string BigInteger::add(string a, string b)
{
    string res;
    if (a.length() > b.length()) res = a;
    else res = b;
    for ()
    {

    } // end of for
}

string BigInteger::substract(string a, string b)
{
}

string BigInteger::multiply(string a, string b)
{
}

pair<string, long long> BigInteger::divide(string a, string b)
{
}

string BigInteger::to_string(long long a)
{

}

long long BigInteger::to_int(string a)
{

}