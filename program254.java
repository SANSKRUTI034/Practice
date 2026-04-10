//update the H  letter in a string  by '_'
import java.util.*;

class Stringx
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();

        Arr[0] = '_';


        return new String(Arr);

        
    }
}

class program254
{
    public static void main(String A[])
    {
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String sobj = scanobj.nextLine();  

        Stringx strobj = new Stringx();

        sobj = strobj.Update(sobj);         //change(not preferable)

        System.out.println("Updated string is : "+sobj);


    
    }
}