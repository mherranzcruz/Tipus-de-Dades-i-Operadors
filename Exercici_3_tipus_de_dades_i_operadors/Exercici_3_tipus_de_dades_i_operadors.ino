/*****************************************************************
**                                                              **
**                        Títol:Exercici 3                      **
**                   Càlcul hipotenusa                          **
**                                                              **
** NOM: Martin Herranz Cruz                    Data:15/01/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
int a=3;
int b=4;
int h=0;
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida

Serial.begin(9600);

Serial.println("Calcul Hipotenusa");

Serial.print("a= ");
Serial.println(a);
Serial.print("b= ");
Serial.println(b);
Serial.print("h=");
Serial.println(h);

Serial.print("Resultat h= ");


a = pow(a,2);
b = pow(b,2);
h= sqrt(a+b);
Serial.println(h);


}

//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa


}

//****************************FUNCIONS****************************
