#include <iostream>
#include <string>
using namespace std;

class DOB
{
    int day;
    int year;
    int month;

public :

    class invalid
    {
    };

    void setday(int d)
    {
        if (d<0 || d>31)
		{
            throw invalid();
        }
        else
            day = d;
    }

    void setmonth(int m)
    {
        if(m<0 || m>12)
        {
            throw invalid();
        }

        else
            month = m;
    }

    void setyear(int y)
    {
        if(y<0 || y>2022)
        {
            throw invalid();
        }
        else
            year = y;
    }

    void print()
    {
		string m;
		for(int i=1; i<=12; i++)
		{
			if(month == 1)
				m = "January";
			else if(month == 2)
				m = "February";
			else if(month == 3)
				m = "March";
			else if(month == 4)
				m = "April";
			else if(month == 5)
				m = "May";
			else if(month == 6)
				m = "June";
			else if(month == 7)
				m = "July";
			else if(month == 8)
				m = "August";
			else if(month == 9)
				m = "September";
			else if(month == 10)
				m = "October";
			else if(month == 11)
				m = "November";
			else if(month == 12)
				m = "December";
		}

        cout << "The DOB is : " << m << " " << day << ", " << year << "." << endl;
    }
};

int main()
{
    int mo;
    int ye;
    int da;
    int check=0;

    cout << "Enter month : ";
    cin >> mo;
    cout << "Enter day : ";
    cin >> da;
    cout << "Enter year : ";
    cin >> ye;

    DOB d;

    try
	{
        d.setday(da);
    }

    catch(DOB::invalid)
    {
        cout << "Value is invalid for day";
        check = 1;
    }

    try
	{
        d.setmonth(mo);
    }

    catch(DOB::invalid)
    {
        cout << "Value is invalid for month";
        check = 1;
    }

    try
	{
        d.setyear(ye);
    }

    catch(DOB::invalid)
    {
        cout << "Value is invalid for year ";
        check=1;
    }
    cout << endl;

    if(check == 0)
    {
        d.print();
    }

	system("pause");
    return 0;
}