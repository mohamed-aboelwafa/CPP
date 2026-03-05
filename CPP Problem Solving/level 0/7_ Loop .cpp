#include<iostream>
using namespace std;


// Examples:

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Apps:
// problem 15 (Find a solution)
// problem 14 (check your answar)
// problem 18 (check your answar)


/*
// problem 1
int main()
{

// for
for(int a=0; a<=10; a++)
{
    cout<<a<<endl;
}

cout<<"\n\n=========================================\n\n";


int b = 0 ;
while(b<=10)
{
    cout<<b<<endl;
    b++;
}

cout<<"\n\n=========================================\n\n";

int c = 0 ;
do{
    cout<<c<<endl;
    c++;
}while(c<=10);

return 0; }
*/



/*
// problem 2
int main()
{

int index = 2;
for (;;) // <= Do Not Edit This Line
{
    if (index<=10)
    {
        cout << index << "\n"; // From 2 To 10
        index++;
    }
    else
    {
        break;
    }

}

return 0; }
*/


/*
// problem 3
int main()
{
    int num1 , num2;
    cout<<"Enter num1: "; cin>>num1;
    cout<<"Enter num2: "; cin>>num2;

    if(num1<num2)
    {
        for(int i=num1+1; i<=num2-1; i++)
        {
            if(i%2!=0)
            {
                cout<<i<<endl;
            }
        }
    }
    else if(num1>num2)
    {
        for(int b=num2+1; b<=num1-1; b++)
        {
            if(b%2!=0)
            {
                cout<<b<<endl;
            }
        }
    }

return 0; }
*/


/*
// problem 4
int main()
{

// for:
for(int i=0; i<19;)
{
    if(i==8)
    {
        cout<<i<<endl;
        i+=6;
    }

    else{

        cout<<i<<endl;
        i+=2;
    }
}

cout<<"\n\n========================\n\n";

// while:

int a = 0;
while(a<19)
{
    if(a==8)
    {
        cout<<a<<endl;
        a+=6;
    }

    else{

        cout<<a<<endl;
        a+=2;
    }
}

return 0; }

*/


/*
// problem 5
int main()
{

for(int i=0; i<28; i+=3)
{
    cout<<i<<endl;
}

cout<<"\n\n===================\n\n";

int a=0;
while(a<28)
{
    cout<<a<<endl;
    a+=3;
}


return 0; }
*/



/*
// problem 6
int main()
{

// for:
for(int i=10; i<=100000000;)
{
    cout<<i<<endl;
    i = i * i;
}

cout<<"\n\n===================\n\n";


// while:

int a = 10;
while(a<=100000000)
{
    cout<<a<<endl;
    a*=a;
}

return 0; }
*/


/*
// problem 7
int main()
{

// for:
for(int i=2; i<129;)
{
    if(i>7)
    {
        cout<<i<<endl;
        i*=2;
    }
    else{
        cout<<i<<endl;
        i=i+2;
    }
}

cout<<"\n\n===================\n\n";


int a = 2;
while(a<129)
{
    if(a>7)
    {
        cout<<a<<endl;
        a*=2;
    }
    else{
        cout<<a<<endl;
        a+=2;
    }
}

return 0; }

*/

/*
// problem 8
int main()
{


// for:
int num1 = 4;
for(int i=2; i<127;)
{
    cout<<i<<endl;
    i = i + num1;
    num1 = num1 * 2;
}

cout<<"\n\n===================\n\n";

// while:
int num2 = 4;
int a=2;
while(a<127)
{
    cout<<a<<endl;
    a = a + num2;
    num2 = num2 * 2;
}
return 0; }
*/

/*
// problem 9
int main()
{
 string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

 // for:
 for(int i=1; i<3; i++)
 {
     cout<<friends[i]<<endl;
 }

cout<<"\n\n===================\n\n";
    // while:
    int a = 1;
    while(a<3){
        cout<<friends[a]<<endl;
        a++;
    }

return 0; }
*/

