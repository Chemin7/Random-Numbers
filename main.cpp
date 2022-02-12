#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main() {

    ///Format
    ///uniform_type-of-data-_distribution<type of data> distribution<minNum,maxNum>
    ///unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    ///std::default_random_engine generator(seed);
    ///


    ///Type of data:
    ///Integers - int : 2,87,-12
    ///Real - real : 4.67,0.123,-6.8912

    uniform_int_distribution<int> distribution(-100,100);
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    ///Example
    for(int i=0;i < 10;i++){
        cout<<"Random number "<<i+1<<": "<<distribution(generator)<<endl;;
    }

    return 0;
    }
