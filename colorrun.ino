#include <EasyNeoPixels.h>
int NOLED=300; //Enter number of LED's

void setup() {
  // put your setup code here, to run once:
    setupEasyNeoPixels(13, NOLED);
}

void loop() {
  for (int i=0; i <= NOLED; i++){
    writeEasyNeoPixel(i, 228, 0, 0);
    delay(5);
  }
  delay(200);
  for (int i=0; i <= NOLED; i++){
    writeEasyNeoPixel(i, 0, 228, 0);
    delay(5);
  }
}
