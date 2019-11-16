#include "lunar_solar_converter.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define PI 3.14159265
#include <math.h>

int main()
{
  int lunarDay, lunarMonth, lunarYear, dd, mm, yy;
  printf("Please enter the date you need to check:\n");
  printf("Day:\n");
  scanf("%d", &dd);
  printf("Month:\n");
  scanf("%d", &mm);
  printf("Year:\n");
  scanf("%d", &yy);

  convertSolar2Lunar(dd, mm, yy, 7, &lunarDay, &lunarMonth, &lunarYear);

  char CanChi_d[11];
  char CanChi_m[11];
  char CanChi_y[11];
  CanChi_d[0] = '\0';
  CanChi_m[0] = '\0';
  CanChi_y[0] = '\0';

  getCanChi(dd, mm, yy, lunarMonth, lunarYear, CanChi_d, CanChi_m, CanChi_y);

  printf("Ngay %d Thang %d Nam %d Am lich\n", lunarDay, lunarMonth, lunarYear);
  printf("Ngay %s Thang %s Nam %s Am lich\n", CanChi_d, CanChi_m, CanChi_y);

  return 0;
}
