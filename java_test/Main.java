package java_test;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner c = new Scanner(System.in);

        System.out.print("What is your name? ");
        String name = c.nextLine();

        System.out.println(String.format("Hello, %s!", name));
        c.close();
    }

}