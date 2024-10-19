#include "pre_pwm.h"

const pre_pwm_table_entry table_entry_trapez[63] = {
  {/*   0:     0 */ 83, 50, 16359, 1},  {/*   1:    83 */ 82, 50, 20473, 1},  {/*   2:   165 */ 83, 50, 24538, 1},
  {/*   3:   248 */ 83, 50, 28653, 1},  {/*   4:   331 */ 82, 0, 32767, 0},   {/*   5:   413 */ 83, 0, 32767, 0},
  {/*   6:   496 */ 83, 0, 32767, 0},   {/*   7:   579 */ 62, 0, 32767, 0},   {/*   8:   641 */ 21, 0, 32767, 0},
  {/*   9:   662 */ 19, 0, 32767, 0},   {/*  10:   681 */ 63, 0, 32767, 0},   {/*  11:   744 */ 83, 0, 32767, 0},
  {/*  12:   827 */ 83, 0, 32767, 0},   {/*  13:   910 */ 62, 0, 32767, 0},   {/*  14:   972 */ 20, 0, 32767, 0},
  {/*  15:   992 */ 20, 0, 32767, 0},   {/*  16:  1012 */ 63, 0, 32767, 0},   {/*  17:  1075 */ 83, 0, 32767, 0},
  {/*  18:  1158 */ 82, 0, 32767, 0},   {/*  19:  1240 */ 63, 0, 32767, 0},   {/*  20:  1303 */ 20, 0, 32767, 0},
  {/*  21:  1323 */ 20, 0, 32767, 0},   {/*  22:  1343 */ 63, 0, 32767, 0},   {/*  23:  1406 */ 82, 0, 32767, 0},
  {/*  24:  1488 */ 83, 0, 32767, 0},   {/*  25:  1571 */ 83, 0, 32767, 0},   {/*  26:  1654 */ 82, -50, 32767, 1},
  {/*  27:  1736 */ 83, -50, 28702, 1}, {/*  28:  1819 */ 83, -50, 24588, 1}, {/*  29:  1902 */ 83, -50, 20473, 1},
  {/*  30:  1985 */ 82, -50, 16359, 1}, {/*  31:  2067 */ 83, -50, 12294, 1}, {/*  32:  2150 */ 83, -50, 8179, 1},
  {/*  33:  2233 */ 82, -50, 4065, 1},  {/*  34:  2315 */ 1, 0, 0, 0},        {/*  35:  2316 */ 82, 0, 0, 0},
  {/*  36:  2398 */ 83, 0, 0, 0},       {/*  37:  2481 */ 82, 0, 0, 0},       {/*  38:  2563 */ 63, 0, 0, 0},
  {/*  39:  2626 */ 20, 0, 0, 0},       {/*  40:  2646 */ 20, 0, 0, 0},       {/*  41:  2666 */ 63, 0, 0, 0},
  {/*  42:  2729 */ 82, 0, 0, 0},       {/*  43:  2811 */ 83, 0, 0, 0},       {/*  44:  2894 */ 62, 0, 0, 0},
  {/*  45:  2956 */ 21, 0, 0, 0},       {/*  46:  2977 */ 19, 0, 0, 0},       {/*  47:  2996 */ 63, 0, 0, 0},
  {/*  48:  3059 */ 83, 0, 0, 0},       {/*  49:  3142 */ 83, 0, 0, 0},       {/*  50:  3225 */ 62, 0, 0, 0},
  {/*  51:  3287 */ 21, 0, 0, 0},       {/*  52:  3308 */ 19, 0, 0, 0},       {/*  53:  3327 */ 63, 0, 0, 0},
  {/*  54:  3390 */ 83, 0, 0, 0},       {/*  55:  3473 */ 83, 0, 0, 0},       {/*  56:  3556 */ 82, 0, 0, 0},
  {/*  57:  3638 */ 1, 0, 0, 0},        {/*  58:  3639 */ 82, 50, 0, 1},      {/*  59:  3721 */ 83, 50, 4065, 1},
  {/*  60:  3804 */ 82, 50, 8179, 1},   {/*  61:  3886 */ 83, 50, 12244, 1},  {0, 0, 0, 0}};

