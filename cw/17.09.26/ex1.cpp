#include<iostream>
#include <cstring>
#include<stdlib.h>
using namespace std;
/*
   copy constryctor
  
  */
#if 0

class employee{
  public :
  int id;
  char*name;
  employee(int x,char *str){
    cout << "constructor call\n";
    id = x;
    name = (char *)malloc(10);
    strcpy(name, str);
  }
};
int main(){
    employee emp(9876,(char *)"gowtham");
    employee emp1 =emp;
    cout << "id : " << emp.id << endl;
    cout << "name : " << emp.name << endl;
    cout << "id : " << emp1.id << endl;
     cout << "name : " << emp1.name << endl;
     



  return 0;


}
#endif


#if 0

class employee{
  public :
  int id;
  char*name;
  employee(int x,char *str){
    cout << "constructor call\n";
    id = x;
    name = (char *)malloc(10);
    strcpy(name, str);
  }

  ~employee(){
    cout  <<  "call distructor\n";
    free(name);

  }
};
int main(){
    employee emp(9876,(char *)"gowtham");
    employee emp1 =emp;
    cout << "id : " << emp.id << endl;
    cout << "name : " << emp.name << endl;
    cout << "id : " << emp1.id << endl;
     cout << "name : " << emp1.name << endl;
     
strcpy(emp1.name,"gowtham");

  cout << "id : " << emp1.id << endl;
     cout << "name : " << emp1.name << endl;


  return 0;


}
#endif

#if 0
// own function for copy constructor
//deep copy
//
class employee{
  public :
  int id;
  char*name;
  employee(int x,char *str){
    cout << "constructor call\n";
    id = x;
    name = (char *)malloc(10);
    strcpy(name, str);
  }

  // constant reference varaible & e
  employee(const employee & e){
    cout << "Copy data\n";
    id = e.id;
    name = (char * )malloc(10);
    strcpy(name,e.name);
  }

  ~employee(){
    cout  <<  "call distructor\n";
    free(name);

  }
};
int main(){
    employee emp(9876,(char *)"gowtham");

    employee emp1 =emp;//call copy constructor
    
    cout << "id : " << emp.id << endl;
    cout << "name : " << emp.name << endl;
    cout << "id : " << emp1.id << endl;
     cout << "name : " << emp1.name << endl;
     
strcpy(emp1.name,"gowthamano");

  cout << "id : " << emp1.id << endl;
     cout << "name : " << emp1.name << endl;


  return 0;


}
#endif

#if 0
/*
constructor overloading
*/
class constructor{
  public :
  float area;
  constructor(){
    cout << "zero arguments\n";
    area =00;
  }
  constructor(int x,int y){
    cout<<"two arguments\n";
  }
};

int main(){
  constructor c1;
  constructor c2(10,20);



  return 0;
}
/*
zero arguments
two arguments
*/
#endif

#if 0

class constructor{
  public :
  float area;
  constructor(){
    cout << "zero arguments\n";
  }
  ~constructor(){
    cout<<"call destruct\n";
  }
};
void display(constructor c){
  cout << "gowtham\n";
}
int main(){
  constructor c1,c2;

  display(c2);



  return 0;
}

/*
zero arguments
zero arguments
gowtham
call destruct
call destruct
call destruct
*/
#endif

#if 0

class constructor{
  public :
  float area;
  constructor(){
    cout << "call constructor\n";
  }
   constructor(const constructor & c){
    cout << "copy construct call\n";
  }
  ~constructor(){
    cout<<"call destruct\n";
  }
};
void display(constructor c){
  cout << "gowtham\n";
}
int main(){
  constructor c1,c2;

  display(c2);



  return 0;
}
/*
call constructor
call constructor
copy construct call
gowtham
call destruct
call destruct
call destruct
*/
#endif

#if 0
class con{
  public:
    int id;
    char *name;
    con(int i){
      cout<<"call 1 arg\n";
      id = i;
    }
    con(int i,char *s){
            cout<<"call 2 arg\n";
      id =i;
      name = (char *)malloc(10);
      strcpy(name,s);
    }

    ~con(void){
      cout << "distructor call\n";
      free(name);
    
    }
};
int main(){
  con c(10);//try to clear the free name lead to segmentation fault
  con c2(20,(char *)"gowtham");  //clear the properly



  return 0;
}
#endif

#if 1
/*
new and delet
allocating and free the memory
memory store in heap
same like malloc calloc

no need of size of operator
create arr    new int[91];

using new can do initialization
use inmalloc in cpp use typecasting compulsary

malloc is function 
new is a operator

initialization 
int *p = new int[10];//array
int *ptr = new int(10); /a number

delet p
delet ptr
*/



#endif
#if 1
//dynamic memory allocation

// using new and delet

class employee{
  public :
  int id;
  char*name;
  employee(int x,char *str){
    cout << "constructor call\n";
    id = x;
    name =  new char[10];
            //only for cpp
    strcpy(name, str);
  }

  // constant reference varaible & e
  employee(const employee & e){
    cout << "Copy data\n";
    id = e.id;
    name = new char[10];
    strcpy(name,e.name);
  }

  ~employee(){
    cout  <<  "call distructor\n";
    delete name;

  }
};
int main(){
    employee emp(9876,(char *)"gowtham");

    employee emp1 =emp;//call copy constructor
    
    cout << "id : " << emp.id << endl;
    cout << "name : " << emp.name << endl;
    cout << "id : " << emp1.id << endl;
     cout << "name : " << emp1.name << endl;
     
strcpy(emp1.name,"gowthamano");

  cout << "id : " << emp1.id << endl;
     cout << "name : " << emp1.name << endl;


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