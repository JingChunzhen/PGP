#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void test_sstream()
{
    int a = -2351;
    int b = abs(a);
    string res;
    stringstream ss;
    ss << b;
    ss >> res;
    cout << res << endl; 
    cout << res[0] << endl;   

    string c = "abcdefghijklmn";
    string res2 ;
    stringstream ss2;
    ss2 << c;
    ss2 >> res2;
    cout << res2 << endl;
}


void test_substr()
{
    string a = "abcdefghijklmnopqrstuvwxyz";
    string b = a.substr(1);
    b = a.substr(1, 10);
    cout << b << endl;
}

void test_compare()
{
    
}

int main()
{
    test_sstream();
    //test_substr();
    return 0;
}