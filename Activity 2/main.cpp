//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "funcs.h"

int main() {
  // print a random number
  int random_value = get_random_number(0,100);
  std::cout << "Random number = " << random_value << std::endl;
  
  // create array and initialise
  int array[5] = {1, 2, 3, 4, 5};
  // pass the array to the function (and its size) so we can calculate the sum
  int sum = sum_of_array(array, 5);
  std::cout << "Sum = " << sum << std::endl;
  // now pass to a function to square each value
  square_array(array, 5);
  for (int i = 0; i < 5; i++) {
    array[i] = get_random_number(0,100);
    std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  // calculate the new sum
  sum = sum_of_array(array, 5);
  std::cout << "New sum = " << sum << std::endl;

  int min_value = get_min_value(array,5);
  std::cout << "Minimum value = " << min_value << "\n";


  //Activity Start
  int n = 20;
  int *my_array = new int[n];

  for (int i = 0; i < n; i++){
    int rand = get_random_number(0,10);
    if (get_random_number(0,100) %rand ==0){
      my_array[i] = 7;
    }
    else{
      my_array[i] = get_random_number(0,100);
    }
    std::cout << my_array[i] << "\n";
  }

  std::cout  << "Minimum value = "  << get_min_value(my_array,n) << "\n";
  std::cout  << "Maximum value = "  << get_max_value(my_array,n) << "\n";
  std::cout << "The number 7 appears: " << get_occurrence_value(my_array,n,7) << " times \n";

  delete[] my_array;
  my_array = nullptr;
}
