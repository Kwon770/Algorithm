// https://www.acmicpc.net/problem/2523
// 실습 (4), 별찍기 - 13
// NUMBER 2523

// BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
// Scanner scanner = new Scanner(System.in);

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        StringBuilder unitSb = new StringBuilder();
        StringBuilder starsSb = new StringBuilder();
        for (int i = 1; i <= 2 * n - 1; i++) {
            if (i > n) {
                unitSb.setLength(unitSb.length() - 1);
            } else {
                unitSb.append("*");
            }
            starsSb.append(unitSb + "\n");
        }
        System.out.println(starsSb);
        scanner.close();
    }
}
