#include <iostream>
#include "statistics/Statistics.h"
int main() {
    size_t statistics_count = 4;
    IStatistics* statistics[statistics_count];
    statistics[0] = new Min;
    statistics[1] = new Max;
    statistics[2] = new Mean;
    statistics[3] = new Std;
    std::cout << "statistics" << std::endl;
    double next = 0;
    do{
        std::cin >> next;
        for(auto item: statistics){
            item->update(next);
        }
    }while(std::cin.get() != EOF);

    for(auto item : statistics){
        std::cout << item->name() << " = " << item->eval() <<std::endl;
    }
    for(auto item: statistics){
        delete item;
    }
    return 0;
}
