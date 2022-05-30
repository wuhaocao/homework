#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid)
{
    int tid = *((int *)threadid);
    cout << "Hello Runoob! Thread ID, " << tid << endl;
    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[NUM_THREADS];
    int indexes[NUM_THREADS];
    int rc;
    int i;
    for(i = 0; i < NUM_THREADS; i++){
        cout << "main(): Thread creating, " << i << endl;
        indexes[i] = i;
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&(indexes[i]));
        if(rc){
            cout << "Error: cannot create thread, " << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
