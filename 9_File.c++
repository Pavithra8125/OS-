#include <bits/stdc++.h>
using namespace std;
void recurse(int files[]){
    int flag = 0, startBlock, len, k;
    cout << "Enter the starting block: ";
    cin >> startBlock;
    cout<<"Enter the length of the files: ";
    cin>>len;
    cout << "Files Allocated are :" << endl;
    for (int j=startBlock; j<(startBlock+len); j++){
        if (files[j] == 0)
            flag++;
    }
    if(len == flag){
        for (int k=startBlock; k<(startBlock+len); k++){
            if (files[k] == 0){
                files[k] = 1;
                cout << k <<"\t" << files[k] << endl;
            }
        }
        if (k != (startBlock+len-1))
            cout << "The file is successfully allocated to the disk" << endl;
    }
    else
        cout << "The file is not allocated to the disk" << endl;
    cout << "\nDo you want to enter more files?" << endl;
    int ch;
    cout << "Press 1 for YES, 0 for NO: ";
    cin >> ch;
    if (ch == 1)
        recurse(files);


  
  else
        exit(0);
    return;
}
int main()
{
int files[50];
for(int i=0;i<50;i++)
files[i]=0;
recurse(files);
return 0;
}
