#include <unistd.h>

int main(int argc, char* const *argv, char* const *environ)
{
    char *args[] = {"/bin/cat", "--help", NULL};
    execve("/bin/cat", args, environ); // Unreachable
    return 1;
}