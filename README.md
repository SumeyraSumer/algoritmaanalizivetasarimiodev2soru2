# algoritmaanalizivetasarimiodev2soru2

BOYER-MOORE ALGORİTHM


Algoritmanın Amacı


Bu program Boyer-Moore algoritması kullanarak verilen bir metinde belirli kelimelerin kaç kez geçtiğini bulmayı amaçlamaktadır. Algoritma, verilen metinde aranan kelimeyi bulmak için kötü karakter heuristiğini kullanır ve eşleşme olmaması durumunda sıçrama boyutunu hesaplar. Program, belirtilen kelimelerin "alice_in_wonderland.txt" dosyasındaki metinde kaç kez geçtiğini hesaplar ve sonuçları ekrana yazdırır.


Algoritma Ne İçin Kullanılır veya Kullanılabilir?


Boyer-Moore algoritması, bir metin içindeki bir deseni veya kelimeyi aramak için kullanılan bir algoritmadır. Bu algoritma, diğer algoritmalar gibi verimli bir şekilde çalışır ve büyük metinlerde arama yaparken özellikle faydalıdır.
Boyer-Moore algoritması, diğer desen eşleme algoritmalarına göre daha hızlıdır ve özellikle aranan kelimenin uzun olduğu durumlarda avantajlıdır. Ayrıca, kötü karakter heuristiği sayesinde, aranan kelime içinde geçen herhangi bir karakterin konumunu hızlıca tespit edebilir ve arama işlemini bu bilgiye dayanarak hızlandırabilir.
Bu algoritma, birçok alanda kullanılabilir. Örneğin, metin işleme, veritabanı aramaları, arama motorları, biyoinformatik ve bilgi güvenliği gibi alanlarda sıklıkla kullanılır.


Algoritmanın Çalışma Şekli


Boyer-Moore algoritması, bir pattern (desen) ve bir text (metin) verildiğinde, pattern'in metindeki tüm yerlerini bulur. Algoritmanın çalışma şekli şöyledir:
1.	Pattern ve text uzunlukları hesaplanır.
2.	Bad character heuristiği oluşturulur. Bu heuristiğe göre, pattern içindeki her karakterin son geçtiği konum tutulur.
3.	Text üzerinde bir tarama yapılır. Tarama sırasında, text içindeki pattern ile eşleşen herhangi bir karakter bulunursa, pattern'in son karakterinden başlayarak geriye doğru karakterler karşılaştırılır. Eşleşmeyen bir karakter bulunana kadar bu işlem devam eder.
4.	Eğer pattern text içinde tam olarak eşleşiyorsa, pattern'in bulunduğu konum kaydedilir ve tarama işlemi sonraki karakterden devam eder. Eğer eşleşmeme olduğu bir karakter bulunursa, bad character heuristiği kullanılarak text içindeki bu karakterin son geçtiği konum bulunur ve pattern'in o kadar kaydırılması gerektiği hesaplanır. Pattern, text içinde bu kadar kaydırılarak taramaya devam edilir.
5.	Tarama işlemi text'in sonuna kadar devam eder.
Boyer-Moore algoritması, diğer string arama algoritmalarına göre daha hızlı çalışır. Özellikle text içinde aranan pattern'in uzunluğu arttıkça, Boyer-Moore algoritmasının performansı daha da artar.


Algoritmanın Çalışma Zamanı Analizi 


Boyer-Moore algoritmasının en iyi, en kötü ve ortalama çalışma zamanı analizi şöyledir:

En İyi Durum: En iyi durum, aranan kelime, metnin başında bulunursa gerçekleşir. Bu durumda, algoritma sadece bir kez çalışır ve çalışma zamanı O(m) olur. Burada m, aranan kelimenin uzunluğudur.

En Kötü Durum: En kötü durum, aranan kelimenin metinde bulunmadığı veya aranan kelimenin metnin sonunda bulunduğu durumdur. Bu durumda, algoritmanın çalışma zamanı O(mn) olur. Burada m, aranan kelimenin uzunluğu ve n, metnin uzunluğudur.

Ortalama Durum: Ortalama durum, aranan kelimenin metinde rastgele bir konumda bulunabileceği durumdur. Bu durumda, algoritmanın çalışma zamanı O(m + n) olur.

