// Watermelon

#include <iostream>
using namespace std;

int main(){
    int weight;
    cin >> weight;
    if (weight%2==0 && weight>2)    // Coz if 2 then 1-1 which are odd, otherwise %2==0.
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}