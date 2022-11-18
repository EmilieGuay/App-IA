int delBleu  = 8;
int delRouge = 9;
int delVert  = 10;

void setup() {

    pinMode(delBleu, OUTPUT);
    pinMode(delRouge,OUTPUT);
    pinMode(delVert, OUTPUT);
}

void loop() {

     digitalWrite(delBleu, HIGH);
      digitalWrite(delRouge, HIGH);
     digitalWrite(delVert, HIGH);
  
     delay(500);
  
     digitalWrite(delBleu, LOW);
     digitalWrite(delRouge, LOW);
     digitalWrite(delVert, LOW);
  
     delay(500);
}
