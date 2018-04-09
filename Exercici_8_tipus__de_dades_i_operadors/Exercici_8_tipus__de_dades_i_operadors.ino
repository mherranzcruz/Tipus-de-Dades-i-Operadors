/*****************************************************************
**                                                              **
**                        Títol:                                **
**                   Proba valors int                           **
**                                                              **
** NOM: Martin Herranz Cruz                    Data:22/01/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
int test = 32767;
//*****************************SETUP******************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is: ");
  Serial.println(test);
}
//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa


}

//****************************FUNCIONS****************************
