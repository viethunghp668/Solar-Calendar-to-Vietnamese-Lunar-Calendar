#include "lunar_solar_converter.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define PI 3.14159265
#include <math.h>

void convertSolar2Lunar_test()
{
  int dd[7] = {4, 16, 31, 1, 30, 23, 31};
  int mm[7] = {3, 7, 12, 1, 4, 7, 12};
  int yy[7] = {900, 2019, 2199, 2000, 1975, 1993, 2097};
  int result_d[7] = {1, 14, 14, 25, 20, 5, 28};
  int result_m[7] = {2, 6, 11, 11, 3, 6, 11};
  int result_y[7] = {900, 2019, 2199, 1999, 1975, 1993, 2097};
  int lunarDay = 0, lunarMonth = 0, lunarYear = 0;

  for(int i = 0; i < 7; i++)
  {
    convertSolar2Lunar(dd[i], mm[i], yy[i], 7, &lunarDay, &lunarMonth, &lunarYear);
    if(lunarDay != result_d[i] || lunarMonth != result_m[i] || lunarYear != result_y[i])
    {
      printf("Wrong: Lunar Day: %d => %d\nLunar Month: %d => %d\nLunar Year: %d => %d\n", lunarDay, result_d[i], lunarMonth, result_m[i], lunarYear, result_y[i]);
    }
    else
    {
      printf("Right\n");
    }
  }
}

void getCanChi_test()
{
  int dd[7] = {4, 16, 31, 1, 30, 23, 31};
  int mm[7] = {3, 7, 12, 1, 4, 7, 12};
  int yy[7] = {900, 2019, 2199, 2000, 1975, 1993, 2097};
  int lunar_m[7] = {2, 6, 11, 11, 3, 6, 11};
  int lunar_y[7] = {900, 2019, 2199, 1999, 1975, 1993, 2097};
  char true_CanChi_d[7][11] = {"Ky Mui", "Giap Dan", "Binh Tuat", "Mau Ngo", "Binh Ngo", "At Ty", "Nham Thin"};
  char true_CanChi_m[7][11] = {"Ky Mao", "Tan Mui", "Binh Ty'", "Binh Ty'", "Canh Thin", "Ky Mui", "Nham Ty'"};
  char true_CanChi_y[7][11] = {"Canh Than", "Ky Hoi", "Ky Hoi", "Ky Mao", "At Mao", "Quy Dau", "Dinh Ty"};

  char CanChi_d[11];
  char CanChi_m[11];
  char CanChi_y[11];
  CanChi_d[0] = '\0';
  CanChi_m[0] = '\0';
  CanChi_y[0] = '\0';

  for(int i = 0; i < 7; i++)
  {
    getCanChi(dd[i], mm[i], yy[i], lunar_m[i], lunar_y[i], CanChi_d, CanChi_m, CanChi_y);
    if (strcmp(CanChi_d, true_CanChi_d[i]) != 0 || strcmp(CanChi_m, true_CanChi_m[i]) != 0 || strcmp(CanChi_y, true_CanChi_y[i]) != 0)
    {
      printf("Wrong: Lunar Day: %s => %s\nLunar Month: %s => %s\nLunar Year: %s => %s\n", CanChi_d, true_CanChi_d[i], CanChi_m, true_CanChi_m[i], CanChi_y, true_CanChi_y[i]);
    }
    else
    {
      printf("Right\n");
    }
    CanChi_d[0] = '\0';
    CanChi_m[0] = '\0';
    CanChi_y[0] = '\0';
  }
}
