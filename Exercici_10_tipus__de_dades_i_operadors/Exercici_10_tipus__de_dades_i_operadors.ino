/*****************************************************************
**                                                              **
**             Títol:  Tipus de dades i operadors               **
**          Proba error en resultat divisió amb int             **
**                                                              **
** NOM: Martin Herranz Cruz                    Data:22/01/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
int a = 3;
int b = 2;
int d;
//*****************************SETUP******************************

void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
}
//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa


}

//****************************FUNCIONS****************************
