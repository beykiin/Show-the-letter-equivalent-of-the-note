// Show the letter equivalent of the note.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

int main() {
    
    int note;
    cout << "Enter your note: ";
    cin >> note;
    if (note >= 90) {

        cout << "Your letter grade: AA" << endl;

    }else if (note >= 80) {

        cout << "Your letter grade: BA" << endl;

    }else if (note >= 70) {

        cout << "Your letter grade: BB" << endl;

    }else if (note >= 60) {

        cout << "Your letter grade: CB" << endl;

    }else if (note >= 50) {

        cout << "Your letter grade: CC" << endl;

    }else {

        cout << "Your letter grade: FF" << endl;

    }
    
    return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
