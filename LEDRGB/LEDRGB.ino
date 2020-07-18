#define ledR 2
#define ledG 4
#define ledB 3
#define botao 7

int btnClicado = 0;
int btnLiberado = 0;
int ciclo = 0;
const int maximo =3;

void vermelho(){
  digitalWrite(ledR, HIGH);
    digitalWrite(ledG, LOW);
      digitalWrite(ledB, LOW);
}

void verde(){
digitalWrite(ledR, LOW);
    digitalWrite(ledG, HIGH);
      digitalWrite(ledB, LOW);
  
}

void azul(){
  digitalWrite(ledR, LOW);
    digitalWrite(ledG, LOW);
      digitalWrite(ledB, HIGH);
}

void trocaLed(){
  if(ciclo ==0){
    vermelho();
  }else if(ciclo ==1){
    verde();
  }else if(ciclo ==2){
    azul();
  }
  ciclo++;

  if(ciclo > maximo -1){
    ciclo =0;
  }
  
}

void verificaBtn(){
  if(digitalRead(botao) == HIGH){
    btnClicado = 1;
    btnLiberado = 0;
    
  }else{
    btnLiberado =1;
  }
  if((btnClicado ==1) and (btnLiberado ==1) ){
    int btnClicado = 0;
    int btnLiberado = 0;
    trocaLed();
  }
}
void setup() {
pinMode(ledR, OUTPUT);
pinMode(ledG, OUTPUT);
pinMode(ledB, OUTPUT);
pinMode(botao, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  verificaBtn();
}
