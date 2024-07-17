#include <stdio.h>
#include "orimaco_bitops.h"

int main() {
    int num = 10; // Example number (1010 in binary)

    printf("Initial number: %d\n", num);

    // Test setting a bit
    set_bit(&num, 1); // Setting the 2nd bit (from right, zero-indexed)
    printf("After setting 2nd bit: %d\n", num);

    // Test clearing a bit
    clear_bit(&num, 3); // Clearing the 4th bit (from right, zero-indexed)
    printf("After clearing 4th bit: %d\n", num);

    // Test toggling a bit
    toggle_bit(&num, 0); // Toggling the 1st bit
    printf("After toggling 1st bit: %d\n", num);

    // Test checking a bit
    int bit_status = check_bit(num, 2); // Checking the 3rd bit (returns 1 if set)
    printf("Status of 3rd bit: %s\n", bit_status ? "Set" : "Not set");

    return 0;
}

