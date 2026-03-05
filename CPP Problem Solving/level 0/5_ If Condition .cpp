#include<iostream>
using namespace std;

// Examples

// enums with if

enum colors {red = 1 , blue = 2 , green = 3 , yellow = 4};

int main()
{

colors color;
int inp;

cout<<"choose the number or the name of color: "; cin>>inp;

color = (colors)inp;

   switch(color){
       case colors::red:
       cout<<"your color is red\n";
       break;

       case colors::blue:
       cout<<"your color is blue\n";
       break;

       case colors::green:
       cout<<"your color is green\n";
       break;

       case colors::yellow:
       cout<<"your color is yellow\n";
       break;

       default:
       cout<<"wrong choice\n";
       break;

       }
}


///////////////////////////////////////////////////////////////////////////////////////////

// Apps

/*
// problem 1
int main()
{
    int age = 40;
    int points = 800;
    float rate = 8.5f;

    if(age>18 && points>500 && rate>5){

        cout<<"yes age>18 && points>500 && rate>5\n";
    }

return 0;

}
*/


/*
// problem 2
int main()
{
    int age , points;
    cout<<"Enter your age: "; cin>>age;
    cout<<"Enter your points: "; cin>>points;

    if(age>18)
    {
        if(points>500)
        {
            cout<<"age ok - points ok";
        }
        else{
            cout<<"age is ok - points isn't ok";
        }
    }
    else{
        if(points>500)
        {
            cout<<"age isn't ok - points ok";
        }
        else{
            cout<<"age isn't ok - points isn't ok";
        }
    }

return 0;

}
*/

/*
// problem 3
int main()
{
    int num;
    cout<<"Enter a number between 0 and 150: "; cin>>num;

    if (num<10)
    {
        cout<<"00"<<num<<endl;
    }
    else if(num>=10 && num<100)
    {
        cout<<"0"<<num<<endl;
    }
    else if(num>=100)
    {
        cout<<num<<endl;
    }

return 0;

}
 */

/*
// problem 4
int main()
{
int num1 = 21;
int num3 = 21;

int num2 = 10;
int num4 = 53;

// Do Not Edit Any Condition

// Condition 1
if (num1 > num2)
  cout << "Condition 1 Is True\n";
else
  cout << "Condition 1 Is False\n";

// Condition 2
if (num1 > num2 && num1 < num4)
  cout << "Condition 2 Is True\n";
else
  cout << "Condition 2 Is False\n";

// Condition 3
if (num1 > num2 && num1 == num3)
  cout << "Condition 3 Is True\n";
else
  cout << "Condition 3 Is False\n";

// Condition 4
if (num1 + num2 < num4)
  cout << "Condition 4 Is True\n";
else
  cout << "Condition 4 Is False\n";

// Condition 5
if (num1 + num3 < num4)
  cout << "Condition 5 Is True\n";
else
  cout << "Condition 5 Is False\n";

// Condition 6
if (num1 + num2 + num3 < num4)
  cout << "Condition 6 Is True\n";
else
  cout << "Condition 6 Is False\n";

// Condition 7
if (num4 - (num1 + num3) + num2 == 21)
  cout << "Condition 7 Is True\n";
else
  cout << "Condition 7 Is False\n";


return 0;

}
*/



/*
// problem 5
int main()
{
int by = 82; // by => Birth Year
int s = 500; // s => Salary

(by>80 ? (s<600 ? cout<<"ok\n" : cout<<"high\n") : cout<<"not ok\n");


return 0;}

*/

/*
// problem 6
int main()
{
int age = 40;
int points = 100;

if (age > 18 && points > 50 && sizeof(age) == 4)
{
    cout << "Age Is Ok\n";
    cout << "Points Is Ok\n";
    cout << "Age Data Is 4 Bytes\n";
}
return 0; }
*/



/*
// problem 7
int main()
{
int result = 0;
int num1, num2, num3, num4;

cout << "Please Type 5 Numbers In A Row\n";
cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
cin >> num1 >> num2 >> num3 >> num4;


if(num1<20 && num1%2 == 0 )
{
    result = result + num1;
}
if(num2<20 && num2%2 == 0)
{
    result = result + num2;
}
if(num3<20 && num3%2 == 0)
{
    result = result + num3;
}
if(num4<20 && num4%2 == 0)
{
    result = result + num4;
}

cout<<"\n====================\n";

cout<<"result is : "<<result<<endl;

return 0; }

*/



/*
// problem 1
int main()
{
int year;
cout<<"Enter a year: "; cin>>year;

switch(year)
{
case 1982:
cout<<"My Birth Day\n";
break ;

case 1989:
cout<<"My First Work\n";
break ;

case 1995:
cout<<"Windows 95\n";
break ;

case 2000:
cout<<"Windows Millennium\n";
break ;

case 2002:
cout<<"Created My vBulletin Forum\n";
break ;

default:
cout<<"No Events in This Year\n";
break ;
}

return 0; }
*/


/*
// problem 2
int main()
{
  int day;
  cin >> day;

  switch (day)
  {
  case 1:
  case 2:
  case 3:
    cout << "1 Shop Is Open";
    break;

  case 4:
  case 5:
    cout << "Shop Is Closed";
    break;

  default:
    cout << "Day Is Not Valid";
  }

return 0; }

*/




/*
// problem 3
int main()
{
int num;
cout<<"Enter a number: "; cin>>num;

switch(num)
{
    case 10:
    cout<<"Case 1\n";
    break;

    case 20:
    cout<<"Case 2\n";
    break;

    case 30:
    case 31:
    case 32:
    cout<<"Case 3\n";
    break;

    default:
    cout<<"Invalid Number\n";
}

return 0; }

*/











