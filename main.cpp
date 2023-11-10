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
    problemSolution1(con);
    cout << "Problem 2\n";
    float i,j,k;
    cin>>i>>j>>k;
    problemSolution2(i,j,k);
    cout << "Problem 3\n";
    char s;
    float h;
    cin>>s>>h;
    problemSolution3(s,h);
    cout << "Problem 4\n";
    string mac;
    cin>>mac;
    problemSolution4(mac);
    cout << "Problem 5\n";
    float x,y;
    char o;
    cin>>x>>o>>y;
    problemSolution5(x,y,o);
    return 0;
}