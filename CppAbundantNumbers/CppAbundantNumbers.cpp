//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <vector>

int main()
{
    int num;
    std::cout << "enter a number\n";
    std::cin >> num;
    
    std::cout << "Abundant numbers till your inputs are:\n";
    for(int i = 1 ; i<= num; ++i){
        int sum = 0;
        for(int j = 1; j < i ; ++j)
        {
            if (i % j == 0)
                sum += j;


        }
        if(sum>i)
        {
            std::cout << i << "\t";
        }
    }
}
