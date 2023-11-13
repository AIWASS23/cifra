#include <stdio.h>

#define MAX 2000

int diophantine_minimise_x(int n);
int perfect_square(int n);
int custom_round(double x);
double custom_sqrt(double x);
int abs(int x);
int main();
int init_m(int n);


int main() {
        
    int max_x = 0;
    int max_d = 0;

    for(int D = 1; D <= MAX; D++){

        int x = diophantine_minimise_x(D);
        if(x > max_x) {
            max_x = x;
            max_d = D;
        }
    }
    printf("%d\n", max_d);
    return 0;
}


int init_m(int n) {

    int m = 1;
    int min_sol = n * n;
    int min_m = n * n;
    int last_k  = n * n;

    for( ; ; m++){
        int k = abs((m * m) - n);

        if(k < min_sol){
            min_sol = k;
            min_m = m;
        }

        if(k > last_k){
            break;
        }
        last_k = k;
    }
    return min_m;
}

int diophantine_minimise_x(int n) {
    if(perfect_square(n)) {
        return 0;
    }

    int m = init_m(n);
    int a = m;
    int b = 1;
    int k = (m * m) - n;
    int tmp_a;

    for( ; m < 1000; ) {

        if(k == 0){
            return 0;
        }

        if((a + b * m) % abs(k) != 0){
            m++;
            continue;
        }

        tmp_a = a;

        a = (tmp_a * m + (n * b)) / abs(k);
        b = (tmp_a + (b * m))/ abs(k);
        k = ((m * m) - n) / k;

        if(k == 1){
            break;
        }
        m = 2;
    }
    return a;
}


int perfect_square(int n) {
    int x = custom_round(custom_sqrt((double) n));
    return (x * x) == n;
}

int custom_round(double x) {
    if (x >= 0) {
        return (int)(x + 0.5);
    } else {
        return (int)(x - 0.5);
    }
}

double custom_sqrt(double x) {
    if (x < 0) {
        return -1.0;
    }

    double guess = x / 2.0;
    double prev_guess;
    do {
        prev_guess = guess;
        guess = (guess + x / guess) / 2.0;
    } while (prev_guess != guess);

    return guess;
}

int abs(int x) {
    return (x < 0) ? x * (-1) : x;
}