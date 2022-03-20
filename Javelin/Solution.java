import java.util.Scanner;

public class Solution {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args){

        

            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            
            if(a>=b){
                if(a>=c){
                    System.out.println(a);
                }else {
                    System.out.println(c);
                }
            }else {
                if(b>=c){
                    System.out.println(b);
                }else {
                    System.out.println(c);
                }
            }

    }
}
