#include <iostream>
using namespace std;

#if 0
int main()
{
int x = 10;
cout << x << endl;
double x = 15.5; // Not allowed to have the same name in a local space!
cout << x << endl;
return 0;
}

#endif

#if 0
int x = 10;
int main()
{
  double x = 15.5; // Not allowed to have the same name in a local space!
  cout << x << endl;
  return 0;
}

#endif

#if 0
/* i need a output to access the integer 10 to use name space*/
namespace global{
int x = 10;
}
int main()
{
  double x = 15.5; // Not allowed to have the same name in a local space!
  cout << x << endl;
    cout << global:: x << endl; /* access the integer x */
  return 0;
}

#endif


#if 0
namespace global{
int x = 10;
}
namespace global1{
double x = 10.55;
}
int main()
{
  double x = 15.5; // Not allowed to have the same name in a local space!
  cout << x << endl;
    cout << global:: x << endl; /* access the integer x */
    cout << global1:: x << endl;

    return 0;
}
#endif

#if 0
namespace first
{
int x = 10;
}
namespace second
{
double x = 12.120;
}
int main()
{
using namespace second;//access the second name space
cout << x << endl;
return 0;
}

#endif
#if 1

namespace myspace {
  class emp{
    public:
      int id;
      string name;
  };
}
class emp{
    public:
      int id;
      string name;
  };

  int main(){
    myspace::emp e1;
    emp e2;
    e1.name = "tingu";
    e2.name = "pingu";

    cout <<e1.name <<endl;
        cout <<e2.name <<endl;



    return 0;
  }
#endif
#if 1

#endif
#if 1

#endif
#if 1

#endif
#if 1

#endif