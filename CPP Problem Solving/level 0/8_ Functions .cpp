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

// Examples:



/*
void second(int sec_num)
{
    cout<<"the number is: "<<sec_num<<endl;
}

int main()
{
    int main_num = 10;
    second(main_num);
    second(20);
}
*/

/*
void sec(int par_1=10)
{
    par_1 = 500;
    cout<<"value of par_1 is: "<<par_1<<endl;
}

int main()
{
    sec(20);
}
*/

/*
void sec(int par_1,int par_2=20)
{
    cout<<"par_1 is: "<<par_1<<endl;
    cout<<"par_2 is: "<<par_2<<endl;
}

int main()
{
    sec(30);
}
*/

/*
void sec(int par_1 , int par_2 , int par_3 = 30)
{
    cout<<"par_1 is: "<<par_1<<endl;
    cout<<"par_2 is: "<<par_2<<endl;
    cout<<"par_3 is: "<<par_3<<endl;
}

int main()
{
    sec(1000,2000);
}
*/

/*
int sec(int sec_num)
{
    cout<<"execution of sec\n\n";
    return sec_num;
}

int main()
{
    int main_num = 10;

    cout<<sec(main_num);

    cout<<"\n\n===================\n\n";

    sec(main_num);

    cout<<"\n\n===================\n\n";

    int num = sec(main_num); // execution of sec
    cout<<num<<endl; // cout num value

}
*/

/*
int sec()
{
    cout<<"execution of sec\n\n";
    if(1>1)
    {
        return 1;
    }
    else
    {
        return 0;
        cout<<"will not appear\n";
    }
}


int main()
{
    cout<<sec()<<endl;
}
*/

/*
// the value of arguement will not change
void fun(int sec_num)
{
    sec_num = 7000;
    cout<<"value of parameter in fun = "<<sec_num<<endl;
}

int main()
{
    int main_num = 1000;
    cout<<"value of agrument in main = "<<main_num<<endl;
    fun(main_num);
    cout<<"value of agrument in main = "<<main_num<<endl;
}
*/


/*
// the value of arguement will change
void fun(int &sec_num)
{
    sec_num = 7000;
    cout<<"value of parameter in fun = "<<sec_num<<endl;
}

int main()
{
    int main_num = 1000;
    cout<<"value of agrument in main = "<<main_num<<endl;
    fun(main_num);
    cout<<"value of agrument in main = "<<main_num<<endl;
}
*/


/*
// passing argument(struct data type) to parameter(struct data type)

struct inf{

string name;
string address;

};

void fun(inf sec_person)
{
    sec_person.name = "name from sec";
    sec_person.address = "address from sec";

    cout<<sec_person.name<<endl;
    cout<<sec_person.address<<endl;
}

int main()
{
inf main_person;

fun(main_person);
}

*/

/*

// value of parameter(struct data type) will not change
struct inf{

string name;
int age;

};

void print(inf sec_person)
{
    sec_person.name = "sec name";
    sec_person.age = 1;

    cout<<"name from sec: "<<sec_person.name<<endl;
    cout<<"age from sec: "<<sec_person.age<<endl;
}


int main()
{
inf main_person;

main_person.name = "main name";
main_person.age = 0;

cout<<"name from main: "<<main_person.name<<endl;
cout<<"age from main: "<<main_person.age<<endl;

cout<<"\n=====================================================\n";

print(main_person);

cout<<"\n=====================================================\n";

cout<<"name from main: "<<main_person.name<<endl;
cout<<"age from main: "<<main_person.age<<endl;

}

*/

/*
// value of parameter(struct data type) will change
struct inf{

string name;
int age;

};

void print(inf &sec_person)
{
    sec_person.name = "sec name";
    sec_person.age = 1;

    cout<<"name from sec: "<<sec_person.name<<endl;
    cout<<"age from sec: "<<sec_person.age<<endl;
}


int main()
{
inf main_person;

main_person.name = "main name";
main_person.age = 0;

cout<<"name from main: "<<main_person.name<<endl;
cout<<"age from main: "<<main_person.age<<endl;

cout<<"\n=====================================================\n";

print(main_person);

cout<<"\n=====================================================\n";

cout<<"name from main: "<<main_person.name<<endl;
cout<<"age from main: "<<main_person.age<<endl;

}
*/


