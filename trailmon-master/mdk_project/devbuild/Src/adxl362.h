/*
  Copyright (c) 2004-2016 The Trustees of Indiana University and Indiana
  University Research and Technology Corporation.

  All rights reserved.

  Additional copyrights may follow.
*/
#include <stdint.h>
#include <stdlib.h>

uint8_t adxl362_read_register (uint8_t address);
void adxl362_write_register (uint16_t address, uint8_t data);
void adxl362_init (void);
