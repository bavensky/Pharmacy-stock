void checkstock() {
  lcd.setCursor(0, 0);
  lcd.print("   Pharmacy stock   ");
  lcd.setCursor(0, 1);
  lcd.print("RMUTL Senior Project");
  lcd.setCursor(0, 2);
  lcd.print("Mode 1 check stock  ");
  
  lcd.setCursor(0, 3);
  if (rfid1.isCard()) {
    if (rfid1.readCardSerial()) {
      lcd.print("Card found 1");
      Serial.println("Card found 1");
      serNum0 = rfid1.serNum[0];
      serNum1 = rfid1.serNum[1];
      serNum2 = rfid1.serNum[2];
      serNum3 = rfid1.serNum[3];
      serNum4 = rfid1.serNum[4];

      Serial.println("Cardnumber 1:");
      Serial.print("Dec: ");
      Serial.print(rfid1.serNum[0], DEC);
      Serial.print(", ");
      Serial.print(rfid1.serNum[1], DEC);
      Serial.print(", ");
      Serial.print(rfid1.serNum[2], DEC);
      Serial.print(", ");
      Serial.print(rfid1.serNum[3], DEC);
      Serial.print(", ");
      Serial.print(rfid1.serNum[4], DEC);
      Serial.println(" ");
    }
  }
  if (rfid2.isCard()) {
    if (rfid2.readCardSerial()) {
      lcd.print("Card found 1");
      Serial.println("Card found 2");
      serNum0 = rfid2.serNum[0];
      serNum1 = rfid2.serNum[1];
      serNum2 = rfid2.serNum[2];
      serNum3 = rfid2.serNum[3];
      serNum4 = rfid2.serNum[4];
      
      Serial.println("Cardnumber 2:");
      Serial.print("Dec: ");
      Serial.print(rfid2.serNum[0], DEC);
      Serial.print(", ");
      Serial.print(rfid2.serNum[1], DEC);
      Serial.print(", ");
      Serial.print(rfid2.serNum[2], DEC);
      Serial.print(", ");
      Serial.print(rfid2.serNum[3], DEC);
      Serial.print(", ");
      Serial.print(rfid2.serNum[4], DEC);
      Serial.println(" ");
    }
  }

  if (rfid1.serNum[0] == 136
      && rfid1.serNum[1] == 5
      && rfid1.serNum[2] == 53
      && rfid1.serNum[3] == 169
      && rfid1.serNum[4] == 17
     ) {
    Serial.println("CARD 1");
    clearCard();
    rfid1.halt();
  } else if (rfid1.serNum[0] == 136
             && rfid1.serNum[1] == 5
             && rfid1.serNum[2] == 57
             && rfid1.serNum[3] == 24
             && rfid1.serNum[4] == 172
            ) {
    Serial.println("CARD 2");
    clearCard();
    rfid1.halt();
  }

  rfid1.halt();
  rfid2.halt();
}