/*
struct inf{

string name , address;
};


void read(inf &read_person)
{
    cout<<"Enter your name: "; cin>>read_person.name;
    cout<<"Enter your address: "; cin>>read_person.address;
}


void print(inf print_person)
{
    cout<<"your name is: "<<print_person.name<<endl;
    cout<<"your address is: "<<print_person.address<<endl;

}


int main()
{

inf main_person;
main_person.name = "main_name";
main_person.address = "main_address";

cout<<"name berfoe read is: "<<main_person.name<<endl;
cout<<"address berfoe read is: "<<main_person.address<<endl;

cout<<"\n=========================================\n";

read(main_person);

cout<<"\n=========================================\n";

cout<<"name after read is: "<<main_person.name<<endl;
cout<<"address after read is: "<<main_person.address<<endl;

cout<<"\n=========================================\n";

print(main_person);

}

*/


/*
// passing argument(array) to parameter(array)

void read(int read_nums[3])
{
    cout<<"Enter 1st number : "; cin>>read_nums[0];
    cout<<"Enter 2nd number : "; cin>>read_nums[1];
    cout<<"Enter 3rd number : "; cin>>read_nums[2];
}

void print(int print_nums[3])
{
    cout<<"1st number is : "<<print_nums[0]<<endl;
    cout<<"2nd number is : "<<print_nums[1]<<endl;
    cout<<"3rd number is : "<<print_nums[2]<<endl;
}

int main()
{

int main_nums[3] = {10,20,30};

cout<<"num1 before read = "<<main_nums[0]<<endl;
cout<<"num2 before read = "<<main_nums[1]<<endl;
cout<<"num3 before read = "<<main_nums[2]<<endl;

cout<<"\n===================================\n";

read(main_nums);

cout<<"\n===================================\n";

cout<<"num1 after read = "<<main_nums[0]<<endl;
cout<<"num2 after read = "<<main_nums[1]<<endl;
cout<<"num3 after read = "<<main_nums[2]<<endl;

cout<<"\n===================================\n";

print(main_nums);

}
*/


/*
void read(int read_grades[])
{
    cout<<"Enter 1st grade: "; cin>>read_grades[0];
    cout<<"Enter 2nd grade: "; cin>>read_grades[1];
    cout<<"Enter 3rd grade: "; cin>>read_grades[2];
}


float res(int res[])
{
    float result = res[0] + res[1] + res[1];

    return result;
}


int main()
{

int grades[3];

read(grades);

cout<<"\nyour result is: "<<res(grades)<<endl;

}
*/











/*
// making (an array) as a (member of struct)
struct inf{

string name;
int age;
int grades[3];

};


int main()
{
    inf person_1;

    person_1.name = "mohamed";
    person_1.age = 22;
    person_1.grades[0] = 10;
    person_1.grades[1] = 20;
    person_1.grades[2] = 30;
}
*/

/*
// putting (structs members from the same data type) inside an (array from the same data type)

struct inf{

string name;
string address;

};

int main()
{
inf person_1;
person_1.name;
person_1.address;

string msg[] = {person_1.name , person_1.address};

}
*/

/*
// making (elements of an array) as a (receivers of all struct members)
// or making an array , but its data type is (struct)

struct inf{
string name;
string address;
int age;
float grade;

};

int main()
{
    inf persons[3];

    persons[0].name = "mohamed";
    persons[0].address = "Egypt";
    persons[0].age = 22;
    persons[0].grade = 100;

    persons[1].name = "Ahmed";
    persons[1].address = "KSA";
    persons[1].age = 23;
    persons[1].grade = 150;

    persons[2].name = "Osama";
    persons[2].address = "Egypt";
    persons[2].age = 45;
    persons[2].grade = 200;


    for(int i=0; i<3; i++)
    {
        cout<<persons[i].name<<endl;
        cout<<persons[i].address<<endl;
        cout<<persons[i].age<<endl;
        cout<<persons[i].grade<<endl;
        cout<<"\n=======================\n";
    }

}

*/


