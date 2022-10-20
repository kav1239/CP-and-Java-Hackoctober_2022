import java.util.*;
public class work {
    public static void main(String args[]) //main method
    {
    Scanner sc=new Scanner(System.in);
    int x; //switch case for choice
    shape s; //reference variable of super class shape
    boolean res=true;
    while(res)
    {
    System.out.print("\nCalculation of area following area : \n1.Triangle\n2.Rectangle\n3.Exit\n\nChoice : ");
    x=sc.nextInt();
    System.out.println("\n--------------------------------------------------------------------------------");
    switch(x)
    {
    case 1: //area of triangle by parameterized constructor
    double base,height;
    triangle d1 = new triangle();
    System.out.print("Enter Base of triangle : ");
    base=sc.nextDouble(); //read base from user
    double base1=d1.validate(base);
    System.out.print("Enter height of triangle : ");
    height=sc.nextDouble(); //read height from user
    double height1=d1.validate(height);
    triangle t=new triangle(base1,height1);
    //reference variable of shape and object type of triangle
    
    s=t;
    System.out.println("Area of triangle is : "+ s.calculate_area()); //displaying area of triangle
    System.out.println("\n--------------------------------------------------------------------------------");
    break;
    case 2: //area of rectangle by default constructor
    double len,bre;
    rectangle r1 = new rectangle();
    System.out.print("Enter length of rectangle : ");
    len=sc.nextDouble(); //read lenght from user
    double len1=r1.validate(len);
    System.out.print("Enter breadth of rectangle : ");
    bre=sc.nextDouble(); //read breadth from user
    double bre1=r1.validate(bre);
    rectangle r=new rectangle(len1,bre1);
    //reference variable of shape and object type of rectangle
    s=r;
    System.out.println("Area of rectangle is : "+ s.calculate_area()); //displaying area of rectangle
    System.out.println("\n--------------------------------------------------------------------------------");
    break;
    case 3: //Exited
    System.out.println("Thank You");
    System.out.println("\n--------------------------------------------------------------------------------");
    res=false;
    break;
    default: //default case
    System.out.println("Invalid choice");
    System.out.println("\n--------------------------------------------------------------------------------");
    }
    }
    }
    }
