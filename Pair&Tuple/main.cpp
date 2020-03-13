#include <iostream>
#include <utility>
#include <tuple>


using namespace std;

int main()
{
    pair<string, int> p("homework ", 1000);

    tuple<int , double, char> t(10,10.5,'c');

    cout << "My "<< p.first << "finished in "<< p.second<< " minutes" << endl;
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t)<< endl;

    return 0;
}
