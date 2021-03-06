#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <RFID.h>
#include <SPI.h>
#include <Password.h>
#include <Keypad.h>

Password password = Password( "1" );

#define SS_PIN1 49
#define RST_PIN1 47
#define SS_PIN2 45
#define RST_PIN2 43
#define SS_PIN3 41
#define RST_PIN3 39
#define SS_PIN4 37
#define RST_PIN4 35

LiquidCrystal_I2C lcd(0x27, 20, 4);

RFID rfid1(SS_PIN1, RST_PIN1);
RFID rfid2(SS_PIN2, RST_PIN2);
RFID rfid3(SS_PIN3, RST_PIN3);
RFID rfid4(SS_PIN4, RST_PIN4);

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {10, 9, 8, 7};
byte colPins[COLS] = {6, 5, 4, 3};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

byte mode = 0;
int stock[5];
byte _lcdcolum = 16;

int serNum0;
int serNum1;
int serNum2;
int serNum3;
int serNum4;

/**   เคลียค่าที่อ่านจาก rfid   **/
void clearCard()  {
  rfid1.serNum[0] = 0;
  rfid1.serNum[1] = 0;
  rfid1.serNum[2] = 0;
  rfid1.serNum[3] = 0;
  rfid1.serNum[4] = 0;

  rfid2.serNum[0] = 0;
  rfid2.serNum[1] = 0;
  rfid2.serNum[2] = 0;
  rfid2.serNum[3] = 0;
  rfid2.serNum[4] = 0;

  rfid3.serNum[0] = 0;
  rfid3.serNum[1] = 0;
  rfid3.serNum[2] = 0;
  rfid3.serNum[3] = 0;
  rfid3.serNum[4] = 0;

  rfid4.serNum[0] = 0;
  rfid4.serNum[1] = 0;
  rfid4.serNum[2] = 0;
  rfid4.serNum[3] = 0;
  rfid4.serNum[4] = 0;
}

/**   โหมดการทำงานทั้งหมด   **/
void keypadEvent(KeypadEvent eKey) {
  switch (keypad.getState()) {
    case PRESSED:
      Serial.print("Pressed: ");
      Serial.println(eKey);
      lcd.setCursor(_lcdcolum, 3);
      lcd.print(eKey);
      _lcdcolum++;

      switch (eKey) {
        case '*': checkPassword(); break;
        //        case '#': password.reset(); break;
        default: password.append(eKey);
      }
  }
}

/**   เช็ค password  **/
void checkPassword() {
  if (password.evaluate()) {
    Serial.println("Success");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("   Pharmacy stock   ");
    lcd.setCursor(0, 1);
    lcd.print("WELCOME...");
    password.reset(); // clear key password
    _lcdcolum = 16; // reset count print colume lcd
    mode = 1;
  } else {
    Serial.println("Wrong");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("   Pharmacy stock   ");
    lcd.setCursor(0, 1);
    lcd.print("Try Agian...");
    password.reset(); // clear key password
    _lcdcolum = 16; // reset count print colume lcd
    mode = 0;
  }
}

/**   โหมดการทำงานหลัก   **/
void setup() {
  Serial.begin(115200);
  lcd.begin();
  lcd.backlight();
  keypad.addEventListener(keypadEvent);
  delay(200);
  SPI.begin();
  rfid1.init();
  rfid2.init();
  rfid3.init();
  rfid4.init();
  delay(1000);

  // fix mode for debug
  mode = 1;
}

void loop() {
  keypad.getKey();

  // select mode
  if (mode == 0)  {
    mainscreen();
  } else if (mode == 1)  {
    checkstock();
  } else if (mode == 2)  {
    printallstock();
  }
}