/*
duration  slope slope_acc_start use_cfg_on
*/
const pre_pwm_table_entry table_entry_flat_bottom[63] = {
  {/*   0:     0 */ 83, 43, 16350, 1},  {/*   1:    83 */ 82, 39, 19929, 0},  {/*   2:   165 */ 83, 34, 23128, 0},
  {/*   3:   248 */ 83, 29, 25970, 0},  {/*   4:   331 */ 82, 23, 28364, 0},  {/*   5:   413 */ 83, 17, 30249, 0},
  {/*   6:   496 */ 83, 10, 31639, 0},  {/*   7:   579 */ 62, 4, 32483, 0},   {/*   8:   641 */ 21, 1, 32748, 0},
  {/*   9:   662 */ 19, -1, 32767, 0},  {/*  10:   681 */ 63, -4, 32753, 0},  {/*  11:   744 */ 83, -10, 32493, 0},
  {/*  12:   827 */ 83, -17, 31659, 0}, {/*  13:   910 */ 62, -22, 30279, 0}, {/*  14:   972 */ 20, -25, 28906, 0},
  {/*  15:   992 */ 20, 23, 28403, 0},  {/*  16:  1012 */ 63, 22, 28857, 0},  {/*  17:  1075 */ 83, 17, 30259, 0},
  {/*  18:  1158 */ 82, 10, 31645, 0},  {/*  19:  1240 */ 63, 4, 32479, 0},   {/*  20:  1303 */ 20, 1, 32749, 0},
  {/*  21:  1323 */ 20, -1, 32767, 0},  {/*  22:  1343 */ 63, -4, 32752, 0},  {/*  23:  1406 */ 82, -10, 32490, 0},
  {/*  24:  1488 */ 83, -17, 31666, 0}, {/*  25:  1571 */ 83, -23, 30289, 0}, {/*  26:  1654 */ 82, -29, 28390, 0},
  {/*  27:  1736 */ 83, -34, 26033, 0}, {/*  28:  1819 */ 83, -39, 23202, 0}, {/*  29:  1902 */ 83, -43, 19970, 1},
  {/*  30:  1985 */ 82, -46, 16395, 1}, {/*  31:  2067 */ 83, -49, 12584, 0}, {/*  32:  2150 */ 83, -51, 8512, 0},
  {/*  33:  2233 */ 82, -52, 4293, 0},  {/*  34:  2315 */ 1, 0, 52, 0},       {/*  35:  2316 */ 82, 0, 0, 0},
  {/*  36:  2398 */ 83, 0, 0, 0},       {/*  37:  2481 */ 82, 0, 0, 0},       {/*  38:  2563 */ 63, 0, 0, 0},
  {/*  39:  2626 */ 20, 0, 0, 0},       {/*  40:  2646 */ 20, 0, 0, 0},       {/*  41:  2666 */ 63, 0, 0, 0},
  {/*  42:  2729 */ 82, 0, 0, 0},       {/*  43:  2811 */ 83, 0, 0, 0},       {/*  44:  2894 */ 62, 0, 0, 0},
  {/*  45:  2956 */ 21, 0, 0, 0},       {/*  46:  2977 */ 19, 0, 0, 0},       {/*  47:  2996 */ 63, 0, 0, 0},
  {/*  48:  3059 */ 83, 0, 0, 0},       {/*  49:  3142 */ 83, 0, 0, 0},       {/*  50:  3225 */ 62, 0, 0, 0},
  {/*  51:  3287 */ 21, 0, 0, 0},       {/*  52:  3308 */ 19, 0, 0, 0},       {/*  53:  3327 */ 63, 0, 0, 0},
  {/*  54:  3390 */ 83, 0, 0, 0},       {/*  55:  3473 */ 83, 0, 0, 0},       {/*  56:  3556 */ 82, 0, 0, 0},
  {/*  57:  3638 */ 1, 0, 0, 0},        {/*  58:  3639 */ 82, 52, 0, 0},      {/*  59:  3721 */ 83, 51, 4242, 0},
  {/*  60:  3804 */ 82, 49, 8462, 0},   {/*  61:  3886 */ 83, 47, 12488, 1},  {0, 0, 0, 0}};

