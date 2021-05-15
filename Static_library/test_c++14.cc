#include <vector>
#include <algorithm>

void foo( int )
{
}

int main()
{
  std::vector< int > v( { 1,2,3 } );

  std::for_each( v.begin(), v.end(), []( auto it ) { foo( it+5 ); } );
}
