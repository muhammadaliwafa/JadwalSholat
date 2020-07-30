/* Library ini merupakan hasil modif dari WS_CalculateTime dari DF*/
#include <JadwalSholat.h>
void setup() {
    Serial.begin(115200);
    int Tahun = 2020, 
        Bulan = 7,
        Tgl =  30;
    float ZonaWaktu = 7, 
          Latitude = -6.2311, //jakarta
          Longitude = 106.7791, 
          Altitude = 45;
    sholatCal(Tahun, Bulan, Tgl, ZonaWaktu, Latitude, Longitude, Altitude); 
    for(int i=0; i<=7; i++){
    float   stime   = waktuSholat(i);
    uint8_t shour   = floor(stime);
    uint8_t sminute = floor((stime-(float)shour)*60);
    uint8_t ssecond = floor((stime-(float)shour-(float)sminute/60)*3600);
    char  out[21];
    sprintf(out, "sholat %01d %02d : %02d : %02d", i, shour, sminute, ssecond);
    Serial.println(out);
    }

}

void loop() {
 
}
