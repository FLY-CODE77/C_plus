#include<iostream>
using namespace std;

int main()
{
    string s = "coffee";

    cout<<"Enter a string ";

    getline(cin, s);

    cout<<"You have entered : ";

    cout<<s<<endl;

    s.push_back('Y');
    cout<<"After using push back " << s <<endl;                                                                             

    s.pop_back();
    cout<<"After using pop back function " << s <<endl;

    return 0;
}