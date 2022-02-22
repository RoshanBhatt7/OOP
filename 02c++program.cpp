#include <iostream>
#include <stdlib.h>
using namespace std;

class item
{
    static int cout;
    float price;

public:
    void get_data(float a)
    {
        price = a;
        count++;
    }
    void show_count()
    {

        cout << "Count= \t " << count << end;
    }
    int item ::count;
    {
        item i1, i2.i3;
        system("cls");
        i1.show_count();
        i2.show_count();
        i3.show_count();

        i1.get_data();
        i2.get_data() : i3.get_data();

        cout << "Ater reading data" << end;

        i1.show_count();
        i2.show_count();
        i3.show_count();
    }
}
