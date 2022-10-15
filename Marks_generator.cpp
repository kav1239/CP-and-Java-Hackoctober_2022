#include <iostream>
#include <cmath>
using namespace std;

class Marks {
public:
	int rollNumber;
	char *name;
	int *marks; 
	int num_marks;
	void GenerateMarks(int num) {
		num_marks = num;
		marks = new int[num];
		for (int i = 0; i < num; i++)
			marks[i] = rand() % 5 + 1;
	}
	int sum_of_marks() {
		int sum = 0;
		for (int i = 0; i < num_marks; i++)
			sum += marks[i];
		return sum;
	}
	double avarage() {
		return round(((double)sum_of_marks() / num_marks) * 100) / 100;
	}
	void set_marks(int number_of_marks, int newmarks) { 
		marks[number_of_marks] = newmarks;
	}
	int get_marks(int number_of_marks) {
		return marks[number_of_marks];
	}
	void set_num_marks(int num) {
		num_marks = num;	
		delete[]marks;
		marks = new int[num];
	}
	~Marks() {
		delete[]marks;
	}
};
class Physics : public Marks {
public:	
};
class Chemistry : public Marks {
public:
};
class Mathematics : public Marks {
public:
};
int main()
{
	int num,n;
    bool res=true;
    while(res)
    {
        cout<<"Details of the student : \n1)Input the details\n2)Exit\n\nEnter the choice : ";cin>>n;
        switch(n)
        {
            case 1:
            {
                cout<<"-------------------------------------------------------------------------------------"<<endl;
                cout << "Enter the number of students : ";cin >> num;
	            Physics *cl1_phys = new Physics[num]; 
	            Chemistry *cl1_chem = new Chemistry[num]; 
	            Mathematics *cl1_math = new Mathematics[num];
	            for (int i = 0; i < num; i++) { 
		            cl1_phys[i].rollNumber = cl1_chem[i].rollNumber = cl1_math[i].rollNumber = i + 1;
		            cl1_phys[i].GenerateMarks(9);
		            cl1_chem[i].GenerateMarks(5);
		            cl1_math[i].GenerateMarks(2);
	            }
	            cout << "\nThe total marks of each student of a class in Physics, Chemistry and Mathematics: \n\n";
	            for (int i = 0; i < num; i++) { 
		            cout << "Roll number of student is " << cl1_phys[i].rollNumber << endl;
		            cout << "The total marks in Physics is " << cl1_phys[i].sum_of_marks() << endl;
		            cout << "The total marks in Chemistry is " << cl1_chem[i].sum_of_marks() << endl;
		            cout << "The total marks in Mathematics is " << cl1_math[i].sum_of_marks() << endl;
		            cout << endl;
	            }
	            cout << endl << "-------------------------------------------------------------------------------------" << endl;
	            cout << "\nThe average marks : \n\n";
	            for (int i = 0; i < num; i++) { // averages of marks
		            cout << "Roll number of student is " << cl1_phys[i].rollNumber << endl;
		            cout << "The average mark in Physics is " << cl1_phys[i].avarage() << endl;
		            cout << "The average mark in Chemistry is " << cl1_chem[i].avarage() << endl;
		            cout << "The average mark in Mathematics is " << cl1_math[i].avarage() << endl;
		            cout << endl;
	            }
                cout<<"-------------------------------------------------------------------------------------"<<endl;
                break;
            }
            case 2:
            {
               cout<<"-------------------------------------------------------------------------------------"<<endl;
               cout<<"Thank You"<<endl;
               cout<<"-------------------------------------------------------------------------------------"<<endl;
               res=false;
               break;
            }
            default:
            {
               cout<<"-------------------------------------------------------------------------------------"<<endl;
               cout<<"Invalid choice"<<endl;
               cout<<"-------------------------------------------------------------------------------------"<<endl;
               break;
            }   
        }
    }
	return 0;
}