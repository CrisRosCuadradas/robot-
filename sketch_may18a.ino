#include<IRremote.h>
IRrecv IR(11);

void setup() {
  // put your setup code here, to run once:
IR.enableIRIn();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(IR.decode())
serial.printin(IR.decodedIRData.decodedRawData, HEX);
delay(1500) 
IR.resume();
}
