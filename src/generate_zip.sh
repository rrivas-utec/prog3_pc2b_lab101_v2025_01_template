#!/usr/bin/env bash

project_name='prog3_pc2b_lab101_v2025_01'
source_code='
  geo_map.h geo_map.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}