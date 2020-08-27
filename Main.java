// https://www.acmicpc.net/problem/2407
// NUMBER 2407, 조합

// BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
// Scanner sc = new Scanner(System.in);
// Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
// StringBuilder sb = new StringBuilder();

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    static final BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringBuilder sb = new StringBuilder();
    static int t, n, x1, y1, x2, y2;
    static List<Planet> planets = new ArrayList<>();

    static class Planet {
        int x;
        int y;
        int r;

        Planet(int x, int y, int r) {
            this.x = x;
            this.y = y;
            this.r = r;
        }
    }

    public static void main(String[] args) throws IOException {
        t = Integer.parseInt(br.readLine());
        for (int i = 0; i < t; i++) {
            int[] coor = parseIntArr(br.readLine());
            x1 = coor[0];
            y1 = coor[1];
            x2 = coor[2];
            y2 = coor[3];

            n = Integer.parseInt(br.readLine());
            planets.clear();
            for (int j = 0; j < n; j++) {
                coor = parseIntArr(br.readLine());
                planets.add(new Planet(coor[0], coor[1], coor[2]));
            }

            sol();
        }

        System.out.println(sb.toString());
    }

    static void sol() {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            double disToStart = Math.sqrt(Math.pow(planets.get(i).x - x1, 2) + Math.pow(planets.get(i).y - y1, 2));
            double disToEnd = Math.sqrt(Math.pow(planets.get(i).x - x2, 2) + Math.pow(planets.get(i).y - y2, 2));

            // (원이 두 점 모두 포함하는 경우) || (원이 두 점 모두 포함하지 않는 경우)
            if ((disToStart < planets.get(i).r && disToEnd < planets.get(i).r)
                    || (disToStart > planets.get(i).r && disToEnd > planets.get(i).r))
                continue;

            cnt++;
        }
        sb.append(cnt + "\n");
    }

    static int[] parseIntArr(String input) {
        return Arrays.stream(input.split(" ")).mapToInt(Integer::parseInt).toArray();
    }
}
