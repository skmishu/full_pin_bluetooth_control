
char c = 0;
String data = "";

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    c = Serial.read();
    data += c;
    digitalWrite(LED_BUILTIN, HIGH);
    delay(40);
    digitalWrite(LED_BUILTIN, LOW);
  }
if(data.length()>0){
    if (data.charAt(0)=='2'){
      pinOp(data.charAt(1), 2);
    }
    if (data.charAt(0)=='3'){
      pinOp(data.charAt(1), 3);
    }
    if (data.charAt(0)=='4'){
      pinOp(data.charAt(1), 4);
    }
    if (data.charAt(0)=='5'){
      pinOp(data.charAt(1), 5);
    }
    if (data.charAt(0)=='6'){
      pinOp(data.charAt(1), 6);
    }
    if (data.charAt(0)=='7'){
      pinOp(data.charAt(1), 7);
    }
    if (data.charAt(0)=='8'){
      pinOp(data.charAt(1), 8);
    }
    if (data.charAt(0)=='9'){
      pinOp(data.charAt(1), 9);
    } 
    Serial.println();
    Serial.print("data =");
    Serial.print(data);
    data = "";
  }
}

void pinOp(char c, int p) {
  if (c == '1') {
    digitalWrite(p, HIGH);
  } else {
    digitalWrite(p, LOW);
  }
}
