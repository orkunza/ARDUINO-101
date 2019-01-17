/*
    Analog giriş
  Analog pin 0 üzerindeki bir analog sensörü okuyarak, dijital pin 13'e 
  bağlı bir LED'in açılıp kapanma süresini değiştirelim.
  LED'in açık ve kapalı olacağı süre, analogRead() tarafından elde edilen değere bağlı olcaktır.

 */

int potPin = A0;    // potansiyometre için giriş pini seçimi
int ledPin = 13;      // LED için pin seçimi
int potDeger = 0;  // sensörden gelen değeri saklamak için değişken,başta 0 verdik ama değişicek.

void setup() {
  // ledPin'i ÇIKIŞ olarak ayarlayalım:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potDeger = analogRead(potPin);  // sensörden anlık değeri okutalım:
 
  digitalWrite(ledPin, HIGH);     // ledPin'i aç
  delay(potDeger);                // "potDeger" kadar milisaniye için programı beklet:
  digitalWrite(ledPin, LOW);      // ledPin'i kapa
  delay(potDeger);                // "potDeger" kadar milisaniye için programı beklet:
}
//
