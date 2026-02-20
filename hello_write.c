#include <unistd.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    const char msg[] = "Hello, world from write!\n";
    write(STDOUT_FILENO, msg, 26);
    return 0;
}