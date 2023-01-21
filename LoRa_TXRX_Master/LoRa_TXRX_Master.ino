


#include "WROVER_KIT_LCD.h"
#include "SPI.h"

WROVER_KIT_LCD tft;  // create object tft


void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
   tft.begin(); 
   tft.setRotation(0);
   tft.fillScreen(WROVER_BLACK);
   tft.setCursor(0, 0);
   tft.setTextColor(WROVER_YELLOW);  tft.setTextSize(1);
   tft.println("..........LoRa Trasmitter..........");

}

void loop() {
  // put your main code here, to run repeatedly:
 

}
