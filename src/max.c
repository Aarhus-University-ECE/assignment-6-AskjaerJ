#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size) {

int max = 0;

for(int i = 0; i < size; i++) {
    if(numbers[i] > max){
        max = numbers[i];
    }
}
    return max;
}
