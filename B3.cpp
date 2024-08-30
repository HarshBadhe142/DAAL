// Implement a problem of minimum work to be done per day to finish given tasks within D days problem.
// Given an array task[] of size N denoting amount of work to be done for each task, the problem is to find the minimum amount of work to be done on each day so that all the tasks can be completed in at most D days. Note: On one day work can be done for only one task.
// Input: task[] = [3, 4, 7, 15], D = 10 Output: 4

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if all the task can be completed by 'per_day' number of tasks per day
bool valid(int per_day, vector<int> task, int d)
{
    // Variable to store days required to do all tasks
    int our_day = 0;
    for (int index = 0; index < task.size(); index++)
    {
        int day_req = ceil((double)(task[index])/(double)(per_day);
        cur_day += day_req;

        // If more days required then invalid 

        if(cur_day > d)
        {
            return false;
        }
    }

    // Valid if days are less than or equal to d 
    return cur_day <= d;
}