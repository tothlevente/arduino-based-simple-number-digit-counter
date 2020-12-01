/*

       Arduino based simple number digit counter
       Created by: Tóth Levente | 2020 | 0.1v |

       For more information please read the project documentations.
       https://github.com/tothlevente/arduino-based-simple-number-digit-counter

     */

const int A = 9;
const int B = 10;
const int C = 11;
const int D = 12;
const int E = 13;
const int F = 7;
const int G = 6;

const int button = 8;

int button_state = LOW;
int waiting = 3000; //milliseconds

void setup()
{

  Serial.begin(9600);

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

  pinMode(button, INPUT);
}

void loop()
{

  button_state = digitalRead(button);

  Serial.print("The button state is: ");
  Serial.println(button_state);

  print_0();
  delay(waiting);

  if (button_state == HIGH)
  {

    print_0();
    delay(waiting);
    reset();

    print_1();
    delay(waiting);
    reset();

    print_2();
    delay(waiting);
    reset();

    print_3();
    delay(waiting);
    reset();

    print_4();
    delay(waiting);
    reset();

    print_5();
    delay(waiting);
    reset();

    print_6();
    delay(waiting);
    reset();

    print_7();
    delay(waiting);
    reset();

    print_8();
    delay(waiting);
    reset();

    print_9();
    delay(waiting);
    reset();
  }
}

void print_0()
{

  Serial.println("Print number: 0");

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
}

void print_1()
{

  Serial.println("Print number: 1");

  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}

void print_2()
{

  Serial.println("Print number: 2");

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
}

void print_3()
{

  Serial.println("Print number: 3");

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(G, HIGH);
}

void print_4()
{

  Serial.println("Print number: 4");

  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void print_5()
{

  Serial.println("Print number: 5");

  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void print_6()
{

  Serial.println("Print number: 6");

  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void print_7()
{

  Serial.println("Print number: 7");

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}

void print_8()
{

  Serial.println("Print number: 8");

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void print_9()
{

  Serial.println("Print number: 9");

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}

void reset()
{

  Serial.println("Reset the printed number!");

  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
