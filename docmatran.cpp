//#include <stdio.h>
//  
//main() {
//   FILE *fp;
//   int row, col, i, j;
//   int matrix[10][10];
//   fp = fopen("matran.txt", "r");
//    
//   row = 3;
//   col = 2;
//    
//   printf("So hang cua ma tran: %d\n", row);
//   printf("So cot cua ma tran: %d\n", col);   
//    
//   i = 0;
//    //doc noi dung ma tran
//    while (fscanf(fp, "%d %d\n", &matrix[i][0], &matrix[i][1]) != EOF) {
//       i++;
//    }
//    
//   printf("\nMa tran: \n");
//   for (i = 0; i < row; i++) {
//        for (j = 0; j < col; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//   }
//    
//   fclose(fp);
//}

  //Ho ten: Tong Duc Nam
  //MaSV: 637849
  //Lop: K63CNPM
  //De:
#include<iostream>
#include<stdio.h>
#include<fstream>
  using namespace std;
  
  //===chuong trinh chinh===
  int main()
  {
      FILE *fp;
      int row,col,i,j;
      int matrix[10][10];
      fp = fopen("matran.txt","r");
      row = 3;
      col = 2;
      cout<<"So hang cua ma tran: %d\n"<<row;
      cout<<"So cot cua ma tran: %d\n"<<col;
      i=0;
      //doc noi dung ma tran
	while (cin(fp, "%d %d\n", &matrix[i][0], &matrix[i][1]) != EOF) {
       i++;
    }
      cout<<"\nMa tran: \n";
      for(i=0;i<row;i++)
      {
          for(j=0;j<col;j++)
          {
              cout<<"%d "<<matrix[i][j];
          }
          cout<<"\n";
      }
      fclose(fp);
      cout<<endl;
     return 0;
}
 //===dinh nghia ham===

