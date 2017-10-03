#!/bin/sh

MLT_PROJ_ROOT_PATH=$(pwd)
MLT_LIB_OUTPUR_PATH=${MLT_PROJ_ROOT_PATH}/../../lib/mltframework

cd ${MLT_PROJ_ROOT_PATH} \
&& ./configure --prefix="${MLT_LIB_OUTPUR_PATH}" --enable-debug --enable-gpl --enable-gpl3 \
&& make \
&& make install 
