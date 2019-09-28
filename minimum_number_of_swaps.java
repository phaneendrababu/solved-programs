import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the minimumSwaps function below.
    static int minimumSwaps(int[] arr) 
    {
        int flag=0;
        int count=0;
        int min=0;
        int k=0;
        for(int i=0;i<arr.length;i++)
        {
            min=999999;
            for(int j=i+1;j<arr.length;j++)
            {
                if(arr[j]<min&&arr[j]<arr[i])
                {
                    min=arr[j];
                    flag++;
                    k=j;
                }
            }
            if(flag>0)
            {
                int temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
                count++;

            }
            flag=0;
        }
        return count;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] arr = new int[n];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        int res = minimumSwaps(arr);

        bufferedWriter.write(String.valueOf(res));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
