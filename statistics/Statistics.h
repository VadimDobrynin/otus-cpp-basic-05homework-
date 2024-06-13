//
// Created by vadim on 13.06.2024.
//

#ifndef OTUS_CPP_BASIC_05HOMEWORK__STATISTICS_H
#define OTUS_CPP_BASIC_05HOMEWORK__STATISTICS_H

#include "IStatistics.h"
#include <vector>
#include <cmath>
#include <limits>

class Min : public IStatistics{
public:
    Min(): min_val{std::numeric_limits<double>::max()}{}
    void update(double next) override;
    const char* name() const override;
    double eval() const override;
private:
    double min_val;
};

class Max : public IStatistics{
public:
    Max(): max_val{std::numeric_limits<double>::min()}{}
    void update(double next) override;
    const char* name() const override;
    double eval() const override;
private:
    double max_val;
};

class Mean : public IStatistics{
public:
    Mean(): mean_val{0.0}, count{0} {}
    void update(double next) override;
    const char* name() const override;
    double eval() const override;
private:
    double mean_val;
    size_t count;
};

class Std : public IStatistics{
public:
    Std(){}
    void update(double next) override;
    const char* name() const override;
    double eval() const override;
private:
    Mean mean;
    std::vector<double> mass;
};

#endif //OTUS_CPP_BASIC_05HOMEWORK__STATISTICS_H
