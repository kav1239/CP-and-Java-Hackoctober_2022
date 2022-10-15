import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class employee                                                 //Creation of Employee Class                                                        
{
    String name,address,mailid,mobile_no,empid;
    double bp,da,hra,pf,gross_salary,club_fund,net_salary;

    employee()
    {
        name=null;
        address=null;
        mailid=null;
        mobile_no=null;
        empid=null;
        bp=0.0;
        da=0.0;
        hra=0.0;
        pf=0.0;
        gross_salary=0.0;
        club_fund=0.0;
        net_salary=0.0;
    }

    static boolean isValidMobileNo(String str)                                                 //Creation of isValidMobileNo Method
    {
        Pattern ptrn = Pattern.compile("(0/91)?[7-9][0-9]{9}");
        Matcher match = ptrn.matcher(str);
        return (match.find() && match.group().equals(str));
    }

    static boolean isValid(String email)                                                 //Creation of isValid Method
    {
        String emailRegex = "^[a-zA-Z0-9_+&*-]+(?:\\."+
                "[a-zA-Z0-9_+&*-]+)*@" +
                "(?:[a-zA-Z0-9-]+\\.)+[a-z" +
                "A-Z]{2,7}$";

        Pattern pat = Pattern.compile(emailRegex);
        if (email == null)
            return false;
        return pat.matcher(email).matches();
    }

    public void valid_no()                                                 //Creation of valid_no Method
    {
        boolean mob = true;
        Scanner sc = new Scanner(System.in);
        while(mob){
            if(isValidMobileNo(mobile_no)){
                mob=false;
            }
            else {
                System.out.println("Not a valid mobile number.");
                System.out.print("Mobile number : ");
                mobile_no = sc.next();
            }
        }
    }

    public void valid_mail()                                                 //Creation of valid_mail Method
    {
        boolean em=true;
        Scanner sc = new Scanner(System.in);
        while(em){
            if(isValid(mailid)){
                em=false;
            }
            else {
                System.out.println("Not a valid Email.");
                System.out.print("Email : ");
                mailid = sc.next();
            }
        }
    }

    public void get_details()                                                 //Creation of get_details Method
    {   Scanner sc = new Scanner(System.in);
        System.out.print("Employee Id : ");
        empid = sc.next();
        System.out.print("Mobile number : ");
        mobile_no = sc.next();
        valid_no();
        System.out.print("Name : ");
        name =sc.next();
        System.out.print("Address : ");
        address =sc.next();
        System.out.print("E-Mail : ");
        mailid =sc.next();
        valid_mail();
    }

    public void show_details()                                                 //Creation of shows_details Method
    {
        System.out.print("Employee Id : "+empid);
        System.out.print("\nMobile : "+mobile_no);
        System.out.print("\nName : "+name);
        System.out.print("\nAddress : "+ address);
        System.out.print("\nE-mail : "+mailid);
        hra=0.1*bp;
        da=0.97*bp;
        pf=0.12*bp;
        club_fund=0.001*bp;
        gross_salary= bp+da+hra;
        net_salary= gross_salary-pf-club_fund;
    }

    class programmer extends employee                                                 //Creation of derived class programmer
    {
        void getinfo_programmer()                                                 //Creation of getinfo_programmer Method
        {
            System.out.println("\n----------------------------Programmer's Detail----------------------------");
            get_details();
            System.out.println("\n----------------------------Pay Slip----------------------------");
            Scanner obj = new Scanner(System.in);
            System.out.print("\nBasic pay : ");
            bp= obj.nextDouble();
        }

        void displayinfo_programmer()                                                 //Creation of displayinfo_programmer Method
        {
            System.out.println("\n----------------------------Programmer's Personal Details----------------------------");
            show_details();
            System.out.println("\n----------------------------Pay Slip of Programmer's----------------------------");
            System.out.print("HRA: "+hra+" rupees");
            System.out.print("\nDA : "+da+" rupees");
            System.out.print("\nGross Salary: "+gross_salary+" rupees");
            System.out.print("\nNet Salary : "+net_salary+" rupees");
            System.out.println("\n--------------------------------------------------------------------------------");
        }
    }

    class team_leader extends employee                                                 //Creation of derived class team_leader
    {
        void getinfo_team()                                                 //Creation of getinfo_team Method
        {
            System.out.println("\n----------------------------Team Leader's Detail----------------------------");
            get_details();
            System.out.println("\n----------------------------Pay Slip----------------------------");
            Scanner obj = new Scanner(System.in);
            System.out.print("\nBasic pay : ");
            bp= obj.nextDouble();
        }

        void displayinfo_team()                                                 //Creation of dispalyinfo_team Method
        {
            System.out.println("\n----------------------------Team Leader's Personal Details----------------------------");
            show_details();
            System.out.println("\n----------------------------Pay Slip of Team Leader's----------------------------");
            System.out.print("HRA: "+hra+" rupees");
            System.out.print("\nDA : "+da+" rupees");
            System.out.print("\nGross Salary: "+gross_salary+" rupees");
            System.out.print("\nNet Salary : "+net_salary+" rupees");
            System.out.println("\n--------------------------------------------------------------------------------");
        }
    }

    class Assistant_manager extends employee                                                 //Creation of derived class Assistant_manager
    {
        void getinfo_manager()                                                 //Creation of getinfo_manager Method
        {
            System.out.println("\n----------------------------Assistant manager's Detail----------------------------");
            get_details();
            System.out.println("\n----------------------------Pay Slip----------------------------");
            Scanner obj = new Scanner(System.in);
            System.out.print("\nBasic pay : ");
            bp= obj.nextDouble();
        }

        void displayinfo_manager()                                                 //Creation of displayinfo_team Method
        {
            System.out.println("\n----------------------------Assistant manager's Personal Details----------------------------");
            show_details();
            System.out.println("\n----------------------------Pay Slip of Assistant manager's----------------------------");
            System.out.print("HRA: "+hra+" rupees");
            System.out.print("\nDA : "+da+" rupees");
            System.out.print("\nGross Salary: "+gross_salary+" rupees");
            System.out.print("\nNet Salary : "+net_salary+" rupees");
            System.out.println("\n--------------------------------------------------------------------------------");
        }
    }

    class Project_manager extends employee                                                 //Creation of derived class Project_manager
    {
        void getinfo_project()                                                 //Creation of getinfo_project Method
        {
            System.out.println("\n----------------------------Project Manager's Detail----------------------------");
            get_details();
            System.out.println("\n----------------------------Pay Slip----------------------------");
            Scanner obj = new Scanner(System.in);
            System.out.print("\nBasic pay : ");
            bp= obj.nextDouble();
        }

        void displayinfo_project()                                                 //Creation of displayinfo_project Method
        {
            System.out.println("\n----------------------------Project Manager's Personal Details----------------------------");
            show_details();
            System.out.println("\n----------------------------Pay Slip of Project Manager's----------------------------");
            System.out.print("HRA: "+hra+" rupees");
            System.out.print("\nDA : "+da+" rupees");
            System.out.print("\nGross Salary: "+gross_salary+" rupees");
            System.out.print("\nNet Salary : "+net_salary+" rupees");
            System.out.println("\n--------------------------------------------------------------------------------");
        }
    }
    
    public static void main(String args[]){
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("\nEmployee Salary Entries :-");
        boolean cas=true;
        while(cas)
        {
            System.out.println("\nThe choice for Employee :\nEnter choice:1) for Programmer\nEnter choice:2) for Team Leader\nEnter choice:3) for Assitant Manager\nEnter choice:4) for Project Manager\nEnter the choice:5) Exit\n");
            System.out.println("--------------------------------------------------------------------------------");
            System.out.print("Enter your choice : ");
            n=sc.nextInt();
            switch(n)                                                 //Switch case for output based on choice         
            {                                
                case 1:
                    employee obj=new employee();                                                 //Creation of employee object
                    programmer p =obj.new programmer();                                                 //Creation of programmer object
                    p.getinfo_programmer();
                    p.displayinfo_programmer();
                    break;
                case 2:
                    employee team=new employee();                                                 //Creation of employee object
                    team_leader t =team.new team_leader();                                                 //Creation of team leader object
                    t.getinfo_team();
                    t.displayinfo_team();
                    break;
                case 3:
                    employee assist=new employee();                                                 //Creation of employee object
                    Assistant_manager a =assist.new Assistant_manager();                                                 //Creation of Assistant manager object
                    a.getinfo_manager();
                    a.displayinfo_manager();
                    break;
                case 4:
                    employee project=new employee();                                                 //Creation of employee object
                    Project_manager m =project.new Project_manager();                                                 //Creation of project manager object
                    m.getinfo_project();
                    m.displayinfo_project();
                    break;
                case 5:
                    System.out.println("--------------------------------------------------------------------------------");
                    System.out.println("\nThank you for using Employee's Salary entries\n");
                    System.out.println("--------------------------------------------------------------------------------");
                    cas=false;
                    break;
                default:
                    System.out.println("--------------------------------------------------------------------------------");
                    System.out.println("\nInvalid Choice. Try again.");
                    System.out.println("--------------------------------------------------------------------------------");
                    break;
            }
        }
    }
}   