int pin1[] = {22, 23, 24};
int pin2[] = {25, 26, 27};
int pin3[] = {28, 29, 30};
int pin4[] = {31, 32, 33};
int pin5[] = {34, 35, 36};
int pin6[] = {37, 38, 39};
int pin7[] = {40, 41, 42};
int pin8[] = {43, 44, 45};

int yellow_light = 46;
int i = 0;

String r = "red";
String g = "green";
String y = "yellow";

void setup()
{
  for (int i = 0; i < 3; i++) {
    pinMode(pin1[i], OUTPUT);
    pinMode(pin2[i], OUTPUT);
    pinMode(pin3[i], OUTPUT);
    pinMode(pin4[i], OUTPUT);
    pinMode(pin5[i], OUTPUT);
    pinMode(pin6[i], OUTPUT);
    pinMode(pin7[i], OUTPUT);
    pinMode(pin8[i], OUTPUT);

    Serial.begin(9600);
  }
}
void loop()
{

  if (Serial.available() > 0) {
    String mData = Serial.readString();

    if (mData == r) {
      mRuleGreen();
      Serial.print("Green Ok! ;) ");
    }
    else if (mData == g) {
      mRuleRed();
      Serial.print("Red Ok! ;) ");
    }
    else if (mData == y) {
      mRuleYellow();
      Serial.print("Yellow Ok! ;) ");
    }
  }

  else {
    t1();
    i++;
    if (i == 3) {
      t2();
      i == 0;
    }
  }
}

void mRuleGreen() {
  digitalWrite(pin1[0], 1);
  digitalWrite(pin2[0], 1);
  digitalWrite(pin3[2], 1);
  digitalWrite(pin4[2], 1);
  digitalWrite(pin5[2], 1);
  digitalWrite(pin6[0], 1);
  digitalWrite(pin7[0], 1);
  digitalWrite(pin8[0], 1);
}

void mRuleRed() {
  digitalWrite(pin1[2], 1);
  digitalWrite(pin2[2], 1);
  digitalWrite(pin3[0], 1);
  digitalWrite(pin4[2], 1);
  digitalWrite(pin5[2], 1);
  digitalWrite(pin6[2], 1);
  digitalWrite(pin7[2], 1);
  digitalWrite(pin8[2], 1);
}

void mRuleYellow() {
  digitalWrite(pin1[1], 1);
  digitalWrite(pin2[1], 1);
  digitalWrite(pin3[0], 1);
  digitalWrite(pin4[1], 1);
  digitalWrite(pin5[1], 1);
  digitalWrite(pin6[1], 1);
  digitalWrite(pin7[1], 1);
  digitalWrite(pin8[1], 1);
}

void t1() {
  digitalWrite(pin1[0], 1);
  digitalWrite(pin2[0], 1);
  digitalWrite(pin3[2], 1);
  digitalWrite(pin4[0], 1);
  digitalWrite(pin5[0], 1);
  digitalWrite(pin6[2], 1);
  digitalWrite(pin7[2], 1);
  digitalWrite(pin8[0], 1);
  delay(5000);

  yellow();

  digitalWrite(pin1[0], 0);
  digitalWrite(pin1[2], 1);
  digitalWrite(pin2[0], 0);
  digitalWrite(pin2[2], 1);
  digitalWrite(pin3[2], 0);
  digitalWrite(pin3[0], 1);
  digitalWrite(pin4[0], 0);
  digitalWrite(pin4[2], 1);
  digitalWrite(pin5[0], 0);
  digitalWrite(pin5[2], 1);
  digitalWrite(pin6[2], 0);
  digitalWrite(pin6[0], 1);
  digitalWrite(pin7[2], 0);
  digitalWrite(pin7[0], 1);
  digitalWrite(pin8[0], 0);
  digitalWrite(pin8[2], 1);
  delay(5000);

  yellow();

  digitalWrite(pin1[2], 0);
  digitalWrite(pin2[2], 0);
  digitalWrite(pin3[0], 0);
  digitalWrite(pin4[2], 0);
  digitalWrite(pin5[2], 0);
  digitalWrite(pin6[0], 0);
  digitalWrite(pin7[0], 0);
  digitalWrite(pin8[2], 0);

  yellow();
}

void t2() {
  digitalWrite(pin1[2], 1);
  digitalWrite(pin2[0], 1);
  digitalWrite(pin3[2], 1);
  digitalWrite(pin4[2], 1);
  digitalWrite(pin5[2], 1);
  digitalWrite(pin6[0], 1);
  digitalWrite(pin7[0], 1);
  digitalWrite(pin8[2], 1);
  delay(5000);

  yellow();

  digitalWrite(pin1[0], 1);
  digitalWrite(pin1[2], 0);
  digitalWrite(pin2[2], 1);
  digitalWrite(pin2[0], 0);
  digitalWrite(pin3[0], 1);
  digitalWrite(pin3[2], 0);
  digitalWrite(pin4[0], 1);
  digitalWrite(pin4[2], 0);
  digitalWrite(pin5[0], 1);
  digitalWrite(pin5[2], 0);
  digitalWrite(pin6[2], 1);
  digitalWrite(pin6[0], 0);
  digitalWrite(pin7[2], 1);
  digitalWrite(pin7[0], 0);
  digitalWrite(pin8[0], 1);
  digitalWrite(pin8[2], 0);
  delay(5000);

  digitalWrite(pin1[0], 0);
  digitalWrite(pin2[2], 0);
  digitalWrite(pin3[0], 0);
  digitalWrite(pin4[0], 0);
  digitalWrite(pin5[0], 0);
  digitalWrite(pin6[2], 0);
  digitalWrite(pin7[2], 0);
  digitalWrite(pin8[0], 0);

}

void yellow() {
  //Sarı aktif
  digitalWrite(pin1[1], 1);
  digitalWrite(pin2[1], 1);
  digitalWrite(pin3[1], 1);
  digitalWrite(pin4[1], 1);
  digitalWrite(pin5[1], 1);
  digitalWrite(pin6[1], 1);
  digitalWrite(pin7[1], 1);
  digitalWrite(pin8[1], 1);
  delay(2000);
  //Sarı pasif
  digitalWrite(pin1[1], 0);
  digitalWrite(pin2[1], 0);
  digitalWrite(pin3[1], 0);
  digitalWrite(pin4[1], 0);
  digitalWrite(pin5[1], 0);
  digitalWrite(pin6[1], 0);
  digitalWrite(pin7[1], 0);
  digitalWrite(pin8[1], 0);
}

/*void yellow_flash() {
  digitalWrite(yellow_light, 1);
  delay(1000);
  digitalWrite(yellow_light, 0);
  }*/
