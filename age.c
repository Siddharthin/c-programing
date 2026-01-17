#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age); // Make sure to pass &age
    printf("Age is: %d\n", age);
    return 0;
}
