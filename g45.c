/*As you embark on this programming journey, develop a program that takes advantage of nested do-while loops to construct an enchanting pattern of numbers forming a captivating triangular arrangement!



The program takes a positive integer as input, representing the desired number of rows for the pattern, and prints the required pattern as shown in the below example using a do-while loop.



Example



Input:

5



Output:

1
12
123
1234
12345
Input format :
The input consists of an integer n, representing the desired number of rows for the pattern.

Output format :
The output prints the desired pattern based on the number of rows given.*/


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1;
    int j = 1;

    do {
        printf("%d", j);

        if (j == i) {
            printf("\n");
            i++;
            j = 1;
        } else {
            j++;
        }
    } while (i <= n);

    return 0;
}
