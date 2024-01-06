#include <stdio.h>
int main() {
    int k, roomNumberList[1000], i, captainRoom = 0;
    printf("Enter the size of each group (K): ");
    scanf("%d", &k);
    printf("Enter the unordered room number list (Enter 0 to end): ");
    i = 0;
    int l=0;
    do {
        scanf("%d", &roomNumberList[i]);
        i++;
        l++;
    } while (roomNumberList[i - 1] != 0);
    for (i = 0; i<l; i++)
     {
        captainRoom ^= roomNumberList[i];
     }
    printf("Captain's room number is: %d\n", captainRoom);
    return 0;
}