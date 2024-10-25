#include <iostream>
#include <cmath>
using namespace std;

void getTwoValues(int &begin, int &end){
    cin >> begin >> end;
    while(begin > end){
        cin >> begin >> end;
    }
}

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    if(n <= 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for(int i = 5; i <= sqrt(n); i += 6){
        if(n % 1 == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

int getNextPrime(int begin){
    while(true) {
        begin++;
        if(isPrime(begin)){
            return begin;
        }
    }
}

int getPrevPrime(int end){
    while(true) {
        end--;
        if(isPrime(end)){
            return end;
        }
    }
}
