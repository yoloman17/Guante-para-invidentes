//Constantes y variables usadas durante el programa
#include <SimpleSDAudio.h>
#define eco 7 // Pin Eco
#define Trigger 8 // Pin Trigger
//declaración de variables
const int boton1 = 2;
const int boton2 = 3;
int buttonState1 = 0;
int buttonState2 = 0;
long duracion, distancia; // Duracion para calcular la distancia
int conteo=0;
int cent=0;
void setup(void) {
 Serial.begin (115200);//Velocidad del puerto serial
SdPlay.init(SSDA_MODE_HALFRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER);
pinMode(boton2, INPUT); //Boton
pinMode(9, OUTPUT);      // Fija el pin 9 como salida.
pinMode(boton1, INPUT);
 pinMode(Trigger, OUTPUT);//Pin TRigger como salida
 pinMode(eco, INPUT);//Pin eco como entrada
 delay(500);
}
void loop() {
buttonState1 = digitalRead(boton1);
buttonState2 = digitalRead(boton2);
if(buttonState1 == HIGH){
tonoDistancia();
}
if(buttonState2 == LOW){
CalculoDistacia(); //Llama a la funcion CalculoDistancia 
}
}
void CalculoDistacia(){ // Esta función determina la distacia de un objeto con el sensor ultra sónico
 digitalWrite(Trigger, LOW); 
 delayMicroseconds(4); 
 digitalWrite(Trigger, HIGH);//A través del pin de disparo (Trigger) enviaremos una señal de activación al sensor, lo activaremos durante 10 microsegundos y lo desactivaremos
 delayMicroseconds(10); 
 digitalWrite(Trigger, LOW);
 duracion = pulseIn(eco, HIGH);
  distancia = duracion * 10 / 292/ 2;
 delay(60);
 
Serial.println(distancia);//Imprime ese valor en el puerto serial
 conteo=0;
 buttonState2=HIGH;
if(distancia == 300){
 trescientos();
 cms();
 }
 if(distancia>300){
  rango();
  }

if(distancia >= 200 && distancia <= 299){
  distancia=distancia-200;
doscientos();
 }
 if(distancia>=100 && distancia <=199){
    if(distancia!=100){
 ciento();    
    }
  if(distancia==100){
 cien();    
    }
 distancia=distancia-100;
Serial.println(distancia);
 }
 if(distancia>=90 && distancia <=99){
  if(distancia!=90){
noventa();
y();    
    }
  if(distancia==90){
noventa();
cms();    
    }
distancia=distancia-90;
Serial.println(distancia);
 }
  if(distancia>=80 && distancia <=89){
if(distancia!=80){
ochenta();
y();    
    }
  if(distancia==80){
ochenta();
cms();    
    }
  distancia=distancia-80;
Serial.println(distancia);
 }
 if(distancia>=70 && distancia <=79){
if(distancia!=70){
setenta();
y();    
    }
  if(distancia==70){
setenta();
cms();    
    }
distancia=distancia-70;
Serial.println(distancia);
 }
  if(distancia>=60 && distancia <=69){
if(distancia!=60){
sesenta();
y();    
    }
  if(distancia==60){
sesenta();
cms();    
    }
distancia=distancia-60;
Serial.println(distancia);
 }
  if(distancia>=50 && distancia <=59){
if(distancia!=50){
cincuenta();
y();    
    }
  if(distancia==50){
cincuenta();
cms();    
    }
distancia=distancia-50;
Serial.println(distancia);
 }
  if(distancia>=40 && distancia <=49){
if(distancia!=40){
cuarenta();
y();    
    }
  if(distancia==40){
cuarenta();
cms();    
    }
distancia=distancia-40;
Serial.println(distancia);
 }
  if(distancia>=30 && distancia <=39){
if(distancia!=30){
treinta();
y();    
    }
  if(distancia==30){
treinta();
cms();    
    }
distancia=distancia-30;
Serial.println(distancia);
 }
  if(distancia>=21 && distancia <=29){
  distancia=distancia-20;
veinti();
 }
 if(distancia==20){
 veinte();
cms();
 }
 if(distancia==19){
 diecinueve();
cms();
 }
 if(distancia==18){
 dieciocho();
cms();
 }
 if(distancia==17){
 diecisiete();
cms();
 }
 if(distancia==16){
 dieciseis();
cms();
 }
 if(distancia==15){
 quince();
cms();
 }
  if(distancia==14){
 catorce();
cms();
 }
  if(distancia==13){
 trece();
cms();
 }
  if(distancia==12){
 doce();
cms();
 }
  if(distancia==11){
 once();
cms();
 }
  if(distancia==10){
 diez();
cms();
 }
  if(distancia==9){
 nueve();
cms();
 }
  if(distancia==8){
 ocho();
cms();
 }
  if(distancia==7){
 siete();
cms();
 }
  if(distancia==6){
 seis();
cms();
 }
  if(distancia==5){
 cinco();
cms();
 }
  if(distancia==4){
 cuatro();
cms();
 }
  if(distancia==3){
 tres();
cms();
 }
   if(distancia==2){
 dos();
cms();
 }
  if(distancia==1){
 uno();
cms();
 }

//-----funciones----------------
}

