#include<iostream>
using namespace std;

#if 0
class polygon{
  int weight,height;
  public:
    polygon(int a,int b){
      weight =a;
      height =b;
    }
    void display(){
      cout << weight << "," << height <<endl;
    }
};

int main(){
  polygon p =polygon(10,20);
  // polygon p(4,8);
  p.display();




  return 0;

}

#endif


#if 0
class polygon{
  int weight,height;
  public:
    polygon(int a,int b){
      weight =a;
      height =b;
    }
    void display(){
      cout << weight << "," << height <<endl;
    }

    ~polygon(){
      cout << "calling destructor\n";
    }
};

int main(){
  polygon *p = new polygon(10,20);
  // polygon p(4,8);
  p->display();

 delete p;


  return 0;

}

/*
in the new and delet automatically call the destructor when we asign use of new dynamic memory allocation
automatically call the destructor when try to free
*/

#endif

#if 0

#include<stdlib.h>
class polygon{
  int weight,height;
  public:
    polygon(int a,int b){
      weight =a;
      height =b;
    }
    void display(){
      cout << weight << "," << height <<endl;
    }

    ~polygon(){
      cout << "calling destructor\n";
    }
};

int main(){
  polygon *p = (polygon *)malloc(sizeof(polygon) );
  // polygon p(4,8);
  p->display();

//  delete p;         //with call distrucor when free memory
free(p);             //without distructor call when free memory

  return 0;

}


#endif



#if 1
class polygon{
  protected:
  int width,height;
  public:
    void set_value(int a,int b){
      width =a;
      height =b;
    }
   
};
class rectangle :public polygon{
  public:
    int area(){
      return width * height;
    }
};

class triangle :public polygon{
    public:
     int area(){
      return width *height / 2;
     }

};

int main(){
 rectangle rect;
 triangle tr;
 polygon *p1 =&rect;
  polygon *p2 =&tr;
 p1->set_value(4,5);
 p2->set_value(4,5);
 cout << rect.area() << "\n";
 cout << tr.area()<< "\n";



  return 0;

}


#endif