//
// Created by vadim on 13.06.2024.
//
#include "Statistics.h"

///---------------------------------------------------------------------------------------------------------------------
void Min::update(double next){
        (min_val >= next) ? min_val = next : min_val;
}
const char* Min::name() const{
    return "Min";
}

double Min::eval() const{
    return min_val;
}
///---------------------------------------------------------------------------------------------------------------------
void Max::update(double next){
    if(count == 0){
        count++;
        max_val = next;
    }else {
        (max_val <= next) ? max_val = next : max_val;
    }
}
const char* Max::name() const{
    return "Max";
}
double Max::eval() const{
    return max_val;
}
///---------------------------------------------------------------------------------------------------------------------
void Mean::update(double next){
    mean_val+= next;
    count++;
}
const char* Mean::name() const{
    return "Mean";
}
double Mean::eval() const{
    return mean_val / count;
}
///---------------------------------------------------------------------------------------------------------------------
void Std::update(double next){
    mean.update(next);
    mass.push_back(next);
}
const char* Std::name() const{
    return "std";
}
double Std::eval() const{
    auto n = mass.size();
    auto m = mean.eval();
    auto summ = 0;
    for(auto item: mass){
        summ += pow(item - m,2);
    }
    return sqrt(summ / n);
}
///---------------------------------------------------------------------------------------------------------------------

