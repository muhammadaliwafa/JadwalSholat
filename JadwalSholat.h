#ifndef  JadwalSholat_h
#define JadwalSholat_h

#include "Arduino.h"

  float waktuSholat(int i);
  void sholatCal(int Year,int Month,int Days, float TimeZone, float Latitude, float Longitude, float Altitude);
  float E_Julian_date(int Year,int Month,int Days,float Longitude);
  float EqT(const float EJD);
  float Dql(float EJD);
  float HourAngle( float Alfa, float Declination, float Latitude);
  void Pray_Time(float TimeZone, float Latitude, float Longitude, float Altitude, float Declination, float EquationOfTime );
  float fix_hour(float a);
  float fix_angle(float a);
  //long Days(uint16_t Y,uint8_t M,uint8_t D);
  //long DaysHijri(uint16_t Y,uint8_t M,uint8_t D);
  //hijir_date toHijri(uint16_t Y, uint8_t M, uint8_t D,uint8_t cor);
  


#endif
