// https://www.acmicpc.net/problem/2407
// NUMBER 2407, 조합

// BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
// Scanner scanner = new Scanner(System.in);

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Scanner;

public class Main {
    static String cache[][] = new String[101][101];

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();

        for (int i = 0; i < cache.length; i++) {
            for (int j = 0; j < cache[i].length; j++) {
                cache[i][j] = "";
            }
        }

        System.out.println(combination(n, m));
        scanner.close();
    }

    public static String combination(int n, int r) {
        if (n == r || r == 0)
            return "1";

        if (!cache[n][r].equals(""))
            return cache[n][r];

        cache[n][r] = bigNumAdd(combination(n - 1, r - 1), combination(n - 1, r));
        return cache[n][r];
    }

    public static String bigNumAdd(String num1, String num2) {
        long sum = 0;
        StringBuilder result = new StringBuilder("");

        while (!num1.isEmpty() || !num2.isEmpty() || sum != 0) {
            if (!num1.isEmpty()) {
                sum += num1.charAt(num1.length() - 1) - '0';
                num1 = num1.substring(0, num1.length() - 1);
            }
            if (!num2.isEmpty()) {
                sum += num2.charAt(num2.length() - 1) - '0';
                num2 = num2.substring(0, num2.length() - 1);
            }

            result.append(Long.toString(sum % 10));
            sum /= 10;
        }
        return result.reverse().toString();
    }
}
