#include <string>
using namespace std;
string problemSolution3(char S,float height) {
    string res;
    if (S == 'M'){
        if (height <1.70) res = "Short";
        else if (height<1.85) res = "Normal";
        else res = "Tall";
    }else{
        if (height <1.60) res = "Short";
        else if (height<1.75) res = "Normal";
        else res = "Tall";
    }return res;

    // use return to return your result
    // make use of control flow statements
}