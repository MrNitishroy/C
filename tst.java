import java.util.Scanner;

public class tst {
    public static void main(String[] args) {
        int a[] =new int [4];
        int sum=1;
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<4;i++)
        {
            a[i]=sc.nextInt();
        }

        for(int i=0;i<4;i++)
        {
           sum=sum*10+a[i];
        }
        sum=sum-10000;
        System.out.println(sum);
    }
    
}
