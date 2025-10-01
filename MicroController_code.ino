//include the library code:
#include <LiquidCrystal.h>

//initialize the library by associating any needed LCD interface pin
//with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);

}

void loop() 
{
     float v = analogRead(A0);
     Serial.print(v);
     Serial.print("  ||  ");
     float volt = (v*5)/(1024);
     Serial.print(volt);
     Serial.print("  ||  ");
     float temp;
     temp= 5.5*volt*volt*volt-15*volt*volt+21*volt+19;
     float t;
     if(35<temp<47)
     {
          t= temp+2;
          Serial.println(t);
          lcd.setCursor(1,0);
          lcd.print("Temperature");
          lcd.setCursor(0,1);
          lcd.print(t);
          lcd.print("degree");
          delay(1000);
     }
     else if(78<temp<80)
     {
        t= temp+3;
          Serial.println(t);
          lcd.setCursor(1,0);
          lcd.print("Temperature");
          lcd.setCursor(0,1);
          lcd.print(t);
          lcd.print("degree");
          delay(1000);    
     }
     else
     {
       t= temp;
          Serial.println(t); 
          lcd.setCursor(1,0);
          lcd.print("Temperature");
          lcd.setCursor(0,1);
          lcd.print(t);
          lcd.print("degree");
          delay(1000);   
     }

}
