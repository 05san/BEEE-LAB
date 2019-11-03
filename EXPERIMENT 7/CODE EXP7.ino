  
#include<LiquidCrystal.h>

 LiquidCrystal lcd(12,11,5,4,3,2);
  
void setup()
{
  lcd.begin(16,2);    
}

void loop()
{
  lcd.setCurser(1,0);
  lcd.print("HELLO WORLD!");
  lcd.setCurser(1,1);
  lcd.print("BYE WORLD!");
  delay(5000);
  lcd.clear();
}