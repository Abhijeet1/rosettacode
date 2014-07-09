#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int i = 10;
    int *pi = &i;
    cout << "Value of i =" << i << endl;
    cout << "Address of i = " << &i <<endl;
    cout << "***** Setting the Address ******" << endl;
    int& j = *(int*) &i;
    cout << " J value = " << j <<endl;
    return 0;
}
