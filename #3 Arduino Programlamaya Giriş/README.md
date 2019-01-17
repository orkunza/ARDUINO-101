

# Fonksiyonlar

Bir görevi yerine getirmesi için yazdığınız kodları başka bir yerde de kullanmanız gerekirse, o kod satırlarını kopyalayıp yeni kodların arasına yapıştırmanız gerekir. Bu yöntemle programınız gereksiz olarak uzar. Ayrıca kopyaladığınız satırlarda yapacağınız en küçük bir değişimi bile, programın ilgili yerlerinde tek tek değiştirmeniz gerekir. Bu sorunu çözmek için fonksiyonlar kullanılır. Gerekli görev için yazılacak tek bir fonksiyon, istenen yerlerde kolayca kullanılabilir. Kullanıcı kendi fonksiyonlarını yazabileceği gibi, daha önce başkaları tarafından yazılmış fonksiyonları da kullanabilir.

Fonksiyon yazarken, fonksiyonda kullanılacak değişkenlerin alınmasına ve fonksiyonda yapılacak işlem sonucunun hangi türde olacağına dikkat edilmelidir. Fonksiyonun türü, işlem sonucunda döndürülecek değişken ile aynı tipte olmalıdır. Eğer fonksiyon, hiçbir değer döndürmeyecekse fonksiyon 'void' türünde tanımlanmalıdır.

Örneğin toplama işlemi yapan ve sonucu geri döndüren bir fonksiyon yazalım. Fonksiyon a ve b olmak üzere iki sayı almaktadır. Bunları toplayıp sonucu geri döndürmektedir.


`int toplama(int a, int b)`
`{`
`    int sonuc;`
`    sonuc = a + b;`
`    return sonuc;`
`}`

Burada oluşturulan sonuç değişkeni sadece fonksiyon içerisinde geçerlidir. Fonksiyonun görevi bittikten sonra sonuç değişkeni kaybolur. Bu fonksiyonu programınızın gerekli yerinde kullanmak isterseniz;


`int islemSonucu;`
`islemSonucu = toplama(2 + 3);`

şeklinde fonksiyonu çağırmanız yeterli olacaktır.

## Koşul yapıları (if-else-elseif)

Hemen hemen her yazılım dilinde bulunan temel kod yapılarından birisidir. Koşul yapıları ile bir durumun sonucu doğrultusunda yapılacak işi belirtebiliriz. Eğer bu durum istediğimiz gibi sonuçlanmadıysa da yapılacak görevi belirleyebiliriz. Örneğin; A değişkeni 1'e eşit ise A_fonk() , eğer 2'ye eşitse B_fonk() ve diğer koşullarda C_fonk() fonksiyonunu çağıralım.


`if( A == 1 )`
`{`
`    A_fonk();`
`}`
`else if( A == 2)`
`{`
`    B_fonk();`
`}`
`else`
`{`
`    C_fonk();`
`}`

Fark ettiyseniz A'nın 1'e eşitlik durumunu '==' ile kontrol ettik. Bu işaret aslında denklik anlamına gelmektedir. Bir sayının diğer sayıya eşitliğini kontrol ettiğimiz gibi, büyüklüğü küçüklüğünü de test edebiliriz.


|SEMBOL  |Koşul olarak kullanılabilen ifadeler:  |
|--|--|
| ==  |Denkse  |
| != |Denk değilse|
|>  |Büyüktür  |
|<|Küçüktür|
|>= |Büyük veya eşitse  |
|<=  |Küçük veya eşitse |
|&&  |ve  |
| II  |veya  |



# Döngüler

Yazılan kodlarda belirli satırların birden fazla tekrar edilmesi istenebilir. Böyle durumlarda döngü yapıları kullanılır. Döngü yapılarında, döngünün kaç kere tekrar edeceği dinamik olarak belirlenebilir. Hatta döngünün tekrarlaması bir koşula bağlanabilir.

**For döngüsü:**  İçerisinde tanımlanan değişkenin değeri, büyüklük koşulunu sağladığı sürece döngü devam eder. Her döngü turu tamamlandığında, yeni tura geçmeden önce değişkenin değeri bir arttırılır ve koşul test edilir. Eğer koşul hala geçerli ise döngü turu başlar. Koşulun geçerliliği bittiğinde döngü biter ve program kaldığı yerden devam eder.

Örneğin 5 kere tekrar eden for döngüsü yazalım.

 
`for(int i =0; i < 5; i ++){`
`/*`
`Burası 5 kere okunacak`
` program buraya her uğradığında i değeri bir arttırılacak`
` i değeri 5'e ulaşana kadar döngü devam edecek`
` i değeri 5 olduğu zaman döngü bitecek`
`*/`
`}`

**While döngüsü:**  While döngüsü genellikle bir koşula bağlanır. Eğer koşul doğru ise döngü devam eder. Koşul bozulduğunda döngü biter ve program kaldığı yerden devam eder. Örneğin while dışında 'h' değişkeni tanımlayalım. Bu değişkenin ilk değeri 5 olsun. Eğer 'h' değişkeni 100'den küçükse döngü devam etsin. Döngünün her turunda da 'h' değişkeninin değeri 2 katına çıksın.

**Dikkat**: Her döngüde iki katına çıkan değişkenlerin bulunduğu kodlarda genellikle ilk değişken hatası yapılmaktadır. Değişkenin ilk değeri kesinlikle belirlenmeli ve çarpma işlemi olduğu için bu değer '0' olmamalıdır. Aksi durumda koşul sonsuza kadar doğru olur ve döngü hiçbir zaman sona ermez.


`int h = 5;`
`while( h < 100){`
`/*`
`Burası h değişkeni 100den küçük olduğu sürece çalışacak`
`*/`
`h = h * 2;`
`/*`
`Üst satırdaki h'ı iki katına çıkartma işlemi alttaki satırdaki gibi de ``tanımlanabilirdi`
`h *= 2;`
`Eğer h'ın değeri arttırılmazsa döngü koşulu doğru ``olduğu için döngü sonsuza kadar devam edecektir`
`*/`
`}`
