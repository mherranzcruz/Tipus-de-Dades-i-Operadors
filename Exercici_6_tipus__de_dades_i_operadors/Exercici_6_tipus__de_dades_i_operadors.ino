/*****************************************************************
**                                                              **
**                        Títol:                                **
**          Posar nom representatiu del programa                **
**                                                              **
** NOM: Nom de l'alumne                        Data:XX/XX/20XX  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
int drive_gb = 100;
long drive_mb;     // we changed the type from "int" to "long"
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");


}

//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa


}

//****************************FUNCIONS****************************
