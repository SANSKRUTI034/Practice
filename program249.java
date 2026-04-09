//used to count a how many times printed
import java.util.*;

class Stringx
{
    public int CountOccurance(String str)
    {
        int iCnt=0;
        char ch = 'a';
        char Arr[] = str.toCharArray();

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] == 'a')
                {iCnt++;
                }

        }
        return iCnt ;
    }
}

class program249
{
    public static void main(String A[])
    {
        int iRet = 0;
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String sobj = scanobj.nextLine();  

        Stringx strobj = new Stringx();
        iRet = strobj.CountOccurance(sobj);

                System.out.println("OCCURANCE IS : "+iRet);


    
    }
}