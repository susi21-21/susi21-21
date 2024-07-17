#include "orimaco_bitops.h"

// Function to set a bit at a specified position
void set_bit(int *num, int position) {
    *num |= (1 << position);
}

// Function to clear a bit at a specified position
void clear_bit(int *num, int position) {
    *num &= ~(1 << position);
}

// Function to toggle a bit at a specified position
void toggle_bit(int *num, int position) {
    *num ^= (1 << position);
}

// Function to check if a bit at a specified position is set
int check_bit(int num, int position) {
    return (num >> position) & 1;
}

