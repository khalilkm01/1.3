#ifndef FUNCS_H
#define FUNCS_H

// for random
#include <chrono>
#include <random>

// adds up all the values in the array
int sum_of_array(const int array[], int n);

// squares all the values in the array
void square_array(int array[], int n);

// this returns a random number in the range
int get_random_number(int low, int high);

int get_min_value(const int array[], int n);
int get_max_value(const int array[], int n);
int get_occurrence_value(const int array[], int n, int num);


#endif