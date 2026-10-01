#include <iostream>
using namespace std;
#if 0

// Function Overloading
int add(int n1, int n2)
{
return n1 + n2;
}
double add(double n1, double n2)
{
return n1 + n2;
}
string add(string s1, string s2)
{
// Operator Overloading
return s1 + s2;
}

int main(){
  cout << add(10,5) << endl;
  cout << add(3.5,6.12) << endl;

  cout << add("hell","o") <<endl;

    return 0;
}
/*
15
9.62
hello
*/
#endif

#if 0

// Function Overloading
int add(int n1, int n2)
{
return n1 + n2;
}
double add(double n1, double n2)
{
return n1 + n2;
}
string add(string s1, string s2)
{
// Operator Overloading
return s1 + s2;
}
double add(int n1, double n2)
{
return n1 + n2;
}
int add(double n1, int n2)
{
return n1 + n2;
}
int main(){
  cout << add(10,5) << endl;
  cout << add(10,5.5) << endl;
  cout << add(5.125,10) << endl;
  cout << add(3.5,6.12) << endl;
  cout << add("hell","o") <<endl;

    return 0;
}


#endif
/*
function overlodaing is changing parameter 
no of arguments
type of arg
sequence of arg
*/
#if 0
// function overloading with class

class FunctionOverloading
{ 
public: 
void calculation(int a, int b, int k) 
/*addition of two numbers*/
{ 
cout<< "The sum is = " << a + b + k << endl; 
} 
void calculation(double c, double d, double e)
/*Multiplication of two numbers*/
{ 
cout<< "Multiplication is = " << c * d * e << endl; 
} 
int calculation(int f, int g) 
/*Division of two numbers*/
{ 
return (f / g); 
} 
}; 

int main(){
  FunctionOverloading obj1; 
  obj1.calculation(5, 6, 7); 
  obj1.calculation(2.34, 4.54, 6.72);
  cout<< "The division is = " << obj1.calculation(10, 5) << endl;
}
/*
The sum is = 18
Multiplication is = 71.3906
The division is = 25
*/

#endif

#if 0
/* operator overloading  */
class Distance
{
  int feet ,inches;
  public: 
    Distance(int  f= 0,int i = 0) : feet (f),inches(i)
    {

    }
    void display(){
      cout<< "F : "<<feet;
      cout << ", I : " << inches <<endl;
    }
    void operator -(){
      feet = -feet;
      inches = -inches;
    }

};
int main()
{
Distance D1(11,10),D2(-5,11);
D1.display();
-D1;// apply negation
D1.display();
D2.display();
-D2;
D2.display();
return 0;
}



#endif

#if 0
/*operator overaloading*/
/* pre inc post inc */

class Distance
{
  int feet ,inches;
  public: 
    Distance(int  f= 0,int i = 0) : feet (f),inches(i)
    {

    }
    void display(){
      cout<< "F : "<<feet;
      cout << ", I : " << inches <<endl;
    }
    /* post increment*/
    void operator ++(){
      feet +=2;
      inches += 2;
    }

    /* pre increment*/
    void operator ++(int){
      feet +=2;
      inches += 2;
    }

};
int main()
{
Distance D1(11,10),D2(-5,11);
D1.display();
++D1;// apply negation
D1.display();
D2.display();
D2++;
D2.display();
return 0;
}



#endif

#if 0
/* binary operator overloading */

class Binary
{
private:
int i;
int i1;
public:
// required constructors
Binary(int f=0,int i=0):i(f),i1(i)
{
} 
void display()
{
cout<<" i: " <<i << " i1: "<<i1 <<endl;
}
void operator +(int a)
{
i+=a;
i1+=a;
}void operator +(Binary b)
{
i+=b.i;
i1+=b.i1;
}
};
int main()
{
Binary B1(11, 10),B2(-5,11);
int a=10;
B1+a;           
B1.display();
B1+B2;      
B1.display();
B2.display();
return 0;
}


/*
i: 21 i1: 20
 i: 16 i1: 31
 i: -5 i1: 11
*/
#endif

#if 0
/* overriding */
class BaseClass
{ 
public: 
void disp()
{ 
cout<<"Function of Parent Class" <<endl; 
} 
}; 
class DerivedClass: public BaseClass
{ 
public: 
void disp() 
{ 
cout<<"Function of Child Class"<<endl; 
} 
};
int main() 
{ 
DerivedClass obj; 
obj.disp(); 
return 0; 
}


#endif

#if 1
class BaseClass
{ 
public: 
void disp()
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
  /* call the parent type class */
BaseClass *obj= new DerivedClass(); 
obj->disp(); 
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
#if 1

#endif
#if 1

#endif
#if 1

#endif
#if 1

#endif
#if 1

#endif