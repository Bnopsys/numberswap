#include <iostream>

void print_array(int, int[]);
int main(){
    // creates test case and also defines size of array
    int test_array[] = {5, 7, 8, 9};
    int array_size = sizeof(test_array) / sizeof(test_array[0]);

    std::cout << "Initial Array: ";
    print_array(array_size, test_array);
    
    while (true){
        int modified_counter = 0;
        for (int i = 0;i < array_size;i++){
            if (test_array[i] < test_array[i+1]){
                int current_val = test_array[i];
                test_array[i] = test_array[i+1];
                test_array[i+1] = current_val;
                modified_counter += 1;
            }
        }
        if (modified_counter == 0){
            break;
        }
    }
    std::cout << "Ending Array: ";
    print_array(array_size, test_array);
    
    return 0;
}

void print_array(int array_size, int array[]){
    for (int i = 0;i < array_size;i++){
        std::cout << array[i];
    }
    std::cout << std::endl;
}
