void ArrayMatrik::input_data(){
    cout<<"Masukkan Banyak Data: ";
    cin>>byk_data;
  
    for (int i=0;i<byk_data*3;i++) {
      cout << "\nJenis Buku = ";
      cin >> array[i];
      i++;
      cout << "Judul      = ";
      cin >> array[i];
      i++;
      cout << "Penulis    = ";
      cin >> array[i];
    }
}
