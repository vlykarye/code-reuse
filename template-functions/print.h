// REQUIRES
//
// #include <iostream>
// using namespace std;

// for any std container that implements a begin function
// doesn't work with: map, queue, ...
// for certain containers, _Get_container() may be used

template<typename CONTAINER, typename STREAM>
void print(CONTAINER const & c, STREAM & o)
{
     for ( auto a : c )
     {
          o << a;
     }
     o << endl;
}
