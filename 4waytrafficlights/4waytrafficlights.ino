int r1 = 1;
int y1 = 2;
int g1 = 3;
int r2 = 4;
int y2 = 5;
int g2 = 6;
int r3 = 7;
int y3 = 8;
int g3 = 9;
int r4 = 10;
int y4 = 11;
int g4 = 12;
char c;


void setup() {
 	Serial.begin(9600);
	pinMode (r1, OUTPUT);
	pinMode (y1, OUTPUT);
	pinMode (g1, OUTPUT);

	pinMode (r2, OUTPUT);
	pinMode (y2, OUTPUT);
	pinMode (g2, OUTPUT);

	pinMode (r3, OUTPUT);
	pinMode (y3, OUTPUT);
	pinMode (g3, OUTPUT);

	pinMode (r4, OUTPUT);
	pinMode (y4, OUTPUT);
	pinMode (g4, OUTPUT);



}

void loop() {

  if(Serial.available()){
    c = Serial.read();
    Serial.println(c);
    if(c == 'q'){
  	tr1();
  	}else if(c == 'w'){
  	tr2();
  	}else if(c == 'e'){
  	tr3();
 	}else if(c == 'r'){
  	tr4();
  	}else if(c == 'd'){
  	automatic();
  	} 
  }
  	
    
  



}
void automatic(){
	digitalWrite(g1, LOW);
	digitalWrite(g2, LOW);
	digitalWrite(g3, LOW);
	digitalWrite(g4, LOW);

	digitalWrite(r1, LOW);
	digitalWrite(g1, HIGH);
	digitalWrite(r2, HIGH);
	digitalWrite(r3, HIGH);
	digitalWrite(r4, HIGH);
	delay(9000);
	digitalWrite(g1, LOW);
	digitalWrite(r2, LOW);

	digitalWrite(y1, HIGH);
	digitalWrite(y2, HIGH);
	delay(3000);
	digitalWrite(y1, LOW);
	digitalWrite(y2, LOW);

	digitalWrite(r1, HIGH);
	digitalWrite(g2, HIGH);
	delay(9000);

	digitalWrite(g2, LOW);
	digitalWrite(r3, LOW);


	digitalWrite(y2, HIGH);
	digitalWrite(y3, HIGH);
	delay(3000);

	digitalWrite(y2, LOW);
	digitalWrite(y3, LOW);


	digitalWrite(r2, HIGH);
	digitalWrite(g3, HIGH);
	digitalWrite(r4, HIGH);
	delay(9000);

	digitalWrite(g3, LOW);
	digitalWrite(r4, LOW);
	//??? ??????? 

	digitalWrite(y3, HIGH);
	digitalWrite(y4, HIGH);
	delay(3000);

	digitalWrite(y3, LOW);
	digitalWrite(y4, LOW);

	digitalWrite(r3, HIGH);
	digitalWrite(g4, HIGH);
	delay(9000);

	digitalWrite(r3, LOW);
	digitalWrite(g4, LOW);
	digitalWrite(r1, LOW);
	digitalWrite(y1, HIGH);
	digitalWrite(y3, HIGH);
	digitalWrite(y4, HIGH);
	delay(3000);

	digitalWrite(y1, LOW);
	digitalWrite(y4, LOW);
}

void tr1(){
	digitalWrite(y1, HIGH);
	digitalWrite(y2, HIGH);
	digitalWrite(y3, HIGH);
	digitalWrite(y4, HIGH);
	digitalWrite(g1, LOW);
	digitalWrite(g2, LOW);
	digitalWrite(g3, LOW);
	digitalWrite(g4, LOW);

	delay(3000);
	digitalWrite(g1, HIGH);
	digitalWrite(g2, LOW);
	digitalWrite(g3, LOW);
	digitalWrite(g4, LOW);
	digitalWrite(y1, LOW);
	digitalWrite(y2, LOW);
	digitalWrite(y3, LOW);
	digitalWrite(y4, LOW);
	digitalWrite(r1, LOW);
	digitalWrite(r2, HIGH);
	digitalWrite(r3, HIGH);
	digitalWrite(r4, HIGH);

}
void tr2(){
	digitalWrite(y1, HIGH);
	digitalWrite(y2, HIGH);
	digitalWrite(y3, HIGH);
	digitalWrite(y4, HIGH);
	digitalWrite(g1, LOW);
	digitalWrite(g2, LOW);
	digitalWrite(g3, LOW);
	digitalWrite(g4, LOW);
	delay(3000);
	digitalWrite(g1, LOW);
	digitalWrite(g2, HIGH);
	digitalWrite(g3, LOW);
	digitalWrite(g4, LOW);
	digitalWrite(y1, LOW);
	digitalWrite(y2, LOW);
	digitalWrite(y3, LOW);
	digitalWrite(y4, LOW);
	digitalWrite(r1, HIGH);
	digitalWrite(r2, LOW);
	digitalWrite(r3, HIGH);
	digitalWrite(r4, HIGH);
	
}
void tr3(){
	digitalWrite(y1, HIGH);
	digitalWrite(y2, HIGH);
	digitalWrite(y3, HIGH);
	digitalWrite(y4, HIGH);
	digitalWrite(g1, LOW);
	digitalWrite(g2, LOW);
	digitalWrite(g3, LOW);
	digitalWrite(g4, LOW);
	delay(3000);
	digitalWrite(g1, LOW);
	digitalWrite(g2, LOW);
	digitalWrite(g3, HIGH);
	digitalWrite(g4, LOW);
	digitalWrite(y1, LOW);
	digitalWrite(y2, LOW);
	digitalWrite(y3, LOW);
	digitalWrite(y4, LOW);
	digitalWrite(r1, HIGH);
	digitalWrite(r2, HIGH);
	digitalWrite(r3, LOW);
	digitalWrite(r4, HIGH);
	
}
void tr4(){
	digitalWrite(y1, HIGH);
	digitalWrite(y2, HIGH);
	digitalWrite(y3, HIGH);
	digitalWrite(y4, HIGH);
	digitalWrite(g1, LOW);
	digitalWrite(g2, LOW);
	digitalWrite(g3, LOW);
	digitalWrite(g4, LOW);
	delay(3000);
	digitalWrite(g1, LOW);
	digitalWrite(g2, LOW);
	digitalWrite(g3, LOW);
	digitalWrite(g4, HIGH);
	digitalWrite(y1, LOW);
	digitalWrite(y2, LOW);
	digitalWrite(y3, LOW);
	digitalWrite(y4, LOW);
	digitalWrite(r1, HIGH);
	digitalWrite(r2, HIGH);
	digitalWrite(r3, HIGH);
	digitalWrite(r4, LOW);
	
}