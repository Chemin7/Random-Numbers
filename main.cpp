#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main() {

    uniform_real_distribution<float> distribution(-100.0,100.0);
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    ///Example
    for(int i=0;i < 10;i++){
        cout<<"Random number "<<i+1<<": "<<distribution(generator)<<endl;;
    }

    return 0;
    }
