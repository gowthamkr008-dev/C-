#ifndef EMERTXE_H
#define EMERTXE_H
#include  <iostream>
using namespace std;
class Emertxe
{
        protected :
                int id;
                string name, address;
        public:
                Emertxe(int i, string n, string a)
                {
                        id = i;
                        name = n;
                        address = a;
                }
                void display_profile(){
                        
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
                }
};
class Mentor : public Emertxe
{
        string sub, rank;
        public :
        Mentor (int i, string n, string a, string rank) : Emertxe(i, n, a)
        {
                this -> sub = sub;
                this -> rank = rank;
        }
        void display_profile(){
                 cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Sub : " << sub << endl;
        cout << "Rank : " << rank << endl;
        }
};
class Candidate : public Emertxe
{
        string course;
        int year;
        public :
        Candidate (int i, string n, string a, string course, int year) : Emertxe(i, n, a)
        {
                this -> course = course;
                this -> year = year;
        }
        void display_profile(){
                 cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Course : " << course << endl;
        cout << "Year : " << year << endl;
        }
};