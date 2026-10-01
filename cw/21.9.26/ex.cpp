#include<iostream>
using namespace std;

#if 0


/*
inheritances - types

single
multilevel
multiple
hierchical
hybrid   

*/
class a{
  public:
    a(){
      cout<<"Call A\n";
    }

};
class b : public a{
  public:
    b(){
      cout << "call B\n";
    }

};
class c : public b{
 
  public:
    c(){
      cout << "call c\n";
    }

};

int main(){
  a A;
  b B;
  c C;



  return 0;
}
/*
Call A
Call A
call B
Call A
call B
call c

*/

#endif

#if 1

#include "emertxe.h"

int main()
{
        Emertxe e(123, "gowtham", "tamilnadu");
        Mentor m(033, "vishwa", "Bangalore", "Linux");
        Candidate c (003, "gowtham", "salem", "Embedded", 2022);
        cout << "E -> Data : \n";
        e.display_profile();
        cout << endl;
        cout << "M -> Data : \n";
        m.display_profile();
        cout << endl;
        cout << "C -> Data :\n";
        c.display_profile();
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