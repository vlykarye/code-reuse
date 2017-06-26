// REQUIRES
//
// #include <iostream>
// #include <string>
// using namespace std;

// simple user prompting function

bool prompt(string & reply, char const * const message)
{
     cout << message << endl;
     getline(cin, reply);
     return !reply.empty();
}
