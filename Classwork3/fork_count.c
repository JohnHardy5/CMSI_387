#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    fork();

    fork();

    fork();
    printf("%d\n", getpid());

    return 0;
}
