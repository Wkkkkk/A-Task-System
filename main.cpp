#include <iostream>
#include <vector>

#include "task_system.h"

int main() {
    std::vector<int> res;
    res.resize(10000);
    {
        task_system tasksystem;

        // Enqueue work.
        for (int i = 0; i < res.size(); i++) {
            // These work items simply increment the element at index i.
            tasksystem.async_([i, &res] { res[i]++; });
        }

        // Stop consumers, and wait for the threads to finish
    }

    // Test if all work items were executed
    for (int i = 0; i < res.size(); i++) {
        if (res[i] != 1)
            printf("ERROR: Index %d set to %d\n", i, res[i]);
    }

    return 0;
}