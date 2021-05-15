#include <iostream>
#include <pthread.h>
#include <unistd.h>

void *thread(void* var) {
    int* p = (int*)var;
    *p = 2;
    return ((void *)0);
}


int main() {
    int a = 1;
    pthread_t tid;

    pthread_create(&tid, NULL, thread, (void*)&a);
    sleep(2);

    std::cout << "a = " << a << std::endl;
    return 0;
}
