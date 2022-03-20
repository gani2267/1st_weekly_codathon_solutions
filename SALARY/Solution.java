import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int bs=sc.nextInt();
        char grade=sc.next().charAt(0);
        int allow=0;
        double hra=(0.2*bs);
        double da=(0.5*bs);
        double pf= (0.11*bs);
        if(grade=='A')
        {
             allow=1700;
        }
        else if(grade=='B')
        {
             allow=1500;
        }
        else
        {
            allow=1300;
        }
        long sum=Math.round(bs + hra + da + allow-pf);
        System.out.println(sum);
        
    }
}
