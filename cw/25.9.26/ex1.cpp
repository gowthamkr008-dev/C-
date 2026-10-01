#include<iostream>
using namespace std;
#if 1

#include "emertxe.h"

int main()
{
        Emertxe *e = new Emertxe(123, "gowtham", "tamilnadu");
        Mentor * m =new Mentor(033, "vishwa", "Bangalore", "Linux");
        Candidate * c  = new Candidate (003, "gowtham", "salem", "Embedded", 2022);
        cout << "E -> Data : \n";
        e->display_profile();
        cout << endl;
        cout << "M -> Data : \n";
        m->display_profile();
        cout << endl;
        cout << "C -> Data :\n";
        c->display_profile();
        cout << endl;
        return 0;
}
#endif


#if 1


#endif

#if 1


#endif

#if 1


#endif