// RandGenerator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "num_threads.h"
#include "interface.h"
#include "experiment.h"
#include <omp.h>
#include <iostream>

int main() {

    unsigned T = get_num_threads();
    size_t N = 10000000;
    unsigned *V = new unsigned[N];
    run_experiments_for(V, N, randomize, 10, 100);

    return 0;
}