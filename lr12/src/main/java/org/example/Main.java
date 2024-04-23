package org.example;
public class Main {
    public static void main(String[] args) {

        Tester tester1 = new Tester("Кристина", "Дирко");
        Tester tester2 = new Tester("Анна", "Писарик", 18);
        Tester tester3 = new Tester("Диана", "Ковальчук", 18, "С2", 1250.0);

        Tester.welcomeMessage();

        tester1.printDetails(false);
        System.out.println();
        tester2.printDetails(true);
        System.out.println();
        tester3.printDetails("Информация о Диане",true);
        System.out.println();


    }
}