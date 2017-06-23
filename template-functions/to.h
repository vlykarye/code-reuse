// REQUIRES
//
// #include <sstream>
// using namespace std;

// for anything stringstream can handle
template<typename TO, typename FROM>
TO to(FROM const & a)
{
    TO b;
    stringstream ss;
    ss << a;
    ss >> b;
    return b;
}
