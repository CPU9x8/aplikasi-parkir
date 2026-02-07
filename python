def main():
    totalBiaya = 0
    print("===========Parkir===========")
    jamMasuk = int(input("masukkan jam kedatangan: "))
    jamKeluar = int(input("masukkan jam keluar: "))
    lamaWaktu = jamKeluar - jamMasuk
    def pengulangan():
        def tipeKendaraan():
            return input("masukkan tipe kendaraan(motor/mobil): ").lower()
        def totalBiaya():
            kendaraan = tipeKendaraan()
            if kendaraan == "motor":
                biayaParkir = lamaWaktu * 2000
                print(f"biaya = rp.{biayaParkir}")
            elif kendaraan == "mobil":
                biayaParkir = lamaWaktu * 4000
                print(f"biaya = rp.{biayaParkir}")
            else:
                print("kendaraan tidak valid.")
                pengulangan()
        totalBiaya()
    pengulangan()
    ulangi = input("input data lagi?(Y/N): ").upper()
    if ulangi == "Y":
        main()
    else:
        print("program berakhir.")

main()
