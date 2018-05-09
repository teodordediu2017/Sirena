
/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino
const int pot1 = A1;
int valPot0;                // guardar valor del potenciometre
int valPot1; 

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 
  valPot1 = analogRead(pot1);
  
  tone(xiulet, 800, valPot0);    // xiulet de durada valPot0
  delay(valPot1);              // esperar valPot0 del xiulet + valPot0 silenci
}

//********** Funcions *************************************************************



