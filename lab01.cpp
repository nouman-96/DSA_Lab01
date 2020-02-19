#include<iostream>
using namespace std;

const int prod = 500;
const int sal = 50000;

class Employee {
    protected:
    string name;
    float tax_rate;

    public:
    void getName(string naam){
        name = naam;
    }
    void calcSalary(float tax){
        tax_rate = tax;
        double salary = sal - (sal*tax_rate);
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee Salary:  "<<salary<<endl;
    }
};
class Hourly_Employee : public Employee
{
    private:
    float hours;
    float hourly_rate;

    public:
    void calcSalary(float h, float h_r){
        hours = h;
        hourly_rate = h_r;
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee Salary: "<<hours*hourly_rate<<endl;
    }
};
class Salaried_Employee : public Employee
{
    private:
    int salary;

    public:
    void calcSalary(int salaary){
        salary = salaary;
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};

class CommEmployee : public Employee
{
    private:
    double sales;
    double comm_rate;

    public:
    void calcSalary(double salees, double com_rate){
        sales = salees;
        comm_rate = com_rate;
        double Sal =(sales*prod)*comm_rate;
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee Salary: "<<Sal<<endl;
    }
};


int main(){
    Salaried_Employee S1;
    S1.getName("Waqas");
    S1.calcSalary(50000);

    CommEmployee C1;
    C1.getName("Umair");
    C1.calcSalary(70,0.4);
}