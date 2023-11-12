#include <string>
#include <sstream>
using namespace std;
string problemSolution4(const std::string &macAddress) {
    string res;
    if (macAddress.substr(0,2) == "FF") res = "Broadcast";
    else{
        char n = macAddress[1];
        switch(n){
            case '0':
                res = "Unicast";
                break;
            case '2':
                res = "Unicast";
                break;
            case '4' :
                res = "Unicast";
                break;
            case '6':
                res = "Unicast";
                break;
            case '8':
                res = "Unicast";
                break;
            case 'A':
                res = "Unicast";
                break;
            case 'C':
                res = "Unicast";
                break;
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
