#ifndef DEF_LunarSolarConverter
#define DEF_LunarSolarConverter

double jdFromDate(int dd, int mm, int yy);
double getNewMoonDay(double k, double timeZone);
double getSunLongitude(double jdn, double timeZone);
double getLunarMonth11(int yy, double timeZone);
double getLeapMonthOffset(double a11, double timeZone);
void convertSolar2Lunar(int dd, int mm, int yy, double timeZone, int *lunarDay, int *lunarMonth, int *lunarYear);
char *getChiNam(int lunar_y);
char *getCanNam(int lunar_y);
char *getCanNgay(int dd, int mm, int yy);
char *getChiNgay(int dd, int mm, int yy);
char *getChiThang(int lunar_m);
char *getCanThang(int lunar_m, int lunar_y);
void getCanChi(int dd, int mm, int yy, int lunar_m, int lunar_y, char CanChi_d[], char CanChi_m[], char CanChi_y[]);

void convertSolar2Lunar_test();
void getCanChi_test();

#endif
