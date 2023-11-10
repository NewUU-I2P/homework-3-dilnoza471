#include <string>
#include <sstream>
using namespace std;
string problemSolution4(const std::string &macAddress) {
    string res;
    if (macAddress.substr(0,2) == "FF") res = "Broadcast";
    else{
        char n = macAddress[1];
        switch(n){
            case 0:
            case 2:
            case 4:
            case 6:
            case 8:
            case 'A':
            case 'C':
            case 'E':
                res = "Unicast";
                break;
            default:
                res = "Multicast";

        }
    }return res;

    // make use of control flow statements
    // return result;
}
