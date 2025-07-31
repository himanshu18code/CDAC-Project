void showLevel(int currentLevel) {
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.setTextSize(2);

  if (currentLevel == 1) {                                          //current level 1
    tft.drawString("Level 1 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(50, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 190, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(130, 70, 39, 79, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(50, 110, 79, 79, TFT_BLUE);
  }
  
  else if (currentLevel == 2) {                             //current level 2
    tft.drawString("Level 2 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(50, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 190, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(90, 150, 39, 79, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(90, 70, 79, 79, TFT_BLUE);
  } 
  
  else if (currentLevel == 3) {                                   //current level 3
    tft.drawString("Level 3 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(50, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 190, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(90, 150, 39, 79, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(90, 30, 79, 79, TFT_BLUE);
  }

  else if (currentLevel == 4) {                                 //current level 4
    tft.drawString("Level 4 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(50, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 190, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(170, 110, 39, 79, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(130, 30, 79, 79, TFT_BLUE);
  }


  else if (currentLevel == 5) {                             // current level 5
    tft.drawString("Level 5 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(50, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 190, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(130, 190, 79, 39, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(50, 110, 79, 79, TFT_BLUE);
  }


  else if (currentLevel == 6) {                             // current level 6
    tft.drawString("Level 6 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(50, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 190, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(50, 190, 79, 39, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(50, 70, 79, 79, TFT_BLUE);
  }


  else if (currentLevel == 7) {                               //current level 7
    tft.drawString("Level 7 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(130, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(370, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 190, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(50, 150, 79, 39, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(50, 30, 79, 79, TFT_BLUE);
  }


  else if (currentLevel == 8) {                                 //current level 8
    tft.drawString("Level 8 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(50, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50,110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 190, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(90, 150, 79, 39, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(90, 30, 79, 79, TFT_BLUE);
  }


  else if (currentLevel == 9) {                                    //current level 9
    tft.drawString("Level 9 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(50, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 70, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 150, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(130, 190, 79, 39, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(50, 110, 79, 79, TFT_BLUE);
  }


  else if (currentLevel == 10) {                                      //current level 10
    tft.drawString("Level 10 Pattern", 10, 10);
    // Draw border
    tft.drawRect(48,28, 164,204, TFT_GREEN);
    //yellow slide
    delay(400);
    tft.fillRect(90, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 30, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 110, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 150, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(50, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(90, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(130, 190, 39, 39, TFT_CYAN);
    delay(400);
    tft.fillRect(170, 190, 39, 39, TFT_CYAN);
    //blue slide
    delay(400);
    tft.fillRect(50, 70, 79, 39, TFT_RED);
    delay(400);
    tft.fillRect(130, 70, 79, 39, TFT_RED);
    //red slide
    delay(400);
    tft.fillRect(90, 110, 79, 79, TFT_BLUE);
  }

}