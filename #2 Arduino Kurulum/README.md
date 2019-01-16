# 💾 Arduino Nasıl Programlanır?
Devre breadboard üzerinde oluşturulduktan sonra, programı (eskiz  veya sketch olarak bilinir) Arduino'ya yüklememiz gerekir. sketch, arduinoya hangi işlevleri yerine getirmesi gerektiğini söyleyen bir talimatlar kümesidir. Bir Arduino kartı aynı anda sadece bir sketch gerçekleştirebilir. Arduino sketchlerini oluşturmak için kullanılan yazılıma türkçesi Entegre Geliştirme Ortamı anlamına gelen IDE denir.
Yazılımın indirilmesi ücretsizdir ve https://www.arduino.cc/en/Main/Software adresinde bulunabilir.

![enter image description here](http://kodlamayap.com/wp-content/uploads/2017/11/ardiuno-1.png)

Her sketch iki ana bölümden oluşur:

**void setup ()** - Bir kez yapılması gerekenleri ayarlar ve sonra bir daha olmaz. Kısaca kurulum bölümü gibi düşünülebilir, pinlerin ne özellikte olacağı gibi talimatlar burda verilir. 

**void loop ()** - Kart kapanana kadar tekrarlanan talimatları içerir. Kısacası arduino içinde bulunan döngü denebilir. İşlemler ve fonksiyonlar genellikle bu bölümde yapılır.

# ⚙️ Kurulum...

Arduino ile çalışmaya başlamadan önce, bilgisayarınızda IDE yazılımının kurulu olduğundan emin olmanız gerekir. Bu program, kodu Arduino Uno kartınıza yazmanızı, görüntülemenizi ve yüklemenizi sağlar. IDE'yi Arduino’nun web sitesinden ücretsiz olarak indirebileceğimizi biliyoruz.

IDE'yi kurulduktan sonra, Arduino'nuzu bilgisayarınıza bağlamanız gerekecektir. Bunu yapmak için, USB kablosunun bir ucunu Arduino Uno'ya, ardından USB'nin diğer ucunu bilgisayarınızın USB portuna takın.

Arduino takıldıktan sonra, takılanın **Arduino UNO** olduğunu seçmek için IDE'yi açmanız ve **Araçlar> Pano> Arduino Uno**'ya tıklamanız gerekir.
(İngilizce IDE Kullananlar için ; Tools > Board > Arduino Uno)

![enter image description here](http://kodlamayap.com/wp-content/uploads/2017/11/ardiuno-kart-se%C3%A7imi.png)


Ardından, Arduino'ya bilgisayarınızda hangi portu kullandığınızı söylemelisiniz. Bağlantı noktasını seçmek için, **Araçlar> Bağlantı Noktası**'na gidin ve ardından **Arduino** veya **COM#** yazan bağlantı noktasını seçin.
(İngilizce IDE Kullananlar için ; Tools > Port > COM#)

![enter image description here](http://kodlamayap.com/wp-content/uploads/2017/11/ardiuno-port-1.png)

## ŞİMDİ TAMAMIZ!💯
