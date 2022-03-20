import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
       public static void main(String[] args) {

        Scanner sc= new Scanner(System.in);
        int arr[]= new int[3];
        for(int i=0;i<3;i++)
        {
            arr[i]=sc.nextInt();
        }
        int max=arr[0];
        for(int i=0;i<3;i++)
        {
            if(arr[i]>=max)
            {
                max=arr[i];
            }
        }
        System.out.println(max);
    }
    
}
