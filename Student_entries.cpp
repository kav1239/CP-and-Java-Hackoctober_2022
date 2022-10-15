#include <string>
#include <iostream>
using namespace std;
struct SEIT
{
    int roll_no;
    string name;
    float sgpa;
};
class Student
{
    struct SEIT stud[5];
public:
    void input();
    void display();
    void display_topper();
    void search_roll_no_binery_search();
    void search_name();
    void search_sgpa();
    void sort_roll_no_bubble_sort();
    void sort_roll_no_insertion_sort();
    void sort_roll_no_quick_sort();
    int elementPartition(int less,int more,int pivot);
    void demoquickSort(int less,int greater);
};

void Student::input()
{
    for (int i = 0; i <5; i++)
    {
        cout<<"Enter your roll_no : "<<i<<" : ";cin>>stud[i].roll_no;cout<<endl;
        cout<<"Enter your Name : "<<i<<" : ";cin>>stud[i].name;cout<<endl;
        cout<<"Enter your SGPA : "<<i<<" : ";cin>>stud[i].sgpa;cout<<endl;
        cout<<"-------------------------------------------------------------------------------------"<<endl;
    }
}
void Student::display()
{
    cout<<"Roll_no  Name   SGPA "<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<stud[i].roll_no<<"\t ";
        cout<<stud[i].name<<"\t";
        cout<<stud[i].sgpa<<endl;
    }
}

void Student::search_roll_no_binery_search()
{
    int l=0,h=4,ans=-1;
    float k;
    cout<<"Enter the roll_no : ";
    cin>>k;
    while(l<=h){
        int mid=(l+h)/2;
        if(k>stud[mid].roll_no){
            l=mid+1;
        }
        else if(k<stud[mid].roll_no){
            h=mid-1;
        }
        else{
            ans=mid;
            break;
        }
    }
    if(ans==-1){
        cout<<"-->Given roll no is not in the database ."<<endl;
    }
    else{
        cout<<"-->The name of the given roll no : "<<stud[ans].name<<endl;
    }
}
void Student::search_name()
{
    string na;
    cout<<"->Enter the name : ";
    cin>>na;
    for(int i=0;i<5;i++){
        if(na==stud[i].name){
            cout<<"-->The Roll of the given name : "<<stud[i].roll_no<<endl;
            return;
        }
    }
    cout<<"-->Given Name is not in the database ."<<endl;
}
void Student::search_sgpa()
{
    float sg;
    int counter=0;
    cout<<"->Enter the sgpa : ";
    cin>>sg;
    for(int i=0;i<5;i++){
        if(sg==stud[i].sgpa){
            cout<<"-->The roll no of the given sgpa : "<<stud[i].roll_no<<endl;
        }
        counter++;
    }
    if(counter==0){
        cout<<"-->Given SGPA is not in the database ."<<endl;
    }
}
void Student::sort_roll_no_bubble_sort()
{
    int i, j;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4 - i; j++){
            if (stud[j].roll_no > stud[j + 1].roll_no){
                swap(stud[j].roll_no, stud[j+1].roll_no);
            }
        }
    }
}
void Student::sort_roll_no_insertion_sort(){
    int i, key, j; 
    for (i = 0; i < 5; i++)
    { 
        key = stud[i].roll_no; 
        j = i - 1; 
        while (j >= 0 && stud[j].roll_no > key)
        { 
            stud[j + 1].roll_no = stud[j].roll_no; 
            j = j - 1; 
        } 
        stud[j + 1].roll_no = key; 
    }  
}
int Student::elementPartition(int low, int high,int pivot)
{
    low=1,high=4,pivot = stud[high].roll_no;
    int i = low;
    int j=low; 
    while(i<=high)
    {
        if (stud[j].roll_no > pivot)
        {
            i++;
        }
        else{
            int temp = stud[i].sgpa;
            stud[i].roll_no = stud[j].roll_no;
            stud[j].roll_no = temp;
            i++;
            j++;
        }
    }
    return j-1;
}
void Student ::demoquickSort(int low, int high)
{
    if (low < high)
    {
        int pivot=stud[4].roll_no;
        int pi = elementPartition(low, high,pivot);
        demoquickSort(low, pi-1);
        demoquickSort(pi+1, high);
    }
}
int main()
{
    Student S;
    int n;
    bool go=true;
    while(go){
        cout<<"\nThe operation on the database : \n"<<endl;
        cout<<"1) Input/Change details "<<endl<<"2) Display the details "<<endl<<"3) Search the Roll No by binary search "<<endl<<"4) Search the Name by linear search"<<endl<<"5) Search the SGPA by linear search"<<endl<<"6) Sorting the Roll No by bubble sort "<<endl<<"7) Sorting the Roll No by insertion sort "<<endl<<"8) Sorting the Roll No by quick sort(Topper list) "<<endl<<"9) Exit "<<endl; 
        cout<<"-------------------------------------------------------------------------------------"<<endl; 
        cout<<"\nEnter the choice : ";cin>>n;
        cout<<"\n-------------------------------------------------------------------------------------\n"<<endl;
        switch (n)
        {
        case 1:
            S.input();
            break;
        case 2:
            S.display();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break;
        case 3:
            S.sort_roll_no_bubble_sort();
            S.search_roll_no_binery_search();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break;
        case 4:
            S.search_name();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break;
        case 5:
            S.search_sgpa();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break;
        case 6:
            S.sort_roll_no_bubble_sort();
            S.display();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break;
        case 7:
            S.sort_roll_no_insertion_sort();
            S.display();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break; 
        case 8:
            //S.demoquickSort(1,4);
            S.display();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break;   
        case 9:
            cout<<"Thank You"<<endl;
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            go=false;
            break;
        default:
            cout<<"Invalid choice"<<endl;
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break;
        }
    }
    return 0;
}