/*
struct inf{
string name;
int age;
int phone;
};

void read_p1(inf p1[1])
{
    cout<<"Enter name of p1: "; cin>>p1[0].name;
    cout<<"Enter age of p1: "; cin>>p1[0].age;
    cout<<"Enter phone of p1: "; cin>>p1[0].phone;
}

void read_p2(inf p2[1])
{
    cout<<"Enter name of p2: "; cin>>p2[1].name;
    cout<<"Enter age of p2: "; cin>>p2[1].age;
    cout<<"Enter phone of p2: "; cin>>p2[1].phone;
}

void print_p1(inf pr1[1])
{

cout<<"name of p1 is: "<<pr1[0].name<<endl;
cout<<"age of p1 is: "<<pr1[0].age<<endl;
cout<<"phone of p1 is: "<<pr1[0].phone<<endl;

}

void print_p2(inf pr2[1])
{

cout<<"name of p2 is: "<<pr2[1].name<<endl;
cout<<"age of p2 is: "<<pr2[1].age<<endl;
cout<<"phone of p2 is: "<<pr2[1].phone<<endl;

}

int main()
{
    inf main_persons[2];

    main_persons[0].name;
    main_persons[0].age;
    main_persons[0].phone;

    main_persons[1].name;
    main_persons[1].age;
    main_persons[1].phone;


    read_p1(main_persons);
    cout<<"\n\n================================\n\n";
    read_p2(main_persons);
    cout<<"\n\n================================\n\n";



    print_p1(main_persons);
    cout<<"\n\n================================\n\n";
    print_p2(main_persons);
    cout<<"\n\n================================\n\n";
}
*/


/*

int sec()
{

cout<<"this is sec\n";

 return 2;

}


int third(int num)
{

cout<<"this is third\n";

}


int main()
{
    third(sec());

    return 0;
}
*/

void read(int num)
{
num = 7000;

cout<<"in read num = "<<num<<endl;
}

int main(){

int num = 1000;

cout<<"in main num = "<<num<<endl;

read(num);

cout<<"in main num = "<<num<<endl;



}
















///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Apps:
// problem 5 (check your solution)


/*
// problem 1
int calcspecial(int num1 , int num2)
{
    int one;

    if(num1==num2)
    {
        one = num1 + num2;
    }
    else if(num1>num2)
    {
        one = num1 - num2;
    }
    else if(num2>num1)
    {
        one = num2 - num1;
    }

    return one;
}

int main()
{
  cout << calcspecial(40, 40) << "\n";    // First = Second -> 40 + 40 = 80
  cout << calcspecial(200, 50) << "\n";   // First > Second -> 200 - 50 = 150
  cout << calcspecial(100, 300) << "\n";  // First < Second -> 300 - 100 = 200
  return 0;
}

*/



/*
// problem 2
float money(float salary , int total_days)
{
    int total_weeks = total_days / 7;
    int holidays = total_weeks * 2;

    int work_days = total_days - holidays;

    float day_salary = salary / work_days;

    return day_salary ;
}


int main()
{
    // Hints
    // 21 Days Has 3 "Weeks"
    // Every "Week" You Have 2 Holidays.
    // Total = 3 * 2 = 6 Holidays From 21 Days

  cout << money(2015, 21) << "\n"; // 134.333
  cout << money(4500, 40) << "\n"; // 150
  return 0;
}
*/



/*
// problem 3
int plusnums(int numone, int numtwo);
int minusnums(int numone, int numtwo);
int divnums(int numone, int numtwo);
// Do Not Edit Code Below This Line
int main()
{
  cout << plusnums(50, 60) << "\n"; // 110
  cout << minusnums(150, 50) << "\n"; // 100
  cout << divnums(100, 5) << "\n"; // 20
  return 0;
}

int plusnums(int numone, int numtwo)
{
  return numone + numtwo;
}

int minusnums(int numone, int numtwo)
{
  return numone - numtwo;
}

int divnums(int numone, int numtwo)
{
  return numone / numtwo;
}
*/

/*
// problem 4
// Your Function Here

int calculation(int num1 , int num2=50 , int num3=150)
{
    return num1 + num2 + num3;
}

int main()
{
  cout << calculation(50, 100, 150) << "\n"; // 300
  cout << calculation(100, 50) << "\n"; // 300
  cout << calculation(100) << "\n"; // 300
  return 0;
}
*/




/*
// problem 5

// method 1:
int thepower(int base , int power)
{
    int res = 1;

    for(int i=0; i<power; i++)
    {
        res = res * base;
    }
    return res;
}

int main()
{
  cout<<thepower(2, 5)<<endl; // 32
  return 0;
}
*/





/*
// problem 5
// method 2:
int thepower(int base , int power)
{
   int res = pow(base,power);

   return res;
}

int main()
{
  cout<<thepower(2, 5)<<endl; // 32
  return 0;
}
*/


/*
// problem 6
string swapping(string name)
{
    for(int i=0; i<size(name); i++)
    {
        if(name[i]=='H' || name[i]=='h')
        {
            cout<<name[i];
        }
        else if(islower(name[i])){

            cout<<char(toupper(name[i]));
        }
        else if(isupper(name[i]))
        {
            cout<<char(tolower(name[i]));
        }
        else{
            cout<<name[i];
        }
    }
}

int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}
*/


