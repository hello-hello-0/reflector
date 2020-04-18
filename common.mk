MAKE:=make
RM:=/bin/rm -rf

CUDA_PATH:=/usr/local/cuda

CURRENT_DIR=$(shell pwd)
PROJECT_TOP_DIR=${CURRENT_DIR}
export PROJECT_TOP_DIR

PROJECT_INC_PATH=${CURRENT_DIR}/src/include
PROJECT_CFLAGS=-O3 -g -std=c++11 -I${PROJECT_INC_PATH} -I${CURRENT_DIR}/src

CC:=gcc
CFLAGS:=${PROJECT_CFLAGS} -I${CUDA_PATH}/include

XX:=g++
CXXFLAGS:=${PROJECT_CFLAGS} -I${CUDA_PATH}/include

LD:=g++
AR:=ar crf

NVCC:=${CUDA_PATH}/bin/nvcc

NVCC_CFLAGS:=${PROJECT_CFLAGS} -I${CUDA_PATH}/include 
NVCC_LDFLAGS += -Wl,-rpath -Wl,${CUDA_PATH}/lib64 -Wl,--enable-new-dtags -L${CUDA_PATH}/lib64

export RM
export LD
export AR

export CC
export CFLAGS

export XX
export CXXFLAGS

export NVCC
export NVCC_CFLAGS
export NVCC_LDFLAGS
