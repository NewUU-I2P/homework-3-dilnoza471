#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    float con;
    cin>>con;
    cout << problemSolution1(con)<<endl;
    cout << "Problem 2\n";
    float i,j,k;
    cin>>i>>j>>k;
    cout<<problemSolution2(i,j,k)<<endl;
    cout << "Problem 3\n";
    char s;
    float h;
    cin>>s>>h;
    cout<<problemSolution3(h,s)<<endl;
    cout << "Problem 4\n";
    string mac;
    cin>>mac;
    cout<<problemSolution4(mac)<<endl;
    cout << "Problem 5\n";
    float x,y;
    char o;
    cin>>x>>o>>y;
    cout << problemSolution5(x,y,o)<<endl;
    return 0;
}