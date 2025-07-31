#include <TFT_eSPI.h>
#include <SPI.h>

#define HALL_SENSOR_PIN 35

#define speakerPin 25

#define nextButtonPin 33
#define gamePin 32


TFT_eSPI tft = TFT_eSPI();

int currentLevel = 1;

void setup() {

  Serial.begin(115200);
  tft.init();
  tft.setRotation(3); // Portrait
  tft.fillScreen(TFT_BLACK);

  pinMode(HALL_SENSOR_PIN, INPUT);
  pinMode(nextButtonPin, INPUT_PULLUP);  // Button active LOW
  pinMode(gamePin, INPUT_PULLUP);  // Button active LOW
  
  pinMode(speakerPin, OUTPUT);
  
  showLevel(currentLevel);
  playStartTune();
}

void loop() {

  if (isPieceDetected()) { // depends on your sensor output
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_GREEN);
    int y = 60;
    tft.drawString("level", 10, y);
    y += 30; // next line
    tft.drawString("Completed", 10, y);
    y += 30;
    tft.drawString("Successfully!", 10, y);
    
    playSuccessMelody();
    delay(5000);

    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_GREEN);
    int x = 60;
    tft.drawString("move", 40, x);
    x += 30; // next line
    tft.drawString("to next", 40, x);
    x += 30;
    tft.drawString("level", 40, x);

    waitForNextButton(); 

    currentLevel++;

    if (currentLevel > 10){
      tft.fillScreen(TFT_BLACK);
      tft.setTextColor(TFT_GREEN);
      int y = 60;
      tft.drawString("levels", 10, y);
      y += 30; // next line
      tft.drawString("Finished", 10, y);
      y += 30;
      tft.drawString("start from", 10, y);
      y += 30; // next line
      tft.drawString("Beginning", 10, y); 

      // restart button
      waitForNextButton();

      currentLevel = 1; // Loop back to Level 1
    } 
    
    showLevel(currentLevel);  // External file function
    
    playStartTune();
    // game start krne ka button
    waitForGameButton();
    delay(2000);
  }

  // delay(1000);
}

bool isPieceDetected() {
    return digitalRead(HALL_SENSOR_PIN) == LOW ;
}

void playSuccessMelody() {
  tone(speakerPin, 523, 200); delay(250);  // C5
  tone(speakerPin, 659, 200); delay(250);  // E5
  tone(speakerPin, 784, 300); delay(350);  // G5
  tone(speakerPin, 1046, 400); delay(450); // C6
  noTone(speakerPin); // stop sound
}

void playStartTune() {
  tone(speakerPin, 659, 200);   // E5
  delay(220);
  tone(speakerPin, 784, 200);   // G5
  delay(220);
  tone(speakerPin, 880, 200);   // A5
  delay(220);
  tone(speakerPin, 659, 300);   // E5
  delay(300);
  tone(speakerPin, 988, 500);   // B5
  delay(500);
  noTone(speakerPin);           // Stop tone
}
  
void waitForNextButton() {
  // Wait until button is pressed
  while(digitalRead(nextButtonPin) == HIGH) {
    delay(10);
  }
  // Debounce delay
  delay(200);
} 

void waitForGameButton() {
  // Wait until button is pressed
  while(digitalRead(gamePin) == HIGH) {
    delay(10);
  }
  // Debounce delay
  delay(200);
} 