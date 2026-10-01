#include<iostream>
#include <cstring>
#include<stdlib.h>
using namespace std;

#if 0
class employee{

  public:

  int id;
  string name;
  string address;

  void get_id(){
    cout << "Enter id : ";   //printf in cpp
    cin >> id;               //scanf in cpp
  }
  void get_name(){
     cout << "Enter name: ";
    cin >> name;
  }
  void get_address(){
     cout << "Enter address : ";
    cin >> address;
  }
  void print_data(){
    cout<< "Id : " << id << endl;
    cout << "name : "<< name << endl ;
    cout << "address: "<< address << endl; 
  }
};

int main(){
  employee emp;
  emp.get_id();
  emp.get_name();
  emp.get_address();
  emp.print_data();

  return 0;
}

#endif
#if 0
//inline function
/*
it like a macro
function defination replaced during compilation

*/
class employee{

  public:

  int id;
  string name;
  string address;

  void get_data(){
    cout << "Enter id : ";   //printf in cpp
    cin >> id;               //scanf in cpp
 
     cout << "Enter name: ";
    cin >> name;
     cout << "Enter address : ";
    cin >> address;
  }
  void print_data(){
    cout<< "Id : " << id << endl;
    cout << "name : "<< name << endl ;
    cout << "address: "<< address << endl; 
  }
};

int main(){
  employee emp;
  emp.get_data();
   emp.print_data();

  return 0;
}

#endif

#if 0
//inline function
/*
it like a macro
function defination replaced during compilation

*/
class employee{

  public:

  int id;
  string name;
  string address;

  void get_data(){
    cout << "Enter id : ";   //printf in cpp
    cin >> id;               //scanf in cpp
 
     cout << "Enter name: ";
    cin >> name;
     cout << "Enter address : ";
    cin >> address;
  }
  void print_data();
 
};
 void employee::print_data(){
    cout<< "Id : " << id << endl;
    cout << "name : "<< name << endl ;
    cout << "address: "<< address << endl; 
  }
int main(){
  employee emp;
  emp.get_data();
   emp.print_data();

  return 0;
}

#endif


#if 0
//inline function
/*
it like a macro
function defination replaced during compilation

*/
class employee{

  public:

  int id;
  string name;
  string address;

  void get_data(){
    cout << "Enter id : ";   //printf in cpp
    cin >> id;               //scanf in cpp
 
     cout << "Enter name: ";
    cin >> name;
     cout << "Enter address : ";
    cin >> address;
  }
  void print_data();
 
};
//inlint is a requist to compiler
// recursive functipn 
// contain static varaible 
//contain jump statement  switch,continue ,brake,goto ,loop
//return type other thant the void

 inline void employee::print_data(){ 
   //request the complier replace the defination of the
    cout<< "Id : " << id << endl;
    cout << "name : "<< name << endl ;
    cout << "address: "<< address << endl; 
  }
int main(){
  employee emp;
  emp.get_data();
   emp.print_data();

  return 0;
}

#endif


#if 0
/*
data hiding is posible in sccess modifier 
   1.private 
        by default access for class
        restricted class only
        those member only with in the class
        not allow to be access outside the class

   2.public
        by default struct member are public
        any one can be accssed all the member even by other class to

   
   3.protected
    similarto privat
    child can be accessed 
    private can't access in chile class

    
*/


#endif



#if 0
struct sEmployee{       //public 
  int id;
  string name,address;
};
class cEmployee{         //private
  int id;
  string name,address;
};
int main(){
  sEmployee emp1;
  cEmployee emp2;
  emp1.name = "gowtham";
  // emp2.name = "gowtham"; error 

  /*
  ex1.cpp:217:8: error: ‘std::string cEmployee::name’ is private within this context
  217 |   emp2.name = "gowtham";
      |        ^~~~
ex1.cpp:211:10: note: declared private here
  211 |   string name,address;
  */
  return 0;
}

#endif


#if 0
struct sEmployee{       //public 
  int id;
private:
  string name,address;
};
class cEmployee{         //private
  int id;
public:
  string name,address;
};
int main(){
  sEmployee emp1;
  cEmployee emp2;
  // emp1.name = "gowtham";
 emp2.name = "gowtham"; //error 
  return 0;
}


#endif

#if 0
struct sEmployee{       //public 
  int id;
  string name,address;
};
class cEmployee{         //private
  int id;
  string name,address;
};
int main()
{
  sEmployee e1;
  cEmployee e2;

  cout <<"Size of e1: " << sizeof(e1) <<endl;  // size of e1 72
  cout <<"size of e2: " << sizeof(e2)<<endl;    //  size of  e2 72
  cout<<"sizeof string : "<< sizeof(string)<<endl; //size of 32
    return 0;
}

#endif

#if 0
class employee{
  public :
  int id;
char *name;

employee () {
  id = 123456789;
  name =(char *)malloc(10);
}

};
int main(){
  employee emp1;  //construct call first 
  cout << "id: " << emp1.id << endl;
  strcpy(emp1.name,"gowtham");
  cout << "name: "<< emp1.name <<endl;
}

#endif


#if 0
class employee{
  public :
  int id;
char *name;

employee (int num,const char *str) {
  id = num;
  name =(char *)malloc(10);
  strcpy(name,str);
}

};
int main(){
  employee emp1 (1234,"gowtham");  //construct call first 
  cout << "id: " << emp1.id << endl;
  // strcpy(emp1.name,"gowtham");
  cout << "name: "<< emp1.name <<endl;


  free(emp1.name);
}
#endif


#if 0
class employee{
  public :
  int id;
char *name;

//work like a pass by reference
employee (int id,char *name) {
  id = id;
  name =(char *)malloc(10);
  strcpy(name,name);
}

};
int main(){
  employee emp1 (1234, (char *)"gowtham");  //construct call first 
  cout << "id: " << emp1.id << endl;
  // strcpy(emp1.name,"gowtham");
  cout << "name: "<< emp1.name <<endl;


  // free(emp1.name);
}
#endif

#if 1
class employee{
  public :
  int id;
char *name;

//work like a pass by reference
employee (int id,char *name) {
  //this to access name of parameter name and class names are same touse thi to access the class variable use thisx
  this ->  id = id;
  this ->name =(char *)malloc(10);
  strcpy(this->name,name);
}

};
int main(){
  employee emp1 (1234, (char *)"gowtham");  //construct call first 
  cout << "id: " << emp1.id << endl;
  // strcpy(emp1.name,"gowtham");
  cout << "name: "<< emp1.name <<endl;


  // free(emp1.name);
}
#endif