#include <math.h>
#include <pthread.h>
#include <stdio.h>

#define NUM_RECT 10000000
#define NUMTHREADS 4

double gPi = 0.0;
pthread_mutex_t gLock;

void *Area(void *pArg) {
  int myNum = *((int *)pArg);
  double h = 2.0 / NUM_RECT;
  double somaparcial = 0.0, x;

  for (int i = myNum; i < NUM_RECT; i += NUMTHREADS) {
    x = -1 + (i + 0.5f) * h;
    somaparcial += sqrt(1.0 - x * x) * h;
  }
  pthread_mutex_lock(&gLock);
  gPi += somaparcial;
  pthread_mutex_unlock(&gLock);
  return 0;
}

int main(int argc, char **argv) {

  pthread_t tHandles[NUMTHREADS];
  int tNum[NUMTHREADS], i;
  pthread_mutex_init(&gLock, NULL);
  for (i = 0; i < NUMTHREADS; ++i) {
    tNum[i] = i;
    pthread_create(&tHandles[i], NULL, Area, (void *)&tNum[i]);
  }
  for (i = 0; i < NUMTHREADS; ++i) {
    pthread_join(tHandles[i], NULL);
  }
  gPi *= 2.0;
  printf("Quantidade de threads: %d\n", NUMTHREADS);
  printf("Valor aproximado de pi computado:%12.9f\n", gPi);
  pthread_mutex_destroy(&gLock);


    int i;
    double pi;
    double factor = 1.0;
    double sum = 0.0;

    for (i = 0; i <= 100; i++, factor = -factor) {
        sum += factor/(2*i+1);
    }

    pi = 4.0*sum;

    printf("Valor aproximado de pi: %f\n", pi);


  return 0;
}