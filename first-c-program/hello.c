// Program 1

// #include <stdio.h> /*imports standard i/o library, giving us access to i/o functions like the printf() function used below*/

// int main(void) {
//     printf("Hello, World!"); /*function runs here*/
//     /*understanding function invocation; why there is no return value defined, and we pass a string. No argument specified*/
// }

// Program 2

// #include <stdio.h>

// int main(void) {
//     int age = 0;
//     age = 37.2;
//     printf("%u", age);
// }

// Program 3

// #include <stdio.h>

// int main(void) {
//     unsigned char j = 255;
//     j = j + 10;
//     printf("%u", j); /* 9 */
// }

// Prgram 4

// #include <stdio.h>

// int main(void) {
//     char j = 127;
//     j = j + 10;
//     printf("%u", j);
// }

// Program 5

// #include <stdio.h>

// int main(void) {
//     char j = 0;
//     j += 1000;
//     printf("%u", j);
// }

// Program to determine the specific size of different types in bytes

#include <stdio.h>

int main(void) {
    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("short size: %lu bytes\n", sizeof(short));
    printf("long size: %lu bytes\n", sizeof(long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));
}

