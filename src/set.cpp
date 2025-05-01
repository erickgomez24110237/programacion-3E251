#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
set<int> conjunto1 = {1,2,3,4};
set<int> conjunto2 = {1,2};
set<int> conjunto3;
conjunto3.insert(conjunto1.begin(), conjunto1.end());
conjunto3.insert(conjunto2.begin(), conjunto2.end());



    return 0;
}