/*
// problem 10
int main()
{
string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
int sizee = size(friends);

// for:
for(int i=0; i<sizee;)
{
    if(friends[i][0]=='A')
    {
        cout<<friends[i]<<endl;
    }
    i++;
}
cout<<"\n\n===================\n\n";

// while:

int a=0;
while(a<sizee)
{
    if(friends[a][0]=='A'){
        cout<<friends[a]<<endl;
        a++;
    }
    else{
        a++;
    }
}

return 0; }
*/


/*
// problem 11
int main()
{
    string friends[] = {"Ahmed", "Osama", "Ameer"};
    int ArraySize = size(friends);

    for(int a=0; a<ArraySize; a++)
    {
        for(int b=0; b<size(friends[a])+4; b++)
        {
            cout<<"=";
        }
        cout<<endl;

        cout<<"= "<<friends[a]<<" =";
        cout<<endl;

        for(int c=0; c<size(friends[a])+13; c++)
        {
            cout<<"=";
        }
        cout<<endl;

        cout<<"== ";
        for(int e=0; e<size(friends[a]); e++)
        {
            if( e == size(friends[a])-1 )
            {
                cout<<friends[a][e];
            }
            else
            {
                cout<<friends[a][e]<<", ";
            }
        }
        cout<<" =";
        cout<<endl;


        for(int f=0; f<size(friends[a])+13; f++)
        {
            cout<<"=";
        }
        cout<<endl<<endl<<endl;
    }

    return 0;
}

*/




/*
// problem 12
int main()
{
int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
int numsSize = size(nums);

for(int i=0; i<numsSize; i++)
{
    if( (nums[i]+nums[i])==(nums[i+1]) )
    {
        cout<<nums[i]<<endl;
    }
}

return 0; }
*/


/*
// problem 13
int main()
{
for(int i=30; i>2; i-=3)
{
    cout<<i<<endl;
}

cout<<"\n\n===================\n\n";


for(int a=30; a>2; a-=3)
{
    if(a%2!=0)
    {
        cout<<a<<endl;
    }

}

return 0; }
*/




/*
// problem 14
int main()
{
int sum = 3;
int num = 2;
while (num < 520) {
  // Your Code Here
  if(num==2)
  {
    num = 1;
    cout<<num<<endl;
    num = num + sum;
    sum = sum *2;
  }
  else{
    cout<<num<<endl;
    num = num + sum;
    sum = sum *2;
  }

}
return 0; }
*/


/*
// problem 16
int main()
{

int index = 10;
int jump = 2;

for (;;)
{
  // Write Your Code Here
  if(index>jump)
  {
      cout<<index<<endl;
      index-=2;
  }
  else
  {
      break;
  }
}

return 0; }

*/




/*
// problem 17
int main()
{

for(int i=1; i<103;)
{
    if(i>0 && i<10)
    {
        cout<<"00"<<i<<endl;
        i++;
    }
    else if(i>=10 && i<20)
    {
        cout<<"0"<<i<<endl;
        i++;
    }
    else if(i==20)
    {
        cout<<"0"<<i<<endl;
        i+=80;
    }
    else if(i>=100)
    {
        cout<<i<<endl;
        i++;
    }
}


return 0; }
*/


/*
// problem 18
int main()
{
for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
{
  // Edit What You Need And Add Your Code
  if(i==0 || i==500 || i==1000)
  {
      continue;
  }
  else{
    cout << i << "\n";
  }

}

return 0; }

*/



/*
// problem 19
int main()
{

for(int i=100; i<1200; i+=100)
{
    if(i==100 || i==1100)
    {
        cout<<i<<endl;
    }
    else
    {
        cout<<i<<endl;
        cout<<i<<endl;
    }
}

return 0; }
*/


/*
// problem 20
int main()
{
string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};

for(int i=0; i<size(names); i++)
{
    if(size(names[i])==5)
    {
        cout<<names[i]<<endl;
    }
}

return 0; }

*/



























