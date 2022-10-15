#include <string>
#include <iostream>
using namespace std;
class Publishing
{
    string book_name;
    float book_price;
    int no_pages;
    string cassette_name;
    float cassette_price;
    float record;
public:
    void input_book();
    void input_cassette();
    void display_book();
    void display_cassette();

};
void Publishing::input_book()
{
    cout<<"Enter the Book name: ";cin>>book_name;cout<<endl;
    cout<<"Enter the Book price : ";cin>>book_price;cout<<endl;
    cout<<"Enter the Pages in the Book : ";cin>>no_pages;cout<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
}
void Publishing::input_cassette()
{
    cout<<"Enter the Cassette name: ";cin>>cassette_name;cout<<endl;
    cout<<"Enter the Cassette price : ";cin>>cassette_price;cout<<endl;
    cout<<"Enter the total recording of the cassette(in mins) : ";cin>>record;cout<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
}
void Publishing::display_book()
{
    cout<<book_name<<"\t ";
    cout<<book_price<<"\t";
    cout<<no_pages<<endl;
}
void Publishing::display_cassette()
{
    cout<<cassette_name<<"\t ";
    cout<<cassette_price<<"\t";
    cout<<record<<"\t";
}
int main()
{
    int r;
    bool res =true;
    while(res)
    {
        cout<<"The opertion for Books : \n1 for Book\n2 for cassette\n3 for Exit\n\nEnter the choice : ";cin>>r;
        cout<<"-------------------------------------------------------------------------------------"<<endl; 
        switch(r)
        {
            case 1:
            {
                int f;
                cout<<"\nEnter the number of book : ";cin>>f;
                Publishing b[f];
                int v;
                bool ha=true;
                while(ha)
                {
                    cout<<"\nThe operation on the database : \n"<<endl;
                    cout<<"1) Input/Change details of Book "<<endl<<"2) Display the details of Book "<<endl<<"3) Exit"<<endl;
                    cout<<"-------------------------------------------------------------------------------------"<<endl; 
                    cout<<"\nEnter the choice : ";cin>>v;
                    cout<<"\n-------------------------------------------------------------------------------------\n"<<endl;
                    switch (v)
                    {
                        case 1:
                            for(int i=0;i<f;i++)
                            b[i].input_book();
                            break;
                        case 2:
                            cout<<"Book Name\tBook Price\tNumber of pages of Book"<<endl;
                            for(int i=0;i<f;i++)
                            b[i].display_book();
                            cout<<"\n-------------------------------------------------------------------------------------"<<endl;
                            break;
                        case 3:
                            cout<<"Thank You"<<endl;
                            cout<<"-------------------------------------------------------------------------------------"<<endl;
                            ha=false;
                            break;
                        default:
                            cout<<"Invalid choice"<<endl;
                            cout<<"-------------------------------------------------------------------------------------"<<endl;
                            break;
                    }
                }
                break;
            }
            case 2:
            {
                int t;
                cout<<"\nEnter the number of cassette : ";cin>>t;
                Publishing a[t];
                int n;
                bool go=true;
                while(go)
                {
                    cout<<"\nThe operation on the database : \n"<<endl;
                    cout<<"1) Input/Change details of Cassette "<<endl<<"2) Display the details of Cassette "<<endl<<"3) Exit"<<endl;
                    cout<<"-------------------------------------------------------------------------------------"<<endl; 
                    cout<<"\nEnter the choice : ";cin>>n;
                    cout<<"\n-------------------------------------------------------------------------------------\n"<<endl;
                    switch (n)
                   {
                        case 1:
                            for(int i=0;i<t;i++)
                            a[i].input_cassette();
                            break;
                        case 2:
                            cout<<"Cassette Name\tCassette Price\tTotal recording of cassette(in min)"<<endl;
                            for(int i=0;i<t;i++)
                            a[i].display_cassette();
                            cout<<"\n-------------------------------------------------------------------------------------"<<endl;
                            break;
                        case 3:
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
                break;
            }
            case 3:
                cout<<"Thank You"<<endl;
                cout<<"-------------------------------------------------------------------------------------"<<endl;
                res=false;
                break;
            default:
                cout<<"Invalid choice"<<endl;
                cout<<"-------------------------------------------------------------------------------------"<<endl;
                break;           
        }
    }
    return 0;
}