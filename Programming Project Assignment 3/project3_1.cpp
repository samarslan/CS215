#include <stdio.h>

int mode(int *array, int size) {
    int mode_count = 0;
    int mode_value = -1;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (*(array + j) == *(array + i))
                count++;
        }
        if (count > mode_count) {
            mode_count = count;
            mode_value = *(array + i);
        }
    }

    if (mode_count <= 1)
        return -1;
    else
        return mode_value;
}

int main() {
    int array1[] = {3, 4, 15, 6, 6, 7, 53, 9, 6, 770, 131, 6};
    int array2[] = {122, 3212, 354, 534, 535, 536, 647, 6428, 5329, 64210, 86411, 5612};
    int array3[] = {1, 1, 1, 1, 3, 3, 4, 4, 5, 5, 6, 6};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = sizeof(array3) / sizeof(array3[0]);

    printf("Mode of array1: %d\n", mode(array1, size1));
    printf("Mode of array2: %d\n", mode(array2, size2));
    printf("Mode of array3: %d\n", mode(array3, size3));

    return 0;
}