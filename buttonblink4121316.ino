int patcher01;


void setup() {
    // initialize serial communication:
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
}

void loop() {
  patcher01 = Serial.read();//read from serial port
   if(patcher01== 'a') //Max sends the letter w
            {
                digitalWrite(2, LOW);
                 digitalWrite(4, LOW);
                 digitalWrite(7, LOW);
                 digitalWrite(8, LOW);
            }

  if(patcher01== 's') //Max sends the letter w
            {
                digitalWrite(2, HIGH);
                 digitalWrite(4, LOW);
                 digitalWrite(7, LOW);
                 digitalWrite(8, LOW);
            }

  if(patcher01== 'd') //Max sends the letter w
            {
                digitalWrite(2, LOW);
                 digitalWrite(4, HIGH);
                 digitalWrite(7, LOW);
                 digitalWrite(8, LOW);
            }

  if(patcher01== 'f') //Max sends the letter w
            {
                digitalWrite(2, HIGH);
                 digitalWrite(4, HIGH);
                 digitalWrite(7, LOW);
                 digitalWrite(8, LOW);
            }

  if(patcher01== 'g') //Max sends the letter w
            {
                digitalWrite(2, LOW);
                 digitalWrite(4, LOW);
                 digitalWrite(7, HIGH);
                 digitalWrite(8, LOW);
            }

  if(patcher01== 'h') //Max sends the letter w
            {
                digitalWrite(2, HIGH);
                 digitalWrite(4, LOW);
                 digitalWrite(7, HIGH);
                 digitalWrite(8, LOW);
            }

  if(patcher01== 'j') //Max sends the letter w
            {
                digitalWrite(2, LOW);
                 digitalWrite(4, HIGH);
                 digitalWrite(7, HIGH);
                 digitalWrite(8, LOW);
            }
    if(patcher01== 'k') //Max sends the letter w
            {
                digitalWrite(2, HIGH);
                 digitalWrite(4, HIGH);
                 digitalWrite(7, HIGH);
                 digitalWrite(8, LOW);
            }

  if(patcher01== 'z') //Max sends the letter w
            {
                digitalWrite(2, LOW);
                 digitalWrite(4, LOW);
                 digitalWrite(7, LOW);
                 digitalWrite(8, HIGH);
            }

if(patcher01== 'x') //Max sends the letter w
            {
                digitalWrite(2, HIGH);
                 digitalWrite(4, LOW);
                 digitalWrite(7, LOW);
                 digitalWrite(8, HIGH);
            }

if(patcher01== 'c') //Max sends the letter w
            {
                digitalWrite(2, LOW);
                 digitalWrite(4, HIGH);
                 digitalWrite(7, LOW);
                 digitalWrite(8, HIGH);
            }

if(patcher01== 'v') //Max sends the letter w
            {
                digitalWrite(2, HIGH);
                 digitalWrite(4, HIGH);
                 digitalWrite(7, LOW);
                 digitalWrite(8, HIGH);
            }

if(patcher01== 'b') //Max sends the letter w
            {
                digitalWrite(2, LOW);
                 digitalWrite(4, LOW);
                 digitalWrite(7, HIGH);
                 digitalWrite(8, HIGH);
            }

if(patcher01== 'n') //Max sends the letter w
            {
                digitalWrite(2, HIGH);
                 digitalWrite(4, LOW);
                 digitalWrite(7, HIGH);
                 digitalWrite(8, HIGH);
            }

if(patcher01== 'm') //Max sends the letter w
            {
                digitalWrite(2, LOW);
                 digitalWrite(4, HIGH);
                 digitalWrite(7, HIGH);
                 digitalWrite(8, HIGH);
            }

if(patcher01== ',') //Max sends the letter w
            {
                digitalWrite(2, HIGH);
                 digitalWrite(4, HIGH);
                 digitalWrite(7, HIGH);
                 digitalWrite(8, HIGH);
            }
if(patcher01== 'q') //Max sends the letter w
            {
                digitalWrite(11, LOW);
            }
if(patcher01== 'Q') //Max sends the letter w
            {
                digitalWrite(11, HIGH);
            }
if(patcher01== 'w') //Max sends the letter w
            {
                digitalWrite(12, LOW);
            }
if(patcher01== 'W') //Max sends the letter w
            {
                digitalWrite(12, HIGH);
            }
if(patcher01== 'e') //Max sends the letter w
            {
                digitalWrite(13, LOW);
            }
if(patcher01== 'E') //Max sends the letter w
            {
                digitalWrite(13, HIGH);
            }

}
