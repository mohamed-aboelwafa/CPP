#include<iostream>
#include<vector>
#include<iterator>
#include<array>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;


// Examples:

/*
// ex 1
int main()
{
    int*ptr;
    int*ptr = &num;

    cout<<"\n\n===================\n\n";
}
*/

/*
// ex 2
int main()
{

    int num = 10;
    int*ptr=&num;

    cout<<ptr<<endl;
    num = 20;
    num = INT_MAX;
    num = 0;
    cout<<ptr<<endl;

    cout<<"\n\n===================\n\n";
}
*/


/*
// ex 3
int main()
{
    int num1 = 10;
    int num2 = 20;

    cout<<"num1 m.a is: "<<&num1<<endl;
    cout<<"num2 m.a is: "<<&num2<<endl;

    int*ptr = &num1;
    *ptr = num2;

    cout<<"ptr m.a is: "<<ptr<<endl;
    cout<<"ptr value is: "<<*ptr<<endl;

    cout<<"\n\n===================\n\n";
}
*/



/*
// ex 4
int main()
{
    int nums[]={100,200,300,400,500,600,700,800,900,1000};
    int*ptr = &nums[0];

    cout<<*ptr<<endl; // 100
    *ptr++;
    cout<<*ptr<<endl; // 200
    *ptr = *ptr + 1;
    cout<<*ptr<<endl; // 201
    *ptr = *(ptr + 1);
    cout<<*ptr<<endl; // 300
}
*/


/*
// ex 5
int main()
{
    int nums[]={100,200,300,400,500,600,700,800,900,1000};
    int*ptr = &nums[0];

    cout<<"index 0: "<<&nums[0]<<endl;
    cout<<"index 1: "<<&nums[1]<<endl;
    cout<<"index 2: "<<&nums[2]<<endl;
    cout<<"index 3: "<<&nums[3]<<endl;
    cout<<"index 4: "<<&nums[4]<<endl;
    cout<<"index 5: "<<&nums[5]<<endl;
    cout<<"index 6: "<<&nums[6]<<endl;
    cout<<"index 7: "<<&nums[7]<<endl;
    cout<<"index 8: "<<&nums[8]<<endl;

    cout<<ptr<<endl;
    *ptr = nums[1];
    cout<<ptr<<endl;

    ptr = &nums[2];
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
}

*/




/*
// ex 6
int main()
{
    int nums[]={100,200,300,400,500,600,700,800,900,1000};
    int*ptr = &nums[0];

    cout<<"index 0: "<<&nums[0]<<endl;
    cout<<"index 1: "<<&nums[1]<<endl;
    cout<<"index 2: "<<&nums[2]<<endl;
    cout<<"index 3: "<<&nums[3]<<endl;
    cout<<"index 4: "<<&nums[4]<<endl;
    cout<<"index 5: "<<&nums[5]<<endl;
    cout<<"index 6: "<<&nums[6]<<endl;
    cout<<"index 7: "<<&nums[7]<<endl;
    cout<<"index 8: "<<&nums[8]<<endl;

    cout<<"\n\n===================\n\n";

    cout<<ptr<<endl; // 100
    ptr++;
    cout<<ptr<<endl; // 200
    cout<<ptr+1<<endl; // 300
}
*/



/*
// ex 7
int main()
{
    int num = 100;
    void *ptr = &num;

    cout<<ptr<<endl;
    // cout<<*ptr<<endl; // Error

    cout<<"\n\n===================\n\n";

    cout<<*(int*)ptr<<endl;

    cout<<"\n\n===================\n\n";

    cout<<*(static_cast<int*>(ptr))<<endl;
}

*/











///////////////////////////////////////////////////////////////////////////////////////////////////////////



// Apps:








