/*****************************************************************
**                                                              **
**             Títol: Tipus de dades i operadors                **
**                  Capacitat discs durs                        **
**                                                              **
** NOM: Martin Herranz Cruz                    Data:22/01/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************


long drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long missing;
//*****************************SETUP******************************

void setup() {                              //Configura el final de salida

Serial.begin(9600);                         //set up serial library at 9600 bps
Serial.println("Your HD is 100 GB large.");
drive_mb = drive_gb * 1024;                 //Calcul drive_mb.
drive_kb = drive_mb * 1024;                 //Calcul drive_kb.
Serial.print("In theory, it can store ");   //Primera part del text.
Serial.print(drive_mb);                     //Mostra valor calculat de drive_mb.
Serial.print(" Megabytes, ");               //Mostra unitats del valor calculat.
Serial.print(drive_kb);                     //Mostra el valor del drive_kb calculat anteriorment.
Serial.println(" Kilobytes.");              //Mostra unitats del valor calculat.


real_drive_mb = drive_gb * 1000;            //Calcul real_drive_mb.
real_drive_kb = real_drive_mb * 1000;       //Calcul real_drive_kb.
Serial.print("But it really only stores "); //Segona linia del text.
Serial.print(real_drive_mb);                //Mostra valor calculat de real_drive_mb.
Serial.print(" Megabytes, ");               //Mostra unitats del valor calculat de real_drive_mb.
Serial.print(real_drive_kb);                //Mostra Valor calculat de real_drive_kb.
Serial.println(" Kilobytes.");              //Mostra unitats del valor calculat de real_drive_kb.
 
missing = drive_kb - real_drive_kb;         //Calcul del missing que son els KB que es perden en la conversió.
Serial.print("You are missing ");           //Escriu per pantalla el que hi ha entre parentesis
Serial.print(missing);                      //Mostra el Valor calculat anteriorment de "missing"
Serial.print(" Kilobytes!");                //Escriu unitats del "missing"
}

//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa


}

//****************************FUNCIONS****************************
