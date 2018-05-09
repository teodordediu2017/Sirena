
//********** Includes *************************************************************

//********** Variables ************************************************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduin

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
   
  delay(1000);
  tone(xiulet, 1000, 200);    // xiulet de durada valPot0
  delay(1000);

  tone(xiulet, 1000, 200);    // xiulet de durada valPot0
  delay(1000);
  
  tone(xiulet, 1000, 200);    // xiulet de durada valPot0
  delay(1000);
  
  tone(xiulet, 1000, 200);    // xiulet de durada valPot0
  delay(1000);
}

//********** Loop *****************************************************************
void loop()
{
 
  }

//********** Funcions *************************************************************

