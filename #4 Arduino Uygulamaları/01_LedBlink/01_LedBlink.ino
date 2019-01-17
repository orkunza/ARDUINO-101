

// Bir LED'i bir saniye süreyle açar, bir saniye süreyle kapatır ve sonsuza dek tekrarlar.
 

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);   // LED'i açar.
  delay(1000);              // Bir saniye bekler, mili saniye cinsinden.
  digitalWrite(13, LOW);    // LED'i kapar.
  delay(1000);              // Bir saniye bekler, mili saniye cinsinden.
}
/* 
  / Yukarıdaki delay () işlevlerinde 1000 değerini değiştirmeyi deneyebiliriz.
  / Farklı sayıların ve zamanlamayı nasıl etkilediğini görün. 
  / Daha küçük değerler, devrenin daha hızlı çalışmasını sağlar. 
  
  / * Gecikmeyi 10 ms'ye düşürsek. Yanıp söndüğünü hala görebilirmiyiz?
  /  Yanıp sönmeyi hala görebileceğimiz en küçük gecikmeyi bulabilir miyiz?

  / * Bir kalp atışına benzemek için yukarıdaki kodu değiştirielim. 
 */

