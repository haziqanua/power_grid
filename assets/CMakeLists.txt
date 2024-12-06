cmake_minimum_required(VERSION 3.10.0)
project(assets VERSION 0.1.0 LANGUAGES CXX)

set(HEADER_FILES 
AssetEnums.h
BaseAsset.h 
ResourceAsset.h
)

set(SOURCES 
BaseAsset.cpp 
ResourceAsset.cpp
)

add_library(assets ${SOURCES} ${HEADER_FILES})