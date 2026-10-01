#include<iostream>

using namespace std;

#if 0
/* function template */
template <typename T> //it is like a user define datatype

T Max(T a,T b){
  return a > b ? a : b;
}
int main(){

  cout << Max(10,20)<<endl;
  cout << Max(1.123,2.543)<<endl;
  cout << Max(3.65,5.123)<<endl;
  cout << Max('A','B')<<endl;




  return 0;
}

#endif


#if 0

/* class template*/

template <typename T> 
class Mytemp{
  T element;
  public:
  Mytemp(T val){
    element = val;
  }
  T divideby2(){
    return element/2;
  }
};

int main(){
  Mytemp<int>m(10);
   Mytemp<float>m1(10.5);

  cout<< m.divideby2()<<endl;
    cout<< m1.divideby2()<<endl;
/*
5
5.25
*/


  return 0;
}


#endif


#if 0

/* Exception Handling*/



int main()
{
  int a, b;
  cout<< "Enter two values: ";
  cin>> a >> b;
 
  /* try this block */
  try
  {
    /* if b == 0 execute the else block*/
    if (b != 0) {
      cout << "Res: " << a / b << endl;
    }
    else {
      /* throw the error call catch */
      throw b;
    }
  }/* catch the error */
  catch(int x)
  {
    cout<< "Caught DIVIDE_BY_ZERO ERROR" << "b: "<< x << endl;

  }

  return 0;
}




#endif


#if 0
/* ambiguous in multiple inheritancs */
class A{
  public:
  int num;
};
class B : public A
{

};

class C :public B{

};
class D: public B,public C{

};

int main(){
  D obj;
  obj.num = 10;
  cout << obj.num <<endl;

  return 0;
}
/* 
ex.cpp:115:7: warning: direct base ‘B’ inaccessible in ‘D’ due to ambiguity [-Winaccessible-base]
  115 | class D: public B,public C{
      |       ^
ex.cpp: In function ‘int main()’:
ex.cpp:121:7: error: request for member ‘num’ is ambiguous
  121 |   obj.num = 10;
      |       ^~~
ex.cpp:105:7: note: candidates are: ‘int A::num’
  105 |   int num;
      |       ^~~
ex.cpp:105:7: note:                 ‘int A::num’
ex.cpp:122:15: error: request for member ‘num’ is ambiguous
  122 |   cout << obj.num <<endl;
      |               ^~~
ex.cpp:105:7: note: candidates are: ‘int A::num’
  105 |   int num;
      |       ^~~
ex.cpp:105:7: note:                 ‘int A::num’
*/



#endif

#if 0
/* use socope resolution*/
class A{
  public:
  int num;
};
class B :public A{

};

class C :public A{

};
class D: public B,public C{

};

int main(){
  D obj;

  obj.B::num = 10;
  cout << obj.B::num <<endl;

  obj.C::num = 158;
  cout << obj.C::num <<endl;

  return 0;
}

#endif


#if 0
/* use the virtual class*/
class A{
  public:
  int num;
};
class B : virtual public A{/* connsider only one num is present */

};

class C : virtual public A{

};
class D: public B,public C{

};

int main(){
  D obj;

  obj.B::num = 10;
  cout << obj.num <<endl;

  obj.num = 158;
  cout << obj.num <<endl;

  return 0;
}


#endif


#if 0
 /* unique pointer or smart pointer */
#include <memory>

class polygon{
  int width,height;
  public:
  polygon(int a,int b){
    cout<<"call constructor\n";
    height = b;
    width =a;
  }
  void display(){
    cout<<width <<","<<height<<endl;
  }
  ~polygon(){
    cout<<"call destructor \n";
  }


};
int main(){
  
  unique_ptr<polygon> p =make_unique<polygon>(4,20);
  p->display();

  return 0;
}

/*
call constructor
4,20
call destructor 
*/

#endif


#if 0
/* is all inbuilt string member function */
#include <cstdio>
using namespace std;
int main()
{
  string s, s1;
  s = "HELLO";
  s1= "HELLO";
  if(s.compare(s1) == 0)
  cout << s << " is equal to " << s1 << endl;
  else
  cout << s << " is not equal to " << s1 << endl;
  
  s.append(" WORLD!");
  
  cout << s << endl;
  printf("%s\n", s.c_str());
  if(s.compare(s1) == 0)
  cout << s << " is equal to " << s1 << endl;
  else
  cout << s << " is not equal to " << s1 << endl;
  return 0;
}


#endif

#if 1
#include<cstdio>
class Student {
  int id;
  string name;
  Student(int a,string name){
    id = a;
    copy(name,a)
  }

};
int main(){

}

#endif