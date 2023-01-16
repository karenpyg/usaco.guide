#include <algorithm>
#include <vector> 
#include <string> 
#include <iostream> 

using namespace std; 

const int N=3; 
const int TURN_NUM = 100; 

int main(){
    vector<int> capacity(N); 
    vector<int> milk(N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &capacity[i], &milk[i]);
    }
    for (int i=0; i<TURN_NUM; i++){
        int b1 = i%N ;
        int b2 = (i + 1) % N;

        int amount = std::min(milk[b1], capacity[b2]-milk[b2]); 
        milk[b1] -= amount; 
        milk[b2] += amount; 

    }

    for(int m: milk){
        cout << m << '\n';
    }
}
