#include <stdexcept>
using namespace std;

class OutOfRangeException: public runtime_error{
    public:
        OutOfRangeException(string msg):runtime_error(msg){}
};
