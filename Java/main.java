public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, nilai, nim;
        System.out.println("Berapa banyak mahasiswa : ");
        n = input.nextInt();
        for (int i = 0; i < n; i++) {

            System.out.println("Masukkan nama  : ");
            String nama = input.nextLine();
            System.out.println("Masukkan Nim   : ");
            nim = input.nextInt();
            System.out.println("Masukkan Nilai : ");
            nilai = input.nextInt();
            System.out.println("===============================");
            System.out.println("Nama  : " + nama);
            System.out.println("Nim   : " + nim);
            System.out.println("Nilai : " + nilai);

            if (nilai >= 90) {
                System.out.println("Nilai Huruf A");

            } else if (nilai >= 70) {
                System.out.println("Nilai Huruf B");

            } else if (nilai >= 50) {
                System.out.println("Nilai Huruf C");
            } else if (nilai < 50) {
                System.out.println("Nilai Huruf D");
            }
            System.out.println("===============================");

        }

    }
}
