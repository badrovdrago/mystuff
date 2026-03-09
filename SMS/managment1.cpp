#include <iostream>
using namespace std;

struct Student{
    string name;
    int grade;
};

int main(){

    Student students[100];
    int count = 0;
    int choice;

    while(true){

        cout<<"\n1.Add student\n2.Show students\n3.Exit\n";
        cin>>choice;

        if(choice==1){
            cout<<"Name: ";
            cin>>students[count].name;

            cout<<"Grade: ";
            cin>>students[count].grade;

            count++;
        }

        else if(choice==2){
            for(int i=0;i<count;i++){
                cout<<students[i].name<<" "<<students[i].grade<<endl;
            }
        }

        else if(choice==3){
            break;
        }
    }
}
