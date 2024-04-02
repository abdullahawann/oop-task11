#include<iostream>
using namespace std;

template <class t>
class container
{
    t data;

public:
    container(t d)
    {
        data = d;
    }

    void  increase()
    {
        data = data + 5;
        cout << "The increased data is : " << data << endl;
    }
};

template<>
class container<char>
{
    char character;
public:

    container(char c)
    {
        character = c;
    }

    void increase1()
    {
        character = character - 32;
        cout << "The converted character is : " << character << endl;
    }
};

int main()
{
    int data;
	char j;

    cout << "Enter data : ";
    cin >> data;
    cout << "Enter character : ";
    cin >> j;

    container<int> da(data);
    da.increase();
    container<char> c(j);
    c.increase1();

	system("pause");
    return 0;
}