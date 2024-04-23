package org.example;

public class Tester {
    private String name;
    private String surname;
    private int Years;
    private String englishLevel;
    private double salary;
    public Tester(String name, String surname) {
        this(name, surname, 0, "None", 0.0);
    }

    public Tester(String name, String surname, int Years) {
        this(name, surname, Years, "None", 0.0);
    }
    public Tester(String name, String surname, int Years, String englishLevel, double salary) {
        this.name = name;
        this.surname = surname;
        this.Years = Years;
        this.englishLevel = englishLevel;
        this.salary = salary;
    }
    // Перегруженные методы
    public void printDetails() {
        System.out.println("Имя: " + name);
        System.out.println("Фамилия: " + surname);
        System.out.println("Возвраст: " + Years);
        System.out.println("Уровень английского: " + englishLevel);
        System.out.println("Зарплата:" + salary);
    }
    public void printDetails(String message) {
        System.out.println(message);
        printDetails();
    }
    public void printDetails(boolean includeSalary) {
        System.out.println("Имя: " + name);
        System.out.println("Фамилия: " + surname);
        System.out.println("Возраст: " + Years);
        System.out.println("Уровень английского: " + englishLevel);
        if(includeSalary)
            System.out.println("Зарплата: " + salary);
        else
            System.out.println("Зарплата: ***");
    }
    public void printDetails(String message, boolean includeSalary) {
        System.out.println(message);
        printDetails(includeSalary);
    }
    public static void welcomeMessage() {
        System.out.println("Информация о Tester");
    }
}