void uno(){
SdPlay.setFile("1.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void dos(){
SdPlay.setFile("2.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void tres(){
SdPlay.setFile("3.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void cuatro(){
SdPlay.setFile("4.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void cinco(){
SdPlay.setFile("5.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void seis(){
SdPlay.setFile("6.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void siete(){
SdPlay.setFile("7.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void ocho(){
SdPlay.setFile("8.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void nueve(){
SdPlay.setFile("9.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void diez(){
SdPlay.setFile("10.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void once(){
SdPlay.setFile("11.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void doce(){
SdPlay.setFile("12.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void trece(){
SdPlay.setFile("13.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void catorce(){
SdPlay.setFile("14.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void quince(){
SdPlay.setFile("15.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void dieciseis(){
SdPlay.setFile("16.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void diecisiete(){
SdPlay.setFile("17.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(800);  
}
void dieciocho(){
SdPlay.setFile("18.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void diecinueve(){
SdPlay.setFile("19.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void veinte(){
SdPlay.setFile("20.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void treinta(){
SdPlay.setFile("30.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void cuarenta(){
SdPlay.setFile("40.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void cincuenta(){
SdPlay.setFile("50.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void sesenta(){
SdPlay.setFile("60.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void setenta(){
SdPlay.setFile("70.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void ochenta(){
SdPlay.setFile("80.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void noventa(){
SdPlay.setFile("90.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void cien(){
SdPlay.setFile("cien.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void doscientos(){
SdPlay.setFile("200.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void trescientos(){
SdPlay.setFile("300.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void uncentimetro(){
SdPlay.setFile("1cm.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(700);  
}
void ciento(){
SdPlay.setFile("ciento.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void cms(){
SdPlay.setFile("cms.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(600);  
}
void veinti(){
SdPlay.setFile("veinti.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void y(){
SdPlay.setFile("y.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}
void rango(){
SdPlay.setFile("rango.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(800);  
}
void un(){
SdPlay.setFile("un.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo  
delay(500);  
}

void tonoDistancia(){
digitalWrite(Trigger, LOW); 
 delayMicroseconds(4); 
 digitalWrite(Trigger, HIGH);//A través del pin de disparo (Trigger) enviaremos una señal de activación al sensor, lo activaremos durante 10 microsegundos y lo desactivaremos
 delayMicroseconds(10); 
 digitalWrite(Trigger, LOW);
 duracion = pulseIn(eco, HIGH);
  distancia = duracion * 10 / 292/ 2;
 Serial.println(distancia);//Imprime ese valor en el puerto serial
 delay(10);
if(distancia<=100){
SdPlay.setFile("tono.wav");//con setFile vamos a cargar el archivo que queremos reproducir
SdPlay.play(); // play reproduciomos el archivo 
delay(distancia);
SdPlay.stop(); 
  }
}
