#include<stdio.h>
#include<pthread.h>

void *sample(void *) { 
    printf("teste\n");
    return NULL; 
}

int main() {
    
    pthread_t tid;
    pthread_create(&tid, NULL, &sample, NULL); 
    pthread_join(tid, NULL);
    return 0;
}
