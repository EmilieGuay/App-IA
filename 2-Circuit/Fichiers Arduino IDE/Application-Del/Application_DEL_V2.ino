int delBleu = 8;
int delRouge = 9;
int delVert = 10;

void setup() {
    Serial.begin(9600);
    pinMode(delBleu, OUTPUT);
    pinMode(delRouge, OUTPUT);
    pinMode(delVert, OUTPUT);
}
void loop() {
     if(Serial.available()>0) {
            char i=Serial.read();
            if(i =='1'){
                      digitalWrite(delBleu, HIGH);
                      digitalWrite(delRouge, LOW);
                      digitalWrite(delVert, LOW);
              }
             else if (i=='2'){ 
                        digitalWrite(delBleu, LOW);
                        digitalWrite(delRouge, HIGH);
                        digitalWrite(delVert, LOW);
              }
             else if (i=='3'){
                        digitalWrite(delBleu, LOW);
                        digitalWrite(delRouge,LOW);
                        digitalWrite(delVert, HIGH);
              }
     }
}
