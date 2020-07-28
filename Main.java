// https://www.acmicpc.net/problem/14681
// IF문(4), 사분면고르기
// NUMBER 14681

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x, y;
        x = scanner.nextInt();
        y = scanner.nextInt();

        if (x > 0) {
            if (y > 0) {
                System.out.println(1);
            } else {
                System.out.println(4);
            }
        } else {
            if (y > 0) {
                System.out.println(2);
            } else {
                System.out.println(3);
            }

        }
        scanner.close();
    }
}
