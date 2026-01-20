#include<iostream>
#include<string>
using namespace std;
//class student
class Student{
public:
    string studentid,name,contact;
    int roomnumber;
    void registration(){
    cout<<"-->Enter student's name: ";getline(cin,name);
    cout<<"-->Enter student's id: ";cin>>studentid;
    cout<<"-->Enter student's contact number: ";cin>>contact;}
    void update(){
    cout<<"-->Enter student's name: ";cin>>name;
    cout<<"-->Enter student's id: ";cin>>studentid;
    cout<<"-->Enter student's contact info: ";cin>>contact;}
    void display(){
    cout<<"-->The name of Student is: "<<name<<endl;
    cout<<"-->The Student id of student is: "<<studentid<<endl;
    cout<<"-->The contact number of student is: "<<contact<<endl;
    if(roomnumber!=0){
    cout<<"-->The room number of student is: "<<roomnumber<<endl; }
    else{cout<<"-->No room assigned.\n";}


    }
};
//main class
int main(){
Student students[200];
int studentcount=0;
cout<<"----------Hostel management system.----------\n";
while(1){//while true loop
        cout<<"1. Student registration\n";
        cout<<"2. Student Update.\n";
        cout<<"3. Students display\n";
        cout<<"4. Search\n";
        cout<<"5. Assign Room number.\n";
        cout<<"6. Exit.\n";
        cout<<"Select: ";int a;cin>>a;
        cin.ignore();
switch(a){//switch case
case 1://case 1
    {students[studentcount].registration();studentcount++;}break;

    case 2://case 2
        {
        cout<<"Enter students id to update: ";string id;cin>>id;
        for(int i=0;i<studentcount;i++){
        if(students[i].studentid==id){cout<<"Student found."<<students[i].name<<endl;
            students[i].update();}
    }}break;
case 3://case 3
    {
    for(int i=0;i<studentcount;i++){cout<<"---->Student "<<i+1<<endl;
        students[i].display();}}break;
case 4://case 4
    {bool found=false;
    cout<<"Enter student's id (24cse24) : ";string id;cin>>id;
        for(int i=0;i<studentcount;i++){
            if(id==students[i].studentid){
                students[i].display();found=true;break;}}
                if(!found){cout<<"No student\n";}
                }break;
case 5://case 5
    {
        cout<<"Enter student id to assign room: ";string id;cin>>id;
        bool studentfound=false;
        for(int i=0;i<studentcount;i++){
            if(id==students[i].studentid){
                cout<<"Student found. "<<students[i].name<<endl;
                cout<<"Enter room number to allocate: ";cin>>students[i].roomnumber;
                cout<<"Room assigned successfully.\n";
                studentfound=true;break;
            }
        }
        if(!studentfound){cout<<"Student ID not found.\n";}
    }break;
case 6://case 5
    return 0;
}//switch case





}//while true loop

return 0;}
