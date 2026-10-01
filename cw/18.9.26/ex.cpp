#include<iostream>
#include <cstring>
using namespace std;

/*
pilleros of oops

encapsulation
abstraction
inheritances
polymorphism
*/

/*
enc
  merging 
  combining the variable and the function in single entity or unit

  how to achieve
     use class

*/

#if 0
/*
encapsulation

*/
class employee{
  int id;
  public:
    int get_id() //1
    {
      return id;
    }
    void set_id(int id)//2
    {
      this->id =id;
    }

};
int main(){
  employee emp;
  emp.set_id(10);  //call 2nd fun
  cout << emp.get_id()<<endl;//call 2nd fun
  

  
  return 0;
}
#endif

#if 0
/*
abstraction

    hiding the unnecessary details
    show only relevent data

    focus on essential
*/


class employee{
  private:
    int id;
    char *name;
  public:
    employee(int num,const char *str){//0
      cout<<"call construct\n";
      id = num;
      name= new char[10];
      strcpy(name,str);
    }
    ~employee(){//1
      delete name;
    }
    int get_id(){//2
      return id;
    }
    char *get_name(){//2
      return name;
    }


};


int main(){
  employee e1(11,(char * )"gowtham");  //call the 0th function then asign

  cout<<"id : "<<e1.get_id() <<endl ;   //11    call get id function then print value
   cout<<"name : "<<e1.get_name()<<endl;  //gowtham   //call the get_name function print name

  return 0;
}

#endif
#if 0
/*
inheritance
  create a new class by taking property form existing call or another class
      tha class ara called child class
  the existing class is know as the parrentclass or derived class
  child can have a extra features
*/
class parent{
  int id;
  float fl;
public:
  parent(){
    id =123;
    fl = 1.54;
  }
  void display(){
    cout<< id <<","<<fl <<endl;                                
  }                                                                                                                             //   |                                                             //    |
};                                                            
class child:public parent{ //child class can access parent variable 

};

int main(){
  parent p;
  cout<<sizeof(p) <<endl;
  child c;
  cout<<sizeof(c)<<endl;

  return 0;
}

#endif

#if 0

/*
inheritance protected
only protected can access in the cild class
*/
class parent{
  int id;
  //private have not access the child class 
 protected: //can be access with in the child class also
  float fl;
public:
  parent(){
    id =123;
    fl = 1.54;
  }
  void display(){
    cout<< id <<","<<fl <<endl;                                
  }                                                                                                                             //   |                                                             //    |
};                                                            
class child:public parent{ //child class can access parent variable 
    public:
    void ch(){
      // cout<< id << endl;
      cout<< fl << endl;
      
    }
};

int main(){
  parent p;
  cout<<sizeof(p) <<endl;
  child c;
  c.ch();
 // cout<<sizeof(c)<<endl;

  return 0;
}


#endif

#if 0
/*
constructor execution in inheritances
*/
class parent{
  int id;
  float fl;
  
  public:
  parent(){
    cout << "parent call\n";

  }
    
    //   |                                                             //    |
};                                                            
class child:public parent{ //child class can access parent variable 
  public:
  child(){
    cout<<"call child\n";
  }
};

int main(){
  parent p; //call only parent
  cout<<endl;
  child c;//call parent and then class the child

 // cout<<sizeof(c)<<endl;

  return 0;
}


#endif

#if 0
/*
destructor cal claa by reverse 
1st call the child then call destructor
*/
class parent{
  int id;
  float fl;
  
  public:
  parent(){
    cout << "parent call\n";

  }
   ~parent(){
    cout << "destructor parent call\n";

  }
    
    //   |                                                             //    |
};                                                            
class child:public parent{ //child class can access parent variable 
  public:
  child(){
    cout<<"call child\n";
  }
   ~child(){
    cout<<"destructor call child\n";
  }
};

int main(){
  parent p; //call only parent
  cout<<endl;
  child c;//call parent and then class the child

 // cout<<sizeof(c)<<endl;

  return 0;
}
/*
parent call

parent call
call child
destructor call child
destructor parent call
destructor parent call
*/
#endif

#if 1
/*

*/

int main(){
  
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
#if 1

#endif

#if 1

#endif