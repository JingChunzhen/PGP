#include <string>

#define MAX 1000;

using namespace std;

class BigInteger
{
private:
    string number;
    bool sign;
public:
    BigInteger();
    BigInteger(string s);
    BigInteger(string s, bool sign);
    BigInteger(int s);

    void set_number(int s);
    void set_number(string s);
    // function over load
    void set_sign(bool s);

    bool get_sign();
    string get_number(); // const string& get_number();

    void operator = (BigInteger b);
    bool operator == (BigInteger b);  
    bool operator != (BigInteger b);
    bool operator <= (BigInteger b);
    bool operator >= (BigInteger b);
    bool operator < (BigInteger b);
    bool operator > (BigInteger b);

    BigInteger& operator ++ ();
    BigInteger operator ++ (int);  
    BigInteger operator + (BigInteger b);
    BigInteger operator - (BigInteger b);
    BigInteger operator * (BigInteger b);
    BigInteger operator / (BigInteger b);
    BigInteger operator % (BigInteger b);

    BigInteger operator += (BigInteger b); //TODO BigInteger&
    BigInteger operator -= (BigInteger b);
    BigInteger operator *= (BigInteger b);
    BigInteger operator /= (BigInteger b);
    BigInteger operator %= (BigInteger b);

    BigInteger operator [] (int n); // TODO
    BigInteger operator -(); 
    operator string(); // TODO

    // TODO BigInteger operator ++(int) OR BigInteger& operator ++(int);?

private:
    bool equal(BigInteger a, BigInteger b);
    bool less(BigInteger a, BigInteger b);
    bool greater(BigInteger a, BigInteger b);
    string add(string a, string b);
    string substract(string a, string b);
    string multiply(string a, string b);
    pair<string, long long> divide(string a, string b);
    string to_string(long long a);
    long long to_int(string a);
};