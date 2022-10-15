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
    struct SEIT stud[15];
public:
    void input();
    void display();
    void display_topper();
    void search_roll_no();
    void search_name();
    void search_sgpa();
    void sort_roll_no();
    void sort_sgpa();
    void topper();
};

void Student::input()
{
    for (int i = 0; i <15; i++)
    {
        cout<<"Enter your roll_no : "<<i+1<<" : ";cin>>stud[i].roll_no;cout<<endl;
        cout<<"Enter your Name : "<<i+1<<" : ";cin>>stud[i].name;cout<<endl;
        cout<<"Enter your SGPA : "<<i+1<<" : ";cin>>stud[i].sgpa;cout<<endl;
        cout<<"-------------------------------------------------------------------------------------"<<endl;
    }
}
void Student::display()
{
    cout<<"Roll_no  Name   SGPA "<<endl;
    for (int i = 0; i <15; i++)
    {
        cout<<stud[i].roll_no<<"\t ";
        cout<<stud[i].name<<"\t";
        cout<<stud[i].sgpa<<endl;
    }
}

void Student::search_roll_no()
{
    int l=0,h=14,ans=-1;
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
    for(int i=0;i<15;i++){
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
    for(int i=0;i<15;i++){
        if(sg==stud[i].sgpa){
            cout<<"-->The roll no of the given sgpa : "<<stud[i].roll_no<<endl;
        }
        counter++;
    }
    if(counter==0){
        cout<<"-->Given SGPA is not in the database ."<<endl;
    }
}
void Student::sort_roll_no()
{
    int i, j;
    for (i = 0; i < 14; i++){
        for (j = 0; j < 14 - i; j++){
            if (stud[j].roll_no > stud[j + 1].roll_no){
                swap(stud[j].roll_no, stud[j+1].roll_no);
            }
        }
    }
}
void Student::sort_sgpa()
{
    int i, j;
    for (i = 0; i < 14; i++){
        for (j = 0; j < 14 - i; j++){
            if (stud[j].sgpa > stud[j + 1].sgpa){
                swap(stud[j].sgpa, stud[j+1].sgpa);
            }
        }
    }
}
void Student::topper()
{
    cout<<"Roll_no  Name   SGPA "<<endl;
    for (int i = 0; i <3; i++)
    {
        cout<<stud[i].roll_no<<"\t ";
        cout<<stud[i].name<<"\t";
        cout<<stud[i].sgpa<<endl;
    }
}
int main()
{
    Student S;
    int n;
    bool go=true;
    while(go){
        cout<<"\nThe operation on the database : \n"<<endl;
        cout<<"1) Input/Change details(upto to 15 students only)"<<endl<<"2) Display the details "<<endl<<"3) Search the Roll No"<<endl<<"4) Search the Name "<<endl<<"5) Search the SGPA "<<endl<<"6) Sorting the SGPA"<<endl<<"7) Sorting the Roll No"<<endl<<"8) Topper list "<<endl<<"9) Exit "<<endl; 
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
            S.sort_roll_no();
            S.search_roll_no();
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
            S.sort_sgpa();
            S.display();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break;
        case 7:
            S.sort_roll_no();
            S.display();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            break; 
        case 8:
            S.sort_sgpa();
            S.topper();
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