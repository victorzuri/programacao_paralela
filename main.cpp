#include <stdio.h>
#include <pthread.h>

int num = 10;
int num_inc;
int num2;

void* quadrado(void*) {
    num2 = num * num;
    printf("Numero ao quadrado: %d\n", num2);
    return NULL; // Retorne NULL ou outro valor apropriado
}

void* incremento(void*){
    for(num_inc  = 10; num_inc < 12; num_inc++){
        printf("Incrementando numero\n");
    }
    return 0;
}

int main() {
    pthread_t th1, th2;
    pthread_create(&th1, NULL, quadrado, NULL);
    pthread_create(&th2, NULL, incremento, NULL);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    printf("Numero ao quadrado é: %d e o numero incrementado é: %d\n", num2, num_inc);
    return 0;
}
