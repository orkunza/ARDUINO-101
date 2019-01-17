/*
  Kara Şimşek

  For () döngüsünün kullanımını gösterir.
  Ardışık olarak birden fazla LED'i yakar ve ardından tersine yanar.
 */

int hiz = 100;       // Sayı ne kadar yüksek olursa, zamanlama o kadar yavaş olur.

void setup() {
  // her pini çıkış olarak başlatmak için bir for döngüsü kullanalım:
  for (int led = 2; led < 8; led++) {
    pinMode(led, OUTPUT);
  }
}

void loop() {
  // En düşük numaralı pinden en yükseğe kadar olan döngü:
  
  for (int i = 2; i < 8; i++) {
    digitalWrite(i, HIGH);  // pini açar
    delay(hiz);
    digitalWrite(i, LOW);   // pini kapar
  }

  // En yüksek numaralı pinden en düşüğe kadar olan döngü:
  
  for (int k = 7; k >= 2; k--) {
    digitalWrite(k, HIGH); // pini açar
    delay(hiz);
    digitalWrite(k, LOW); // pini kapar
  }
}
// Hızı değiştirip sonuçları görelim.
// Kalp atışına benzer bi görüntü için ne yapabiliriz.