const pre_pwm_table_entry table_entry_svm[63] = {
  {/*   0:     0 */ 83, 45, 16383, 1},  {/*   1:    83 */ 82, 44, 20101, 0},  {/*   2:   165 */ 83, 43, 23711, 0},
  {/*   3:   248 */ 83, 40, 27240, 0},  {/*   4:   331 */ 82, 11, 30575, 0},  {/*   5:   413 */ 83, 8, 31515, 0},
  {/*   6:   496 */ 83, 5, 32207, 0},   {/*   7:   579 */ 62, 2, 32627, 0},   {/*   8:   641 */ 21, 0, 32758, 0},
  {/*   9:   662 */ 19, 0, 32766, 0},   {/*  10:   681 */ 63, -2, 32759, 0},  {/*  11:   744 */ 83, -5, 32627, 0},
  {/*  12:   827 */ 83, -8, 32207, 0},  {/*  13:   910 */ 62, -11, 31515, 0}, {/*  14:   972 */ 20, -13, 30827, 0},
  {/*  15:   992 */ 20, 12, 30575, 0},  {/*  16:  1012 */ 63, 11, 30821, 0},  {/*  17:  1075 */ 83, 8, 31520, 0},
  {/*  18:  1158 */ 82, 5, 32211, 0},   {/*  19:  1240 */ 63, 2, 32625, 0},   {/*  20:  1303 */ 20, 0, 32758, 0},
  {/*  21:  1323 */ 20, 0, 32767, 0},   {/*  22:  1343 */ 63, -2, 32758, 0},  {/*  23:  1406 */ 82, -5, 32625, 0},
  {/*  24:  1488 */ 83, -8, 32211, 0},  {/*  25:  1571 */ 83, -11, 31520, 0}, {/*  26:  1654 */ 82, -40, 30562, 0},
  {/*  27:  1736 */ 83, -43, 27261, 0}, {/*  28:  1819 */ 83, -44, 23733, 0}, {/*  29:  1902 */ 83, -45, 20079, 1},
  {/*  30:  1985 */ 82, -45, 16361, 1}, {/*  31:  2067 */ 83, -44, 12687, 0}, {/*  32:  2150 */ 83, -43, 9033, 0},
  {/*  33:  2233 */ 82, -40, 5505, 0},  {/*  34:  2315 */ 1, 0, 2204, 0},     {/*  35:  2316 */ 82, -11, 2185, 0},
  {/*  36:  2398 */ 83, -8, 1246, 0},   {/*  37:  2481 */ 82, -5, 555, 0},    {/*  38:  2563 */ 63, -2, 141, 0},
  {/*  39:  2626 */ 20, 0, 8, 0},       {/*  40:  2646 */ 20, 0, 0, 0},       {/*  41:  2666 */ 63, 2, 8, 0},
  {/*  42:  2729 */ 82, 5, 141, 0},     {/*  43:  2811 */ 83, 8, 555, 0},     {/*  44:  2894 */ 62, 11, 1246, 0},
  {/*  45:  2956 */ 21, 13, 1933, 0},   {/*  46:  2977 */ 19, -13, 2191, 0},  {/*  47:  2996 */ 63, -11, 1951, 0},
  {/*  48:  3059 */ 83, -8, 1251, 0},   {/*  49:  3142 */ 83, -5, 559, 0},    {/*  50:  3225 */ 62, -2, 139, 0},
  {/*  51:  3287 */ 21, 0, 8, 0},       {/*  52:  3308 */ 19, 0, 0, 0},       {/*  53:  3327 */ 63, 2, 7, 0},
  {/*  54:  3390 */ 83, 5, 139, 0},     {/*  55:  3473 */ 83, 8, 559, 0},     {/*  56:  3556 */ 82, 11, 1251, 0},
  {/*  57:  3638 */ 1, 0, 2191, 0},     {/*  58:  3639 */ 82, 40, 2224, 0},   {/*  59:  3721 */ 83, 43, 5526, 0},
  {/*  60:  3804 */ 82, 44, 9055, 0},   {/*  61:  3886 */ 83, 45, 12665, 1},  {0, 0, 0, 0}};
