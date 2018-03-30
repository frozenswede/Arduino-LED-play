#include <Adafruit_NeoPixel.h>

  # define PIN 13
int NOLED=600; 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NOLED, PIN);

void setup() {
  // put your setup code here, to run once:
strip.begin(); // Initialize all pixels to 'off'
strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:

}
