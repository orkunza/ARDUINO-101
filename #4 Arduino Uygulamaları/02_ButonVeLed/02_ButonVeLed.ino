/*
 Pin 2'ye bağlı bir düğmeye basarken, 
 dijital pin 13'e bağlı bir LED'i açar ve kapatır.

  Devre:
  * Pin 13'ten toprağa bağlı LED
  * Pin 2'ye +5V'dan basılan buton
  * Pin 2'ye topraktan direnç bağlanmış

 */

// const int; Sabittirler ve değiştirilemez değişkendirler. Yani bize bağımlı bir değiken olurlar.

const int butonPin = 2;     // Pin 2'ye bağlı buton
const int ledPin =  13;      // Pin 13'e bağlı LED

// Değer alacak değişkenimiz:

int butonDurum = 0;         // buton durumunu kaydetmek için değişken

void setup() {
  pinMode(ledPin, OUTPUT);  // LED pinini çıkış olarak ayarlayalım:
  pinMode(butonPin, INPUT);  // Buton pinini bir giriş olarak ayarlayalım:
}

void loop() {
  butonDurum = digitalRead(butonPin); // buton değerinin durumunu okuyalım:

  //if durumu butona basılıp basılmadığını kontrol eder. öyleyse, butonDurum HIGH yapar:
  if (butonDurum == HIGH) {
    // LED'i yakar:
    digitalWrite(ledPin, HIGH);
  } else {
    // LED'i söndürür:
    digitalWrite(ledPin, LOW);
  }
}
