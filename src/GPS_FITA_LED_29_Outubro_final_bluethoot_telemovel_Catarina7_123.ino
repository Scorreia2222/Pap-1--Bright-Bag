
#include <Adafruit_NeoPixel.h>
#define PIN 10
Adafruit_NeoPixel strip = Adafruit_NeoPixel (100, PIN, NEO_GBR + NEO_KHZ800);


void setup(){
  strip.begin(); 
  strip.show(); 
 
 }
  
  void loop(){

   

   for(int i=0;i<85;i++){
  strip.setPixelColor(i, strip.Color(,150,150));
  strip.show(); } }
  



  
