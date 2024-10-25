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
    if(n == 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
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
