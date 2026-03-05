#include<iostream>
#include<vector>
#include<iterator>
#include<array>
#include<algorithm>
#include<string>
using namespace std;

// Examples:

/*
// ex 1
int main()
{
vector<int>nums={10,20,30};

vector<int>::iterator it_1 = nums.begin();
auto it_2 = nums.end();
}
*/


/*
// ex 2
int main()
{
vector<int>nums={10,20,30};

vector<int>::iterator it_1 = nums.begin();
auto it_2 = nums.end();

}
*/


/*
// ex 3
int main()
{
vector<int>nums={10,20,30};

vector<int>::iterator it_1 = nums.begin();

auto it_2 = nums.end()-1;

auto it_3 = nums.begin()+1;
}
*/


/*
// ex 4
int main()
{
vector<int>nums={10,20,30};
vector<int>::iterator it_1 = nums.begin();

cout<<*it_1<<endl;
cout<<"\n\n===================\n\n";
cout<<*nums.begin()<<endl;
cout<<*(nums.end()-1)<<endl;
cout<<"\n\n===================\n\n";
cout<<it_1[0]<<endl;
cout<<it_1[1]<<endl;
cout<<it_1[2]<<endl;
}
*/


/*
// ex 5
int main()
{
vector<int>nums={100,200,300};
vector<int>::iterator it = nums.begin();

cout<<&nums[0]<<endl;
cout<<&(*it)<<endl;

cout<<&(it)<<endl;
}
*/

/*
// ex 6
int main()
{
vector<int>nums={0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
vector<int>::iterator it;

it = nums.begin();
cout<<*it<<endl;
cout<<"\n\n===================\n\n";
it = it + 1;
cout<<*it<<endl;
it++;
cout<<*it<<endl;
cout<<"\n\n===================\n\n";
cout<<*++it<<endl;
cout<<*it++<<endl;
cout<<*it<<endl;
cout<<"\n\n===================\n\n";
cout<<*it+1<<endl;
cout<<*(it+1)<<endl;
}
*/


/*
// ex 7
int main()
{
vector<int>nums={0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,150};
vector<int>::iterator it = nums.begin();

advance(it,2);
cout<<*it<<endl;
advance(it,-1);
cout<<*it<<endl;
cout<<"\n\n===============================================\n\n";
cout<<count(nums.begin() , nums.end()-1 , 150)<<endl; // 1
cout<<"\n\n===============================================\n\n";
reverse(nums.begin() , nums.end());
cout<<*nums.begin()<<endl; // 150
for(int i:nums){cout<<i<<endl;}
cout<<"\n\n===============================================\n\n";
sort(nums.begin() , nums.end());
cout<<*nums.begin()<<endl; // 0
for(int ii:nums){cout<<ii<<endl;}
}
*/
