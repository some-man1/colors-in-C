#include <stdio.h>

// ANSI escape codes for text colors
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    printf(ANSI_COLOR_GREEN "This is green text.\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_BLUE "This is blue text.\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW  "This is red text.\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "This is green text.\n" ANSI_COLOR_RESET);
    printf( ANSI_COLOR_CYAN  "This is blue text.\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RESET "This is green text.\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED "This is red text.\n" ANSI_COLOR_RESET);

    return 0;
}
