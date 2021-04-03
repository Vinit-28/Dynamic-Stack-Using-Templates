#include<iostream>
#include<conio.h>

using namespace std;


// Template Class Stack to Create a StackObject and Perform its Operations //
template <class datatype>
class Stack
{
    public:
        int len,index=-1;
        datatype *arr;
        char c;

        // Constructor To Define Stack Size //
        Stack()
        {
            cout<<"\nEnter Stack Size :: ";
            cin>>len;
            arr=new datatype[len];
            cout<<"\nStack Created Successfully!!!!\n\nHit Enter to Start Stack Operations.....\n";
            getch();
            getch();
        }
        
        // Method to PUSH Data in a Stack //
        void Push_Back()
        {   
            if(index==len-1)
            {
                cout<<"\nNot Enough Space..\n";
            }
            else
            {
                
                index++;
                cout<<"\nEnter Data :: ";
                cin>>arr[index];
                cout<<"\nData Inserted Successfully!!!\n";
            }
            getch();
            getch();
        }

        // Method to POP Data in a Stack //
        void Pop_Back()
        {   
            if(index==-1)
            {
                cout<<"\n\nStack is Empty...\n";
            }
            else
            {
                index--;
                cout<<"\n"<<"Element ' "<<arr[index+1]<<" ' Poped Successfully!!!!\n";
            }
            getch();
            getch();
        }

        // Method to TRAVERSE in a Stack //
        void Display()
        {
            if(index==-1)
            {
                cout<<"\n\nStack is Empty...\n";
            }
            else
            {
                cout<<"\nStack Elements are :::\n\n";
                for(int i=0;i<=index;i++)
                {
                    cout<<"Stack [ "<<i+1<<" ] Element :: "<<arr[i]<<endl;
                }
            }
            getch();
            getch();
        }
};
// END of this Class //


// Template Function Which Will Perform StackOperation or Will Be Used to Call Stack Methods //
template<class datatype>
void PerfromStackOperations(Stack<datatype> StackObject)
{
    char c;
    while(true)
    {
        system("clear");
        cout<<"\n1. Push\n2. Traverse\n3. Pop\n4. Exit\n\n::: ";
        cin>>c;
        if(c=='1')
        {
            StackObject.Push_Back();
        }
        else if(c=='2')
        {
            StackObject.Display();
        }
        else if(c=='3')
        {
            StackObject.Pop_Back();
        }
        else if(c=='4')
        {
            cout<<endl;
            exit(0);
        }
        else
        {
            cout<<"\nWrong Choice...\n";
        }
        // cout<<"\n\nHit Enter to Conitnue...\n";  
        // cin>>c;
    }
}
// END of this Funciton //


// Function to Create a Stack Class Instance According to User-Choosen DataType //
void CraeteStack()
{
    system("clear");
    char c;
    cout<<"\nCreate a Stack For Which Data Type :: \n\n1. Integer\n2. Float\n3. Double\n4. Long Integer\n5. Character\n6. String\n\n::: ";
    cin>>c;
    if(c=='1')
    {
        Stack<int> StackObject;
        PerfromStackOperations(StackObject);
    }
        

    else if(c=='2')
    {
        Stack<float> StackObject;
        PerfromStackOperations(StackObject);
    }
        

    else if(c=='3')
    {
        Stack<double> StackObject;
        PerfromStackOperations(StackObject);
    }
        
        
    else if(c=='4')
    {
        Stack<long int> StackObject;
        PerfromStackOperations(StackObject);
        
    }
        
    else if(c=='5')
    {
        Stack<char> StackObject;
        PerfromStackOperations(StackObject);
    }
        
        
    else if(c=='6')
    {
        Stack<string> StackObject;
        PerfromStackOperations(StackObject);
    }
        
        
    else
    {
        cout<<"\n\nWrong Choice....\n\nHit Enter....\n\n";
        getchar();
        exit(0);
    }   

}
// END of this Funciton //





