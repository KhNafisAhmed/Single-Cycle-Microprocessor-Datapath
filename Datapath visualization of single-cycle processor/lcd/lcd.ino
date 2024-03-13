// #include < Wire .h> we are removing this because it is already added in liquid crystal library
#include <LiquidCrystal_I2C.h>
 
// Create the lcd object address 0x3F and 16 columns x 2 rows 
LiquidCrystal_I2C lcd (0x27, 16,2);  //
 
void  setup () {
   // Initialize the LCD connected 
 
  
  
}
 
void  loop () {
    //Here cursor is placed on first position (col: 0) of the second line (row: 1) 
  lcd. setCursor (0, 1);
   // We write the number of seconds elapsed 
  //lcd. print ( millis () / 1000);
  //lcd. print ( "SECONDS" );

    lcd. begin (16,2);
  lcd.init();
  lcd.clear();
  // Turn on the backlight on LCD. 
  lcd. backlight ();
  
  // print the Message on the LCD. 
  lcd. print ( "ADD R1, R2, R3" );
  delay(36000);
  lcd.clear();
  lcd. print ( "STR R1, [R2, #4]" );
  delay(32000);
  lcd.clear();

  lcd.clear();
  lcd. print ( "B FUNCTION" );
  delay(36000);
  lcd.clear();
  lcd. print ( "SUB R1, R2, R3" );
  delay(36000);
  lcd.clear();
  lcd. print ( "CMP R1, R2" );
  delay(36000);
  lcd.clear();
  lcd. print ( "MOV R1, #3" );
  delay(36000);
  lcd.clear();
  lcd. print ( "LDR R1, R2" );
  delay(40000);
  lcd.clear();

  delay (4000);
  
  }
