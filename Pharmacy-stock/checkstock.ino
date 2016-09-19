void checkstock() {
  lcd.setCursor(0, 0);
  lcd.print("   Pharmacy stock   ");
  lcd.setCursor(0, 1);
  lcd.print("RMUTL Senior Project");
  lcd.setCursor(0, 2);
  lcd.print("Mode 1 check stock  ");
  lcd.setCursor(0, 3);
  lcd.print("Scan slot = ");
  
  if (rfid1.isCard()) {
    if (rfid1.readCardSerial()) {
      lcd.print("1 ");
      //      Serial.println("Card found 1");
      serNum0 = rfid1.serNum[0];
      serNum1 = rfid1.serNum[1];
      serNum2 = rfid1.serNum[2];
      serNum3 = rfid1.serNum[3];
      serNum4 = rfid1.serNum[4];

//      Serial.println("Cardnumber 1:");
//      Serial.print("Dec: ");
//      Serial.print(rfid1.serNum[0], DEC);
//      Serial.print(", ");
//      Serial.print(rfid1.serNum[1], DEC);
//      Serial.print(", ");
//      Serial.print(rfid1.serNum[2], DEC);
//      Serial.print(", ");
//      Serial.print(rfid1.serNum[3], DEC);
//      Serial.print(", ");
//      Serial.print(rfid1.serNum[4], DEC);
//      Serial.println(" ");
    }
  }
  if (rfid2.isCard()) {
    if (rfid2.readCardSerial()) {
      lcd.print("2 ");
      //      Serial.println("Card found 2");
      serNum0 = rfid2.serNum[0];
      serNum1 = rfid2.serNum[1];
      serNum2 = rfid2.serNum[2];
      serNum3 = rfid2.serNum[3];
      serNum4 = rfid2.serNum[4];

      //      Serial.println("Cardnumber 2:");
      //      Serial.print("Dec: ");
      //      Serial.print(rfid2.serNum[0], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid2.serNum[1], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid2.serNum[2], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid2.serNum[3], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid2.serNum[4], DEC);
      //      Serial.println(" ");
    }
  }
  if (rfid3.isCard()) {
    if (rfid3.readCardSerial()) {
      lcd.print("3 ");
      //      Serial.println("Card found 2");
      serNum0 = rfid3.serNum[0];
      serNum1 = rfid3.serNum[1];
      serNum2 = rfid3.serNum[2];
      serNum3 = rfid3.serNum[3];
      serNum4 = rfid3.serNum[4];

      //      Serial.println("Cardnumber 3:");
      //      Serial.print("Dec: ");
      //      Serial.print(rfid3.serNum[0], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid3.serNum[1], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid3.serNum[2], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid3.serNum[3], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid3.serNum[4], DEC);
      //      Serial.println(" ");
    }
  }
  if (rfid4.isCard()) {
    if (rfid4.readCardSerial()) {
      lcd.print("4 ");
      //      Serial.println("Card found 2");
      serNum0 = rfid4.serNum[0];
      serNum1 = rfid4.serNum[1];
      serNum2 = rfid4.serNum[2];
      serNum3 = rfid4.serNum[3];
      serNum4 = rfid4.serNum[4];

      //      Serial.println("Cardnumber 4:");
      //      Serial.print("Dec: ");
      //      Serial.print(rfid4.serNum[0], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid4.serNum[1], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid4.serNum[2], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid4.serNum[3], DEC);
      //      Serial.print(", ");
      //      Serial.print(rfid4.serNum[4], DEC);
      //      Serial.println(" ");
    }
  }

  // check rfid card
  // card 1 = 246 
  // card 2 = 69 
  // card 3 = 181 
  // card 4 = 229

  /** check card stock 1 **/
  if (rfid1.serNum[0] == 246
      && rfid1.serNum[1] == 152
      && rfid1.serNum[2] == 93
      && rfid1.serNum[3] == 94
      && rfid1.serNum[4] == 109
     ) {
    stock[0] = 246;
    rfid1.halt();
  } else if (rfid2.serNum[0] == 246
             && rfid2.serNum[1] == 152
             && rfid2.serNum[2] == 93
             && rfid2.serNum[3] == 94
             && rfid2.serNum[4] == 109
            ) {
    stock[1] = 246;
    rfid2.halt();
  } else if (rfid3.serNum[0] == 246
             && rfid3.serNum[1] == 152
             && rfid3.serNum[2] == 93
             && rfid3.serNum[3] == 94
             && rfid3.serNum[4] == 109
            ) {
    stock[2] = 246;
    rfid3.halt();
  } else if (rfid4.serNum[0] == 246
             && rfid4.serNum[1] == 152
             && rfid4.serNum[2] == 93
             && rfid4.serNum[3] == 94
             && rfid4.serNum[4] == 109
            ) {
    stock[3] = 246;
    rfid4.halt();
  }

  /** check card stock 2 **/
  if (rfid1.serNum[0] == 69
      && rfid1.serNum[1] == 156
      && rfid1.serNum[2] == 212
      && rfid1.serNum[3] == 82
      && rfid1.serNum[4] == 95
     ) {
    stock[0] = 69;
    rfid1.halt();
  } else if (rfid2.serNum[0] == 69
             && rfid2.serNum[1] == 156
             && rfid2.serNum[2] == 212
             && rfid2.serNum[3] == 82
             && rfid2.serNum[4] == 95
            ) {
    stock[1] = 69;
    rfid2.halt();
  } else if (rfid3.serNum[0] == 69
             && rfid3.serNum[1] == 156
             && rfid3.serNum[2] == 212
             && rfid3.serNum[3] == 82
             && rfid3.serNum[4] == 95
            ) {
    stock[2] = 69;
    rfid3.halt();
  } else if (rfid4.serNum[0] == 69
             && rfid4.serNum[1] == 156
             && rfid4.serNum[2] == 212
             && rfid4.serNum[3] == 82
             && rfid4.serNum[4] == 95
            ) {
    stock[3] = 69;
    rfid4.halt();
  }
  
  /** check card stock 3 **/
  if (rfid1.serNum[0] == 181
      && rfid1.serNum[1] == 210
      && rfid1.serNum[2] == 66
      && rfid1.serNum[3] == 46
      && rfid1.serNum[4] == 11
     ) {
    stock[0] = 181;
    rfid1.halt();
  } else if (rfid2.serNum[0] == 181
             && rfid2.serNum[1] == 210
             && rfid2.serNum[2] == 66
             && rfid2.serNum[3] == 46
             && rfid2.serNum[4] == 11
            ) {
    stock[1] = 181;
    rfid2.halt();
  } else if (rfid3.serNum[0] == 181
             && rfid3.serNum[1] == 210
             && rfid3.serNum[2] == 66
             && rfid3.serNum[3] == 46
             && rfid3.serNum[4] == 11
            ) {
    stock[2] = 181;
    rfid3.halt();
  } else if (rfid4.serNum[0] == 181
             && rfid4.serNum[1] == 210
             && rfid4.serNum[2] == 66
             && rfid4.serNum[3] == 46
             && rfid4.serNum[4] == 11
            ) {
    stock[3] = 181;
    rfid4.halt();
  }

  /** check card stock 4 **/
  if (rfid1.serNum[0] == 229
      && rfid1.serNum[1] == 197
      && rfid1.serNum[2] == 206
      && rfid1.serNum[3] == 101
      && rfid1.serNum[4] == 139
     ) {
    stock[0] = 229;
    rfid1.halt();
  } else if (rfid2.serNum[0] == 229
             && rfid2.serNum[1] == 197
             && rfid2.serNum[2] == 206
             && rfid2.serNum[3] == 101
             && rfid2.serNum[4] == 139
            ) {
    stock[1] = 229;
    rfid2.halt();
  } else if (rfid3.serNum[0] == 229
             && rfid3.serNum[1] == 197
             && rfid3.serNum[2] == 206
             && rfid3.serNum[3] == 101
             && rfid3.serNum[4] == 139
            ) {
    stock[2] = 229;
    rfid3.halt();
  } else if (rfid4.serNum[0] == 229
             && rfid4.serNum[1] == 197
             && rfid4.serNum[2] == 206
             && rfid4.serNum[3] == 101
             && rfid4.serNum[4] == 139
            ) {
    stock[3] = 229;
    rfid4.halt();
  }


  // halt rfid
  clearCard();
  rfid1.halt();
  rfid2.halt();
  rfid3.halt();
  rfid4.halt();

  // move mode
  delay(2000);
  lcd.clear();
  mode = 2;
}
