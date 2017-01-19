#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

class String
{
public:
    String(const char* value);
    String(const String& other);
    ~String();
private:
    //Invariant:
    // m_text points to an array of chars
    //m_len >= 0
    //m_len == strlen(m_text)
    char* m_text;
    int m_len;

};

String::String(const char* value = "")
{
    m_len = strlen(value);
    m_text = new char[m_len + 1];
    strcpy(m_text, value);
}

String::String(const String& other)
{
    m_len = other.m_len;
    m_text = new char[m_len + 1];
    strcpy(m_text, other.m_text);
}

String::~String()
{
    delete [] m_text;
}

void f()
{
    string s("Hello World");
    cout << s;
}

int main()
{
    char buffer[1000];
    cin.getline(buffer, 1000);  //User types Wow
    string x(buffer);
}
