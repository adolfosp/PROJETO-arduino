#define led 4
#define btn 3
int btnLigado =0;
int btnLiberado =0;

void trocaLed(){
  if(digitalRead(led)==HIGH){
    digitalWrite(led,LOW);
  }else{
    digitalWrite(led,HIGH);
  }
}

void keyUp(){
  if((btnLigado == 1)and (btnLiberado ==1)){
    btnLigado=0;
    btnLiberado=0;
    trocaLed();
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  
  if(digitalRead(btn)==HIGH){
      btnLigado=1;
      btnLiberado=0;
  }else{
      btnLiberado=1;
  }
  keyUp();

}
