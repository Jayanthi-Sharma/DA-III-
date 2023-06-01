#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

void myswap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapchar(string &a,string &b)
{   string temp=a;
    a=b;
    b=temp;
}
//sorting in descending order
void bubbleSort(int arr[], int index1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                // Swap the numbers
                myswap(arr[j], arr[j + 1]);
                // Swap the indices
                myswap(index1[j], index1[j + 1]);
            }
        }
    }
}

int main()
{
    int i,n;
    cout << "Enter the number of students: ";
    cin >> n;

    int marks[n];
    int index1[n];

    cout << "Enter the marks scored by students: ";
    for (int i = 0; i < n; i++)
    { cin >> marks[i];
      index1[i] = i; // Store the original indices
    }

    // Sort the array and retain the indices
    bubbleSort(marks, index1, n);

    cout << "Marks scored in descending order: ";
    for (int i = 0; i < n; i++)
    { cout <<marks[i] << " ";}
    cout<<endl;

    cout << "Student Number: ";
    for (int i = 0; i < n; i++)
    { 
        cout << ++index1[i] << " ";}
    cout<<endl;
    
    
  //Standard 10 point relative grading scale
   int b[5];
   b[0]=0.1*n;
   b[1]=0.2*n;
   b[2]=0.3*n;
   b[3]=0.25*n+0.5;
   b[4]=0.15*n-0.5;
   
   string grade[n];
   //Assigning the grades
   int j=0;
 while(b[0]>0)
 {   grade[j]="S";
     j=j+1;
     b[0]-=1;
 }
  while(b[1]>0)
 {   grade[j]="A";
     j=j+1;
     b[1]-=1;
 }
  while(b[2]>0)
 {   grade[j]="B";
     j=j+1;
     b[2]-=1;
 }
  while(b[3]>0)
 {   grade[j]="C";
     j=j+1;
     b[3]-=1;
 }
  while(b[4]>0)
 {   grade[j]="F";
     j=j+1;
     b[4]-=1;
 }
 
 //To arrange the corresponding grades of students according to increasing order of student number
   for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n - 1; j++)
        {
            if (index1[j] > index1[j + 1])
            {
                myswap(index1[j], index1[j + 1]);
                swapchar(grade[j], grade[j + 1]);
            }
        }
     }
  
  //To display the grade of each student
     for(int i=0;i<n;i++)
   { cout<<"The grade of student "<<index1[i]<<" is "<<grade[i]<<endl;}

    return 0;
}
