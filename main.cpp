#include <iostream>
#include "statistics/Statistics.h"
int main() {
    Std std;
    Mean mean;
    Min min;
    Max max;
    std::cout << "Hello, World!" << std::endl;
//    for(int i = 0; i < 11; i++){
//        m.update(i);
//    }
//    std::cout << m.name() <<" "<<m.eval()<< std::endl;
    double next = 0;
    do{
        std::cin >> next;
        mean.update(next);
        max.update(next);
        min.update(next);
        std.update(next);
    }while(std::cin.get() != EOF);

    std::cout << mean.name() << " = " << mean.eval() <<std::endl;
    std::cout << min.name() << " = " << min.eval() <<std::endl;
    std::cout << max.name() << " = " << max.eval() <<std::endl;
    std::cout << std.name() << " = " << std.eval() <<std::endl;
    return 0;
}
