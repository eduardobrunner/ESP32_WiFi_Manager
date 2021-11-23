
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLEn8CUErI"
#define BLYNK_DEVICE_NAME "WMTest"
#define BLYNK_AUTH_TOKEN "Q_BVb8au-HMx937ARxMtS4RIFyOCDnyc"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_WROVER_BOARD
//#define USE_TTGO_T7

#include "BlynkEdgent.h"

char auth[] = BLYNK_AUTH_TOKEN;
// char ssid[] = configStore.wifiSSID;
// char pass[] = configStore.wifiPass;

BLYNK_WRITE(V0)
{
  // Set incoming value from pin V0 to a variable
  int value = param.asInt();

  // Update state
  Blynk.virtualWrite(V1, value);
  Serial.printf("Blynk V1 payload: %d \n", value);
}

BLYNK_CONNECTED()
{
  // Change Web Link Button message to "Congratulations!"
  // Blynk.setProperty(V3, "offImageUrl", "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations.png");
  // Blynk.setProperty(V3, "onImageUrl",  "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations_pressed.png");
  // Blynk.setProperty(V3, "url", "https://docs.blynk.io/en/getting-started/template-quick-setup");
  Serial.println("Blynk connected!.");
}

void setup()
{
  Serial.begin(115200);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {

  BlynkEdgent.run();
}
