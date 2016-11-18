void printallstock()  {
  lcd.setCursor(0, 0);
  lcd.print("slot1: ");
  printslot1();
  lcd.setCursor(0, 1);
  lcd.print("slot2: ");
  printslot2();
  lcd.setCursor(0, 2);
  lcd.print("slot3: ");
  printslot3();
  lcd.setCursor(0, 3);
  lcd.print("slot4: ");
  printslot4();

}

// card 1 = 246   Paracetamol
// card 2 = 69    Aspirin
// card 3 = 181   Tincture
// card 4 = 229   Alcohol

void printslot1() {
  if (stock[0] == 246)  {
    lcd.print("Paracetamol");
  } else if (stock[0] == 69) {
    lcd.print("Aspirin");
  } else if (stock[0] == 181) {
    lcd.print("Tincture");
  } else if (stock[0] == 229) {
    lcd.print("Alcohol");
  } else {
    lcd.print(" - ");
  }
}
void printslot2() {
  if (stock[1] == 246)  {
    lcd.print("Paracetamolara");
  } else if (stock[1] == 69) {
    lcd.print("Aspirin");
  } else if (stock[1] == 181) {
    lcd.print("Tincture");
  } else if (stock[1] == 229) {
    lcd.print("Alcohol");
  } else {
    lcd.print(" - ");
  }
}
void printslot3() {
  if (stock[2] == 246)  {
    lcd.print("Paracetamol");
  } else if (stock[2] == 69) {
    lcd.print("Aspirin");
  } else if (stock[2] == 181) {
    lcd.print("Tincture");
  } else if (stock[2] == 229) {
    lcd.print("Alcohol");
  } else {
    lcd.print(" - ");
  }
}
void printslot4() {
  if (stock[3] == 246)  {
    lcd.print("Paracetamol");
  } else if (stock[3] == 69) {
    lcd.print("Aspirin");
  } else if (stock[3] == 181) {
    lcd.print("Tincture");
  } else if (stock[3] == 229) {
    lcd.print("Alcohol");
  } else {
    lcd.print(" - ");
  }
}


