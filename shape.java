import java.util.*;
abstract class shape {
protected double dem1,dem2; //protected data members
shape(){}
shape(double a,double b) //parameterized constructor
{
dem1=a;
dem2=b;
}
public double validate(double val)
{
Scanner sc=new Scanner(System.in);
boolean length=true;
while(length){
if(val>0){
length=false;
}
else {
System.out.println("Invalid measurement.");
System.out.print("Enter again : ");
val = sc.nextDouble();
}
}
return val;
}
abstract double calculate_area(); //abstract method to calculate area
void read() //method to take dem1 and dem2 as input from user
{
Scanner sc=new Scanner(System.in);
System.out.print("Enter dimen1 of the shape : ");
dem1=sc.nextDouble(); //read dimension1 from user
validate(dem1);
System.out.print("Enter dimen2 of the shape : ");
dem2=sc.nextDouble(); //read dimension2 from user
validate(dem2);
}
}
class triangle extends shape{
double area;
triangle(double base, double height) //parameterized constructor
{
super(base,height); //call to parameterized constructor of shape class
}
public triangle() {}

double calculate_area() // method to calculate and return area of
{
area=(dem1*dem2)/2;
return area;
}
}
class rectangle extends shape {
double area;
rectangle (double length, double breadth) //parameterized constructor
{
super(length,breadth); //call to parameterized constructor of shape class
}
public rectangle() {}
double calculate_area() // method to calculate and return area of rectangle
{
area=(dem1*dem2);
return area;
}
}
