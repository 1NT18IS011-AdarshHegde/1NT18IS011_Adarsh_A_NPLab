#include<stdio.h>

int main(){
    int incoming, outgoing, buck_size, n, store = 0;
    printf("Enter no.of inputs, bucket size and output size: ");
    scanf("%d %d %d", &n, &buck_size, &outgoing);
    printf("\n");
    while (n != 0) {
        printf("Enter the incoming packet size : ");
        scanf("%d", &incoming);
        printf("Incoming packet size %d\n", incoming);
        if (incoming <= (buck_size - store)){
            store += incoming;
            printf("Bucket buffer size %d out of %d\n", store, buck_size);
        } else {
            printf("Dropped %d no of packets\n", incoming - (buck_size - store));
            printf("Bucket buffer size %d out of %d before\n", store, buck_size);
            store = buck_size;
            printf("Bucket buffer size %d out of %d after\n", store, buck_size);
        }
        store = store - outgoing;
        printf("After outgoing %d ,%d packets left out of %d in buffer\n",outgoing, store, buck_size);
        n--;
       printf("\n");
    }
}
