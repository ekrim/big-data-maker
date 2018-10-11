#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

void readme(){
  cout << "./main <num_rows> <num_columns> " << endl;
}


int main(int argc, char **argv){
  if (argc == 3){
    unsigned rows = atoi(argv[1]);
    unsigned cols = atoi(argv[2]);  
  } else {
    readme();
    return 1;
  }

  std::ofstream f_csv;
  f_csv.open("mycsv.csv");
  f_csv << "Fuck yall\n";
  f_csv.close();
  return 0;
}

