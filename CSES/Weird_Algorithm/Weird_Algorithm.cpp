//Riley Taylor
//December 2023
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

//Problem from CSES:
//https://cses.fi/problemset/task/1068

// Consider an algorithm that takes as input a positive integer n. 
// If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. 
// The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:

//recursive approach
//return statements not needed, could be made void, but I like tracking my recursive logic
int WeirdAlgorithm(long long n){
    if (n == 1){
        std::cout<< n << std::endl;
        return 1;
    }
    else if (n%2 == 0){
        std::cout<< n << std::endl;
        return WeirdAlgorithm(n/2);
    }
    else {
        std::cout<< n << std::endl;
        return WeirdAlgorithm(3*n + 1);
    }
}

//this can also be accomplished with a while loop

void WeirdAlgorithmWhile(long long n){
    long long num = n;
    while (num != 1){
        if (num%2 == 0){
            std::cout<< num << std::endl;
            num = num/2;
        }
        else{
            std::cout<< num << std::endl;
            num = 3*num + 1; 
        }
    }
    std::cout<< num << std::endl;
}

// main() is where program execution begins.
int main() {
    int test;
    std::cin >> test;
    
    //int result = WeirdAlgorithm(test);

    WeirdAlgorithmWhile(test);

    return 0;
}