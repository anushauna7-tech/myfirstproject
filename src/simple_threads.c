#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// Function executed by Thread 1
void* print_hello(void* arg) {
    for (int i = 0; i < 3; i++) {
        printf("Thread 1: Hello!\n");
        sleep(1); // Sleep for 1 second
    }
    return NULL;
}

// Function executed by Thread 2
void* print_world(void* arg) {
    for (int i = 0; i < 3; i++) {
        printf("Thread 2: World!\n");
        sleep(1); // Sleep for 1 second
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Create the two threads
    if (pthread_create(&thread1, NULL, print_hello, NULL) != 0) {
        perror("Failed to create thread 1");
        return 1;
    }
    if (pthread_create(&thread2, NULL, print_world, NULL) != 0) {
        perror("Failed to create thread 2");
        return 1;
    }

    // Wait for both threads to finish execution
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Main thread: Both threads have finished execution.\n");
    return 0;
}


