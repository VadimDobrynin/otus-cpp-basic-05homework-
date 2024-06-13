    cmake_minimum_required (VERSION 3.8)

    project(Statistic)

    set(SOURCE_FILES "Statistics.cpp")
    set(HEADER_FILES "IStatistics.h"
            Statistics.cpp
            Statistics.h)

    # We declare the project as a static library and add all the source code files to it.
    add_library(StatLibrary STATIC ${HEADER_FILES} ${SOURCE_FILES})