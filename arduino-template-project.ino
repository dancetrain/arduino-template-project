
#include "Application.h"
#include "Macros.h"

Application* app;

void setup() {
    Serial.begin(9600);

    F("Application setup.");
    app = new Application();
    app->setup();

    
    
    F("Application setup done.");
}

void loop() {
    app->loop();
    delay(100);
}