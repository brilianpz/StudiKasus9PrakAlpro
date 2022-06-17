void ArrayMatrik :: output_data(){
  cout << " \n\nTampilan 2 Dimensi" << endl;
  cout << "==============================================" << endl;
  cout << "|   Jenis Buku   |    Judul   |    Penulis   |" << endl;
  cout << "==============================================" << endl;
  for(int i=0; i<byk_data; i++){
    for(int j=0; j<3; j++){
      cout << "|\t\t" << matrik[i][j] << "\t";
      if(j==2){
        cout << "|";
      }
    }
    cout << endl;
  }
  cout << "==============================================" << endl;
}
