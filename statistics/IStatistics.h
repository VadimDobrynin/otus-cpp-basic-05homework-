//
// Created by vadim on 13.06.2024.
//

#ifndef OTUS_CPP_BASIC_05HOMEWORK__ISTATISTICS_H
#define OTUS_CPP_BASIC_05HOMEWORK__ISTATISTICS_H

/*!
 * Интерфейс классов по расчёту статистики
 */

class IStatistics{
public:
    virtual void update(double next) = 0;
    virtual double eval() const = 0;
    virtual const char* name() const = 0;
    virtual ~IStatistics(){}
};

#endif //OTUS_CPP_BASIC_05HOMEWORK__ISTATISTICS_H
