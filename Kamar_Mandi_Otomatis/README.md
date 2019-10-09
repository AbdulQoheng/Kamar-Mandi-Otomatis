# Kamar-Mandi-Otomatis
Project hasil belajar Arduino di Universitas Islam Negeri Malang

### Keterangan
Merupakan otomatisasi pada kamar mandi, dimana lampu dan pompa air(bisa juga kran elektrik) di otomatisasi menggunakan sensor

### Otomatisasi Lampu
1. Ketika ada seseorang masuk ke dalam kamar mandi otomatis lampu akan menyala
2. Ketika tidak ada pergerakan atau seseorang di dalam kamar mandi maka lampu akan mati Air Otomatis

### Otomatisasi Pompa air
1. Ketika volume air kurang dari setengah bak mandi maka pompa air akan menyala
2. Ketika volume air diantara batas tengah dan batas atas dan juga tidak ada orang maka pompa air akan menyala
3. Ketika volume air mencapai batas atas atau penuh maka pompa air akan mati
  
### Komponen
1. sensor ultra sonic
2. sensor PIR
3. relay 2 channel

### Definisi
1. pin 11 pada arduino di sambungkan pada pin echo pada sensor ultra sonic
2. pin 12 pada arduino di sambungkan pada pin trig pada sensor ultra sonic
3. pin 10 pada arduino di sambungkan pada out sensor PIR
4. pin 7 pada arduino di sambungkan pada in1 relay
5. pin 8 pada arduino di sambungkan pada in2 relay
