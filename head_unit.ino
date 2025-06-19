#include <TFT_eSPI.h> // Automatically includes SPI library

TFT_eSPI tft = TFT_eSPI();  // TFT instance

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Starting Hello World test...");

  tft.init();               // Initialize TFT
  tft.setRotation(1);       // Landscape (0–3)
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);  
  tft.setTextSize(2);
  tft.setCursor(20, 40);
  tft.println("Hello, World!");

  Serial.println("Display should show 'Hello, World!'");
}

void loop() {
  // Nothing here
}
