#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // The "secret" key
    char secret[] = "p4ssw0rd123";

    if (argc != 2) {
        printf("Usage: %s <key>\n", argv[0]);
        return 1;
    }

    // Comparing user input to the secret
    if (strcmp(argv[1], secret) == 0) {
        printf("Access Granted! Flag: CTF{gdb_is_p0werful}\n");
    } else {
        printf("Access Denied. Try again!\n");
    }

    return 0;
}
