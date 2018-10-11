#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

void readme(){
  cout << "./main <num_rows> <num_columns> " << endl;
}


int main(int argc, char **argv){
  unsigned rows, cols;
  if (argc == 3){
    rows = atoi(argv[1]);
    cols = atoi(argv[2]);  
  } else {
    readme();
    return 1;
  }
 
  char filename [50];
  int n = sprintf(filename, "%drows_%dcols.csv", rows, cols);

  std::ofstream f_csv;
  f_csv.open(filename);

  cout << filename << endl; 

  f_csv.close();
  return 0;
}

