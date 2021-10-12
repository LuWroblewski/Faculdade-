///Feito por:Lexy
//Discord:Lexy3138
//github.com/Small-Lexy

//SD card
  #include <SPI.h>
  #include <SD.h>
  File DadoIR;

//Painel LCD

  #include <Wire.h>
  #include <LiquidCrystal_I2C.h>
  #define endereco  0x27
  #define colunas   16
  #define linhas    2
    LiquidCrystal_I2C lcd(0x27, 16, 2);       
  
//Pino sensor, buzzer, SD


  #define PIN_SENSOR_ENTRADA 6
  #define  PIN_SENSOR_SAIDA 7
  #define  PIN_BUZZER 8
  int valor_entrada = 0;   
  int valor_saida = 0;   
  #define PIN_SDCARD 10
  //unsigned long tempo_de_intervalo1 = 14400000;
  //unsigned long tempo_de_intervalo2 = 39600000;
  bool PrimeiroIf = false; 
  unsigned long tempo_de_intervalo1 = 0; 
  unsigned long tempo_de_intervalo2 = 0;
  unsigned long tempo_anterior = 0;

//LCD

  int conta_entrada = 0;
  int conta_saida = 0;
  int conta_sala = 0;
  int conta_anterior = 0;

void setup() {
  Serial.begin(9600);
  //SDCard
  SD.begin(PIN_SDCARD);
  

//Sensor

  pinMode(PIN_SENSOR_ENTRADA, INPUT_PULLUP);
  pinMode(PIN_SENSOR_SAIDA, INPUT_PULLUP);
  pinMode(PIN_BUZZER,OUTPUT);

//LCD
 
  lcd.begin(16, 2);
  lcd.init();
  lcd.display(); 
  lcd.backlight();
  lcd.clear();
  delay(350);
  lcd.print("Sala:0");
  lcd.setCursor(9, 0);
  lcd.print("Tot:0");
  lcd.setCursor(0, 1);
  lcd.print("Ent: 0");
  lcd.setCursor(9, 1);
  lcd.print("Sai:0");


  

}
void loop() {
    valor_entrada = !digitalRead(PIN_SENSOR_ENTRADA);    
    valor_saida = !digitalRead (PIN_SENSOR_SAIDA);
    unsigned long tempo_actual = millis();

    //entrada

    if(valor_entrada!=1){
      digitalWrite(PIN_SENSOR_ENTRADA, HIGH);
      tone(PIN_BUZZER, 2000, 50);
      lcd.setCursor(5,1); 
      lcd.print(conta_entrada= conta_entrada +1);
      lcd.setCursor(13,0);
      lcd.print(conta_entrada);        
      digitalWrite(PIN_SENSOR_SAIDA, LOW); 
      delay(1000);
      digitalWrite(PIN_SENSOR_SAIDA, HIGH);            
        
            }
            
        //Conta sala 

  conta_sala = conta_entrada - conta_saida;
      lcd.setCursor(5,0);
      lcd.print(conta_sala);      
     

    //saida  
    
    if(valor_saida!=1){
      digitalWrite(PIN_SENSOR_SAIDA, HIGH);
      lcd.setCursor(13,1);
      lcd.print(conta_saida= conta_saida +1);   
      digitalWrite(PIN_SENSOR_ENTRADA, LOW); 
      delay(1000); 
      digitalWrite(PIN_SENSOR_ENTRADA, HIGH); 
      } 

      if(((tempo_actual - tempo_de_intervalo1) >= 60000) && !PrimeiroIf ) {
          DadoIR = SD.open("dados.txt", FILE_WRITE);
          DadoIR.println("O total de pessoas ao meio dia foi : " + String(conta_entrada) + " pessoas.");
              Serial.println("O total de pessoas ao meio dia  foi : " + String(conta_entrada) + " pessoas.");
          DadoIR.close();
        tempo_de_intervalo1 = tempo_actual;
        PrimeiroIf = true;
    }

      if((tempo_actual - tempo_de_intervalo2) >= 120000) {
          DadoIR = SD.open("dados.txt", FILE_WRITE);
          DadoIR.println("O total de pessoas a meia noite foi : " + String(conta_entrada) + " pessoas.");
             Serial.println("O total de pessoas a meia noite foi : " + String(conta_entrada) + " pessoas.");
          DadoIR.println("Fim do dia.");
          DadoIR.close();
       tempo_de_intervalo2 = tempo_actual; 
    }



}
