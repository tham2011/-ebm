
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <map>
#include <time.h>
 
int main(){
    srand((int)time(0));
    int r, minN, maxN;
    cout << "\nNhap So nho nhat = ";
    cin >> minN;
    cout << "\nNhap So lon nhat = ";
    cin >> maxN;
    int cnt;
    do{
        cout << "\nNhap so luong so can nhap = ";
        cin >> cnt;
    }while(cnt > maxN - minN + 1);
    
    map<int, bool> vis;
    
    for(int i = 0; i < cnt; ++i){
        // Random cho toi khi r chua co trong map vis
        do{
            r = minN + rand() % (maxN + 1 - minN);
        }while(vis.find(r) != vis.end());
        printf("%d ",r);
        // Danh dau r da co.
        vis[r] = true;
    }    

// ham in
using namespace std;
void sort_numbers_ascending(int number[], int count);
{
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
   cout<<"cac so duoc sap xep tang dan:\n";
   for (i = 0; i < count; ++i)
      cout<<"\n"<< number[i];
}
int main()
{
   int i, count, number[20];
  
   cout<<"nNhap so luong phan tu:";
   cin>>count;
   cout<<"\nNhap gia tri phan tu:\n";
    
   for (i = 0; i < count; ++i)
      cin>>number[i];
  
   sort_numbers_ascending(number, count);
}

	// ham sap xep
	void Sort (int a[],int n)
	{
		int tg;
		for(int i=0;i<n;i++)
		{
			for (int j=i;j<n;j++)
			if (a[i]>a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
				
			}
		}
	}
}

// tim phan  tu lon nhat va nho nhat

    min = Arr[0][0];
    max = Arr[0][0];
    for (a = 0; a < n; a++) 
    {
        for (int b = 0; b < cot; ++b)
        {
            if (Arr[a][b] > max)
                max = Arr[a][b];
            if (Arr[a][b] < min)
                min = Arr[a][b];
        }  
    }
 
    // In ra phan tu lon nhat va nho nhat
    printf("Phan tu lon nhat : %d\n", max);
    printf("Phan tu nho nhat : %d\n", min);
}

// chen phan tu vao day so
 /*mang ban dau co 20 gia tri khoi tao*/
    /*cac vi tri khac chua co gia tri ta co the chen phan tu vao*/
    int arr[6] = {1, 3, 4, 5};
    
    cout << ("Mang ban dau:\n");
    for(short i = 0; i < 6; i++) cout << arr[i] << ' ';

    /*them phan tu vao cac vi tri cuoi mang chua co gia tri cu the*/
    arr[1] = 10;
    arr[1] = 20;

    cout << ("\nMang sau khi them phan tu:\n");
    for(short i = 0; i < 6; i++) cout << arr[i] << ' ';
}









