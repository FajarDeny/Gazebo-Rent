#include <iostream>

using namespace std;

int main()
{
    string nama, pilihan1, pilihan2, pilihan3, lanjut;
    int gazebo=30000, wifi=5000, kasur=5000, durasi;
    double bayar, kembalian, total, total_all=0;

    cout << endl;
    cout << "                      GUEST IN COMFORT                      " <<endl<<endl;
    cout << "====WELCOME TO GUEST RECEPTION SECTION GONTOR 2ND FEMALE====" << endl;
    cout << "----------We have many things to make you comfort-----------" << endl<<endl<<endl;
    cout << "Masukkan Nama Anda : ";
    cin >> nama;
    ulanglagi :

    cout << endl<<"Kami hadir untuk melayani anda, Apa yang anda butuhkan "<<nama<< "?" <<endl<<endl;
    cout << ":::::::::::::::::::::Kode Fasilitas Kami::::::::::::::::::::"<<endl;
    cout << "::              A. Gazebo/hari =   Rp.30.000              ::"<<endl;
    cout << "::              B. Wi-Fi/jam   =   Rp. 5.000              ::"<<endl;
    cout << "::              C. Kasur/buah  =   Rp. 5.000              ::"<<endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl<<endl;
    cout << "Pilih fasilitas dan masukkan kodenya : " ;
    cin >> pilihan1;
    cout<<endl;
    if (pilihan1=="a"){

        cout << "Anda memesan satu Gazebo" <<endl;
        cout << "Berapa hari anda akan menginap : ";
        cin >> durasi;

            total=durasi*gazebo;
            total_all=total_all+total;
            cout <<"Total Pesanan anda adalah Rp."<<total;


    }else if (pilihan1=="b"){

        cout << "Anda  memesan Paket Wi-Fi" <<endl;
        cout << "Berapa jam paket Wi-Fi yang anda inginkan : ";
        cin >> durasi;

            total=durasi*wifi;
            total_all=total_all+total;
            cout <<"Total Pesanan anda adalah Rp."<<total;
        }

    else if (pilihan1=="c"){

        cout << "Anda  memesan Kasur" <<endl;
        cout << "Berapa kasur yang anda butuhkan : ";
        cin >> durasi;
            total=durasi*kasur;
            total_all=total_all+total;
            cout <<"Total Pesanan anda adalah Rp."<<total;
        }

    cout << endl<<endl<< "Ingin memesan lagi? Ya/Tidak " ;
    cin >>lanjut;
    if (lanjut=="ya")
        { goto ulanglagi;}

        else if (lanjut=="tidak") {
 cout <<endl<<endl;
 cout << "Jadi semua Total pesanan anda adalah Rp."<<total_all<<endl;

 cout << "Masukkan uang anda : Rp.";
 cin >>bayar;
 kembalian=bayar-total_all;
 cout << "Uang kembalian anda adalah : Rp."<<kembalian<<endl<<endl;
 cout << "                  Terima Kasih "<<nama; cout<<" telah memesan"<<endl;
 cout << "=======Semoga layanan kami memuaskan anda dan membuat anda nyaman======="<<endl;
 cout << "------------------------------------------------------------------------";

    }

return 0;

}
