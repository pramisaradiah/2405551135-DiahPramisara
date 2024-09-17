#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int isPrime(int N) {
    // Jika N kurang dari atau sama dengan 1, maka bukan bilangan prima
    if (N <= 1) {
        return 0;
    }

    // Memeriksa faktor dari 2 hingga akar kuadrat dari N
    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            return 0; // Jika ditemukan faktor selain 1 dan N, maka bukan bilangan prima
        }
    }

    return 1; // Jika tidak ditemukan faktor, maka bilangan prima
}

int main() {
    int N;
    
    // Input sebuah bilangan N
    scanf("%d", &N);
    
    // Memeriksa apakah N adalah bilangan prima atau bukan
    if (isPrime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
