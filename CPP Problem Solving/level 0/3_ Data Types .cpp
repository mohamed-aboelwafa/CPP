#include<iostream>
#include<vector>
#include<iterator>
#include<array>
#include<algorithm>
#include<string>
#include<string.h>
#include<cmath>
#include<cctype>
using namespace std;



/*
struct person{

string name;
float age;
int number;

};


int main()
{
    person p1;
    person p2;

    cout<<"**** person 1 ****\n";
    cout<<"Enter the name of person 1: "; cin>>p1.name;
    cout<<"Enter the age of person 1: "; cin>>p1.age;
    cout<<"Enter the number of person 1: "; cin>>p1.number;

    cout<<"\n=====================\n";

    cout<<"**** person 2 ****\n";
    cout<<"Enter the name of person 2: "; cin>>p2.name;
    cout<<"Enter the age of person 2: "; cin>>p2.age;
    cout<<"Enter the number of person 2: "; cin>>p2.number;


    cout<<"\n=====================\n";

    cout<<"the name of person 1 is: "<<p1.name<<endl;
    cout<<"the age of person 1 is: "<<p1.age<<endl;
    cout<<"the number of person 1 is: "<<p1.number<<endl;

    cout<<"\n=====================\n";

    cout<<"the name of person 2 is: "<<p2.name<<endl;
    cout<<"the age of person 2 is: "<<p2.age<<endl;
    cout<<"the number of person 2 is: "<<p2.number<<endl;
}
*/

/*

struct inf
{
    string name = "null name";
    string phone = "null phone";
    int age = 0;

};

int main()
{
    inf p1;
    inf p2;

    //p1.name = "mohamed";
    p1.phone = "011";
    // p1.age = 22;

    //p2.name = "ahmed";
    p1.phone = "012";
    // p2.age = 25;

    cout<<"name of p1 is: "<<p1.name<<endl;
    cout<<"phone of p1 is: "<<p1.phone<<endl;
    cout<<"age of p1 is: "<<p1.age<<endl;

    cout<<"\n\n===================\n\n";

    cout<<"name of p2 is: "<<p2.name<<endl;
    cout<<"phone of p2 is: "<<p2.phone<<endl;
    cout<<"age of p1 is: "<<p1.age<<endl;
}
*/


/*
struct owner{

string owner_name ="null_name";
string owner_phone = "null_phone";
int owner_age = 0;

};


struct cars{

string car_name = "null_name";
string car_price="null_price";
int car_number=0;

owner car_owner;

};


int main()
{
    cars car_1;
    cars car_2;

    car_1.car_name = "car one";
    car_1.car_price = "1 M";
    car_1.car_number = 1;
    car_1.car_owner.owner_name = "owner of car_1";
    car_1.car_owner.owner_phone = "phone of owner of car_1";
    car_1.car_owner.owner_age = 31;

    car_2.car_name = "car two";
    car_2.car_price = "2 M";
    car_2.car_number = 2;
    car_2.car_owner.owner_name = "owner of car_2";
    car_2.car_owner.owner_phone = "phone of owner of car_2";
    car_2.car_owner.owner_age = 32;

    cout<<"the name of car_1 is: "<<car_1.car_name<<endl;
    cout<<"the price of car_1 is: "<<car_1.car_price<<endl;
    cout<<"the number of car_1 is: "<<car_1.car_number<<endl;
    cout<<"owner name of car_1 is: "<<car_1.car_owner.owner_name<<endl;
    cout<<"owner phone of car_1 is: "<<car_1.car_owner.owner_phone<<endl;
    cout<<"owner age of car_1 is: "<<car_1.car_owner.owner_age<<endl;

    cout<<"\n\n=================================\n\n";


    cout<<"the name of car_2 is: "<<car_2.car_name<<endl;
    cout<<"the price of car_2 is: "<<car_2.car_price<<endl;
    cout<<"the number of car_2 is: "<<car_2.car_number<<endl;
    cout<<"owner name of car_2 is: "<<car_2.car_owner.owner_name<<endl;
    cout<<"owner phone of car_2 is: "<<car_2.car_owner.owner_phone<<endl;
    cout<<"owner age of car_2 is: "<<car_2.car_owner.owner_age<<endl;

}
*/

// enums
/*
enum name {name1 = 100 , name2 = 200 , name3 = 300 };

enum age {age1 = 400 ,age2 = 500 ,age3 = 600};

enum rel {single = 700 , married = 800};


int main()
{
    name your_name = name::name1;
    age your_age = age::age1;
    rel your_rel = rel::married;

    cout<<"your name is: "<<your_name<<endl;
    cout<<"your age is; "<<your_age<<endl;
    cout<<"your rel is: "<<your_rel<<endl;
}
*/






/*
// nested structures

struct address{

string street;

};

struct numbers{

int phone;

};


struct courses{

string programming;
string english;

};


struct books{
string book1;
string book2;


};

struct cvinfo{
string cvnum;
courses courses_way;
books books_way;


};


struct contactinfo{
string country;
address addres_way;
numbers numbers_way;

};

struct person{

string name;
float age;

enum MarriedOrNot{married = 1 ,single = 0};
enum color{red = 100 , green = 200 , blue = 300};

cvinfo cv_way;
contactinfo contact_way;



};

int main()
{

    person person_1;

    person_1.name = "Mohamed";
    person_1.age = 22;

    person_1.contact_way

}

*/



/*
// the value of the argument will not change
void fun(int num1)
    num1 = 7000;
    cout<<"num1 in fun = "<<num1<<endl;
}

int main()
{
    int num = 1000;
    fun(num);
}

*/



































//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Apps:


// problem 5:
/*
int main()
{
    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';

    char nums[] = {a,b,c,d};
    int c_count = size(nums);

    for(int i=0; i<c_count; i++)
    {
        cout<<"ASCII value of "<<nums[i]<<"is "<<int(nums[i])<<endl;
    }

    return 0;
}

*/



/*
// problem 6:

int main()
{
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;




    int names[] = {a,b,c,d,e,f};
    int sizee = size(names);

    for(int i=0; i<sizee; i++)
    {
        cout<<"character of "<<names[i]<<" is "<<char(names[i])<<endl;
    }

    return 0;
}
*/

/*
// problem 7

int main()
{
    // E 69
    // W 87
    // S 83

    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

    cout<<char(d-a)<<char(c+d)<<char(d+b)<<endl;
}
*/

/*
// problem 8

int main()
{
    short int a = 100;
    long long int b = 15001500;
    long double c = 100.54565746;

    cout<<sizeof(a)<<" Bytes\n";
    cout<<sizeof(b)<<" Bytes\n";
    cout<<sizeof(c)<<" Bytes\n";

    return 0;
}
*/

/*

// problem 12

int main()
{
    // P --> 80

    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    cout<<sizeof(a)<<"\n"; // 2
    cout<<sizeof(b)<<"\n"; // 4
    cout<<sizeof(c)<<"\n"; // 16

    cout<<"\n============================\n";

    cout<< sizeof(c) - sizeof(b)<<"\n"; // 12
    cout<< sizeof(c) + sizeof(b) <<"\n"; // 20
    cout<< sizeof(c) * sizeof(a) <<"\n"; // 32
    cout<< a * int(c) <<"\n"; // 5000
    cout<<char(sizeof(c)* int(c))<<"\n"; // P


    return 0;
}

*/
