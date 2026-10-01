#include<iostream>

using namespace std;


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


#if 0
/* verital function call */
class BaseClass
{ 
public: 
virtual void disp()
{ 
cout<<"Function of Parent Class"; 
} 
}; 
class DerivedClass: public BaseClass
{ 
public: 
void disp() 
{ 
cout<<"Function of Child Class"; 
} 
}; 
int main() 
{ 
BaseClass*obj= new DerivedClass(); 
obj->disp(); 
return 0; 
}

#endif
#if 0
class Polygon 
{
protected:
int width, height;
string shape_name;
public:
Polygon() { }
Polygon(int a, int b, string name) : width(a), height(b), shape_name(name) { }
string get_name(void) {   
return shape_name;
}   
// A pure virtual functions
virtual int get_area(void) = 0;
   
};
class Rectangle: public Polygon
{
        public:
        Rectangle(int a, int b, string name) : Polygon(a, b, name) { } 
        int get_area(void){   
                return width * height; 
}   
};
class Triangle: public Polygon
{
        public:
        Triangle(int a, int b, string name) : Polygon(a, b, name) { } 
        int get_area(void)
        {
                return width * height / 2;
        }
};
int main(){
        Rectangle rect (4,5,"rectangle");
        Triangle trgl (4,5,"Triangle");
        Polygon *shape[] = {&rect,&trgl};
        for(int i = 0;i < 2;i++){
                cout << shape[i]->get_area()<<endl;
        }
}
#endif