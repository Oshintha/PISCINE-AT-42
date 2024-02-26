#include <unistd.h>

// Function to convert string to integer
int ft_atoi(char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Handle negative sign if present
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    // Convert each character to integer
    while (str[i] != '\0') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

void rush(int x, int y);

int main(int argc, char *argv[]) {
    // Check if there are at least three arguments (program name and x and y)
    if (argc >= 3) {
        // Convert command-line argument(s) to integers
        int x = ft_atoi(argv[1]);
        int y = ft_atoi(argv[2]);

        // Call the rush function
        rush(x, y);
    return 0;
}
}
