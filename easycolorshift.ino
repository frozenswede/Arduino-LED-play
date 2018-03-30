#include <EasyNeoPixels.h>
//Enter number of LED's
// Maximum is 613!
// At about 30 pixels incremental switching starts to show. So good for max 20 pixels, unless a sliding effect is wanted.

int NOLED=10; 
int colormax=255; //maximum brightness is 255.

void setup() {
  // put your setup code here, to run once:
    setupEasyNeoPixels(13, NOLED);
}

void loop() {
  for (int i=0; i <= colormax; i++){
    for (int j=0; j <= NOLED; j++){
      writeEasyNeoPixel(j, colormax, i, 0);
    } 
  }
}
