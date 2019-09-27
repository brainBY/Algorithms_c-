//https://www.youtube.com/watch?v=YJ-OUnZu7nQ&list=PLRx0vPvlEmdDHxCvAQS1_6XV4deOwfVrz&index=9
#include <iostream>
#include <algorithm>

using namespace std;

class Student{
public:
    string name;
    int score;
    //생성자
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }
    // 정렬 기준은 '점수가 작은 순서'
    bool operator <(Student&student){
        return this->score < student.score;
    }
};

int main(void){
    Student students[]={
        Student("A", 90),
        Student("B", 93),
        Student("C", 97),
        Student("D", 87),
        Student("E", 92)
    };
    sort(students, students+5);
    for(int i=0;i<5;i++){
        cout<<students[i].name<<' ';
    }
    return 0;
}