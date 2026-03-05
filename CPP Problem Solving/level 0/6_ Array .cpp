#include<iostream>
#include<array>
using namespace std;

// Examples:

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Apps:

// problem 12 (check your answar)

/*
// problem 1
int main()
{
    int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};

    int sizee = size(nums);

    for(int i=0; i<sizee; i++)
    {
        cout<<"Number "<<nums[i]<<" Award Is: "<<awards[i]<<endl;
    }

return 0; }

*/


/*
// problem 2
int main()
{
    int check = 25;
    int nums[]{20, 25, 30, 70, 100};

    int before_last_index = size(nums) - 2;

    int one , two , three ;



    if(nums[0]>check && nums[0]>nums[1] && nums[0]>nums[2])
    {
        one = nums[0] + nums[before_last_index];
        cout<<one<<endl;
    }
    else if(nums[1]>check && nums[1]>nums[0] && nums[1]>nums[2])
    {
        two = nums[1] + nums[before_last_index];
        cout<<two<<endl;
    }
    else if(nums[2]>check && nums[2]>nums[0] && nums[2]>nums[1])
    {
        three = nums[2] + nums[before_last_index];
        cout<<three<<endl;
    }
    else
    {
        cout<<"There is no number > check\n";
    }

return 0; }
*/



/*
// problem 3
int main()
{
int filling = 10;
int vals[]{100, 200, 300, 400};

// Write One Line Of Code Here To Fill Array Value With Number 10
vals[0] = vals[1] = vals[2] = vals[3] = 10;

cout << vals[0] << "\n"; // 10
cout << vals[1] << "\n"; // 10
cout << vals[2] << "\n"; // 10
cout << vals[3] << "\n"; // 10

return 0; }
*/



/*
// problem 4
int main()
{
int vals[]{400, 200, 900, 400, 200};

if((vals[0]+vals[4])>vals[2])
{
    cout<<"(first + last) > Middle\n";
    cout<<vals[0]+vals[4]<<" > "<<vals[2]<<endl;
}

if((vals[1]+vals[3])>vals[2])
{
    cout<<"\n\n(2nd + before last) > Middle\n";
    cout<<vals[1]+vals[3]<<" > "<<vals[2]<<endl;
}

if (vals[2]>(vals[0]+vals[4]) && vals[2]>(vals[1]+vals[3]))
{
    cout<<"Middle is the largest\n";
    cout<<vals[2]<<endl;
}

return 0; }
*/



/*
// problem 5
int main()
{
int vals[] = {100, 300, 600, 200, 100};

int first_index = 0;
int second_index = 1;
int last_index = size(vals) - 1;
int before_last_index = size(vals) - 2;

if(vals[first_index] == vals[last_index] && vals[second_index] == vals[before_last_index])
{
    cout<<"Array Is Palindrome"<<endl;
}
else{
    cout<<"Array Is Not Palindrome\n";
}


return 0; }
*/



/*
// problem 6
int main()
{
int vals[] = {10, 20, 30};

// Write Your Code Here
vals[0] = 100;
vals[1] = 200;
vals[2] = 300;

cout << vals[0] << "\n"; // 100
cout << vals[1] << "\n"; // 200
cout << vals[2] << "\n"; // 300

return 0; }
*/


/*
// problem 7
int main()
{
// Create The Array Here

string names[3][3] ={{"Ahmed","Sayed","Mahmoud"} ,{"Sameh","Mahdy","Gamal"} , {"Mohamed","Adel","Majed"}} ;

cout << "First Collection Of Names:\n";
cout << names[0][0] << "\n"; // Ahmed
cout << names[1][1] << "\n"; // Mahdy
cout << names[2][2] << "\n"; // Majed

cout << "Second Collection Of Names:\n";
cout << names[2][1] << "\n"; // Adel
cout << names[1][2] << "\n"; // Gamal
cout << names[0][2] << "\n"; // Mahmoud

cout << "Third Collection Of Names:\n";
cout << names[0][1] << "\n"; // Sayed
cout << names[1][0] << "\n"; // Sameh
cout << names[2][0] << "\n"; // Mohamed

return 0; }
*/


/*
// problem 8
int main()
{
  // Your Code Here

  array <int,3> nums ;

  // Do Not Edit
  nums.fill(100);
  cout << nums[0] << "\n"; // 100
  cout << nums[1] << "\n"; // 100
  cout << nums[2] << "\n"; // 100

return 0; }
*/


/*
// problem 9
int main()
{
int nums[] = {10, 20, 30, 40, 20, 50};
cout<<sizeof(nums)/sizeof(nums[0])<<endl;
cout<<size(nums)<<endl;
cout << std::end(nums) - std::begin(nums);

return 0; }
*/




/*
// problem 10
int main()
{

array<int, 6> nums = {10, 20, 30, 40, 20, 50};

int last_index = nums.size() - 1;

// method 1:
cout<<"1st element is: "<<nums[0]<<endl;
cout<<"last element is: "<<nums[last_index]<<endl;

cout<<"\n\n=========================\n\n";

// method 2:
cout<<"1st element is: "<<nums.front()<<endl;
cout<<"last element is: "<<nums.back()<<endl;

cout<<"\n\n=========================\n\n";


// method 3:
cout<<"1st element is: "<<nums.at(0)<<endl;
cout<<"last element is: "<<nums.at(last_index)<<endl;

return 0; }
*/


/*
// problem 11
int main()
{

  // Do Not Edit The Next 3 Lines
  int index = 1;
  array<int, 3> oldNums = {10, 20, 30};
  array<int, 3> newNums;

  // Write Your Code Here
  newNums.front() = oldNums.back();
  newNums[index] = oldNums[index];
  newNums.back() = oldNums.front();

  // Do Not Edit The Next 3 Lines
  cout << newNums[0] << "\n"; // 30
  cout << newNums[1] << "\n"; // 20
  cout << newNums[2] << "\n"; // 10


return 0; }
*/


/*
// problem 12
int main()
{
// Do Not Edit The Next 6 Lines
int nums[] = {1, 2, 3, 5};
int vals[] = {10, 20, 40, 30, 10, 60};
int i1 = nums[3]; // 5
int i2 = nums[0]; // 1
int i3 = nums[1]; // 2
int i4 = nums[2]; // 3

// Your Code Here

i1 = vals[0];
i2 = vals[2];
i3 = vals[3];
i4 = vals[4] + vals[5];

cout<< i1+i2+i3+i4 <<endl;

return 0; }

*/

/*
// problem 13
int main()
{
string fName = "Elzero ";
string mName = "Web ";
string lName = "School";


cout<<fName<<mName<<lName<<endl;

cout<<fName+mName+lName<<endl;

return 0; }
*/

