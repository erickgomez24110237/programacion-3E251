#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    vector<string> nombres;
    nombres.emplace_back("Ramon");
    nombres.emplace_back("Segundo");
    nombres.emplace_back("Tercer");

    cout << nombres.at(0) << endl;
    for (auto &&nombre : nombres)
    {
        cout << nombre << endl;
    }
    


    return 0;
}