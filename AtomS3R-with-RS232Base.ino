#include "M5AtomS3.h"

void setup() {
 M5.begin();
 //Atomic RS232 Base
 //UART_RX  -> AtomS3R G5
 //UART_TX  -> AtomS3R G6
 //Serial2.begin(unsigned long baud, uint32_t config, int8_t rxPin, int8_t txPin, bool invert)
 Serial2.begin(9600, SERIAL_8N1, 5, 6);  
 Serial.begin(115200);
}

void loop() {
 if(Serial2.available()){
  int coms = Serial2.read();
  Serial.write(coms);
 }
 if(Serial.available()){
  Serial2.write(Serial.read());
 }
}
