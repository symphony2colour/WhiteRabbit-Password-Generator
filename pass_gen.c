#include <stdio.h>
#include <stdlib.h>

const char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

void generate_password(unsigned long long seed) {
    srand((unsigned int)seed);
    char password[21] = {0};
    for (int i = 0; i < 20; i++) {
        int r = rand() % 62;
        password[i] = charset[r];
    }
    printf("%s\n", password);
}

int main() {
    unsigned long long base_seed = 1725028842ULL * 1000ULL;
    for (unsigned long long i = 0; i < 1000; i++) {
        generate_password(base_seed + i);
    }
    return 0;
}
