#define led1 8
#define led2 9
int led3 = 10;


void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void vermelho(int tmp){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  delay(tmp);
}
void verde(int tmp){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(tmp); 
}

void amarelo(int tmp){
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  delay(tmp);
}
void loop() {

  vermelho(5000);
  verde(9000);
  amarelo(2000);

 
}
