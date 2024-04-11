#include<iostream>
#include<windows.h>
using namespace std;
void print_task(string task[],int task_count)
{
    cout<<"Task To Do: "<<endl;
    cout<<"---------------------"<<endl;
    for(int i=0; i<task_count;i++)
    {
        cout<<"Task"<<i<<" : "<<task[i]<<endl;
    }
    cout<<"---------------------"<<endl;
}

int main()
{
system("color a");
string task[10]={" "};
int task_count=0;

int option=-1;
while(option !=0)
{
    cout<<"-----To Do List------"<<endl;
    cout<<"1-To Add New Task-"<<endl;
    cout<<"2-To View Tasks-"<<endl;
    cout<<"3-Delete The Task-"<<endl;
    cout<<"0-Terminate The Programe"<<endl;
    cin>>option;
    switch (option)
    {
    case 1:
        {
            if(task_count>9)
            {
                cout<<"----Task List is Full----"<<endl;
            }
            else{
                cout<<"Enter A New Task: ";
                cin.ignore();
                getline(cin,task[task_count]);
                task_count++;
            }
            break;
        }
        case 2:
        system("cls");
        print_task(task,task_count);
       break;
       case 3:
       {
        system("cls");
        print_task(task,task_count);
        int del_task=0;
        cout<<"Enter A Task to Delete: ";
        cin>>del_task;
        if(del_task<0 || del_task>9)
        {
            cout<<"You Entered Invalid Task No. "<<endl;
            break;
        }
        for(int i=del_task;i<task_count;i++)
        {
            task[i]=task[i+1];
        }
        task_count = task_count-1;
        break;
       }
       case 0:
       cout<<"Terminating the programe -----------------"<<endl;
       break;
       default:
       cout<<"You Entered Invalid Value!"<<endl;
    }
}
    return 0;
}
