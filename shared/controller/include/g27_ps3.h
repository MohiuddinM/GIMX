/*
 Copyright (c) 2014 Mathieu Laurendeau <mat.lau@laposte.net>
 License: GPLv3
 */

#ifndef G27_PS3_H_
#define G27_PS3_H_

#include <control.h>

typedef enum
{
  g27Ps3a_wheel = rel_axis_lstick_x,
  g27Ps3a_select = abs_axis_0,
  g27Ps3a_start = abs_axis_1,
  g27Ps3a_ps = abs_axis_2,
  g27Ps3a_up = abs_axis_3,
  g27Ps3a_right = abs_axis_4,
  g27Ps3a_down = abs_axis_5,
  g27Ps3a_left = abs_axis_6,
  g27Ps3a_triangle = abs_axis_7,
  g27Ps3a_circle = abs_axis_8,
  g27Ps3a_cross = abs_axis_9,
  g27Ps3a_square = abs_axis_10,
  g27Ps3a_l1 = abs_axis_11,
  g27Ps3a_r1 = abs_axis_12,
  g27Ps3a_l2 = abs_axis_13,
  g27Ps3a_r2 = abs_axis_14,
  g27Ps3a_l3 = abs_axis_15,
  g27Ps3a_r3 = abs_axis_16,
  g27Ps3a_gasPedal = abs_axis_17,
  g27Ps3a_brakePedal = abs_axis_18,
  g27Ps3a_clutchPedal = abs_axis_19,
  g27Ps3a_l4 = abs_axis_20,
  g27Ps3a_r4 = abs_axis_21,
  g27Ps3a_l5 = abs_axis_22,
  g27Ps3a_r5 = abs_axis_23,
} e_g27Ps3_axis_index;

/*
 *
 */
typedef struct __attribute__ ((packed))
{
  unsigned char hatAndButtons; //4 LSB = hat, 4 MSB = buttons
  unsigned short buttons;
  unsigned short wheel; //big-endian, 14 MSB = axis
  unsigned char gasPedal;
  unsigned char brakePedal;
  unsigned char clutchPedal;
  unsigned char unknown[3];
} s_report_g27Ps3;

void g27Ps3_init_report(s_report_g27Ps3* g27Ps3);

#endif /* G27_PS3_H_ */
