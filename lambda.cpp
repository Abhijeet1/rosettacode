// compile with: cl /EHsc /nologo /W4 /MTd
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#if __cplusplus <= 199711L
  #error This library needs at least a C++11 compliant compiler
#endif

static const int num_threads = 10;

//This function will be called from a thread

void call_from_thread(int tid) {
    std::cout << "Launched by thread " << tid << std::endl;
}

int main() 
{
std::thread t[num_threads];
   static_assert(0==0,"p is not null");
	auto x = 7;
	char* p = nullptr;
   // Print the count of even numbers to the console.
   cout << "There are " ;
   vector<int> vec;
vec.push_back( 10 );
vec.push_back( 20 );
 
for (int i : vec ) 
{
    cout << i <<endl;
}
}