/*
// problem 7
int beforeresult(int base , int countt)
{
    int num = base;
    int res = base;

    for(int i=0; i<countt; i++)
    {
        num--;
        res = res + num;
    }

    return res;
}


int main()
{
  cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
  // Main Number [10]
  // Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers
  cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
  // Main Number [1015
  // Numbers Before [14 + 13 + 12] <- 3 Numbers
  return 0;
}
*/


/*
// problem 8

int plusandmultiply(int numbers[] , int numssize)
{
    int num1 = 0;
    int num2 = 1;

    for(int i=0; i<numssize; i++)
    {
        if(numbers[i]%2==0)
        {
            num1 = num1 + numbers[i];
        }
        else if(numbers[i]%2!=0)
        {
            num2 = num2 * numbers[i];
        }
    }

    cout<<"num1 is: "<<num1<<endl;
    cout<<"num2 is: "<<num2<<endl;

    return num1 + num2;

}


int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}
*/



/*
// problem 9
int sumall(int numbers[] , int numssize , int noneed)
{
    int res = 0;

    for(int i=0; i<numssize; i++)
    {
        if(numbers[i]==noneed)
        {
            continue;
        }

        else
        {
            res = res + numbers[i];

        }
    }

    return res;
}


int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";
  return 0;
}
*/


/*
// problem 10

int minpositive(int numbers[],int numssize)
{
    int num=INT_MAX;

    for(int i=0; i<numssize; i++)
    {
        if(numbers[i]>0)
        {
            if(numbers[i]<num)
            {
                num = numbers[i];
            }
        }
    }

    return num;
}

int main()
{
  int numbers[] = { 3, 1, 15, 2, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}
*/


/*
// problem 11

int firstnegative(int numbers[] , int numssize)
{

    int num = INT_MIN;

    for(int i=0; i<numssize; i++)
    {
        if(numbers[i]<0)
        {
            if(numbers[i]>num)
            {
                num = numbers[i];
            }
        }
    }

    return num;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize = size(numbers);
  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}

*/


/*
// problem 12

string createurl(string one , string two , string three , bool four=1)
{
    string name;

    if (four==0)
    {
        name = "// " + one + "://" + two + "." + three;
    }
    else if(four==1)
    {
        name = "// " + one + "://www." + two + "." + three;
    }

    return name;

}

int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}

*/



/*
// problem 13

string greeting(string name , string title=" ")
{
    if (title == " ")
    {
        name = "Hello " + name;
    }
    else if (title == "Male")
    {
        name = "Hello Mr " + name;
    }
    else if (title == "Female")
    {
        name = "Hello Miss " + name;
    }

 return name;
}

int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}
*/


/*
// problem 14
int calculate(int num1 , int num2 , string op = "a")
{
    int num;

    if(op=="add" || op=="a")
    {
        num = num1 + num2;
    }
    else if(op=="subtract" || op=="s")
    {
        num = num1 - num2;
    }
    else if(op=="multiply" || op=="m")
    {
        num = num1 * num2;
    }
    else{
        num = 0;
    }

    return num;
}

int main()
{
  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
  return 0;
}

*/

/*
// problem 15

double avg(int money[], int monsize)
{
    double sum = 0;

    for(int i=0; i<monsize; i++)
    {
        sum = sum + money[i];
    }

    double average = sum / monsize;

    return average;

}


int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}

*/





/*
// problem 16

int books(int number_of_small_books , int number_of_middle_books , int number_of_big_books , int number_of_shells)
{
    int num;

    int number_of_small_spaces = number_of_small_books * 2;
    int number_of_middle_spaces = number_of_middle_books * 4;
    int number_of_big_spaces = number_of_big_books * 6;
    int total_number_of_spaces = number_of_small_spaces + number_of_middle_spaces + number_of_big_spaces;

    int number_of_shells_spaces = number_of_shells * 20;

    if(total_number_of_spaces > number_of_shells_spaces)
    {
        num = 0;
    }
    else{

        num = number_of_shells_spaces - total_number_of_spaces;
    }

    return num;
}


int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}
*/








/*
// problem 17

double pricing(int total_phones , int used_phones , double new_price , double tax_rate)
{
    int new_phones = total_phones - used_phones;
    double used_price = new_price - 200;

    double revenue_of_used = used_phones * used_price;
    double revenue_of_new = new_phones * new_price;
    double revenue_of_total_phones = revenue_of_used + revenue_of_new;

    double tax = revenue_of_total_phones * (tax_rate/100);

    double net_income = revenue_of_total_phones - tax;

    return net_income;

}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}
*/
