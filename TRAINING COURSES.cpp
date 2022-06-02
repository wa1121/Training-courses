#include <iostream>
#include <fstream>

#include <cctype>
using namespace std;
int Specialties(string sp[],int size);
int course(int x);
int coursesH(int courses);
int coursesE(int courses);
int coursesC(int courses);
int *arr(string course,int price,int days);

//Structure for customer data
struct names{
	string fname;
	string lname;
};
struct customr{
	names name;
	int id;
	string email;
};

int main(){
	customr c1;
	int id,x,course,z,m,w;
	string name,email;
	cout<<"                        welcome to Bingo application       "<<endl;
	cout<<"           Develop your skills with our training course program           "<<endl;
	cout<<"enter your name:  "<<endl;
	cin>>c1.name.fname>>c1.name.lname;
	cout<<"enter your ID:  "<<endl;
	cin>>c1.id;
	cout<<" enter your Email: "<<endl;
	cin>>c1.email;
	
	//array for the majors
	string sp[3]={" Health "," Engineering "," computer "};
	x=Specialties(sp,3);
	
	//If the customer wants the course, he will press 1 and if he does not want it, he will press 0
	if(x==1){
		cout<<"Your course has been confirmed  "<<endl;
		cout<<"Please check your email for the details "<<endl;
		cout<<"Thank you for joining us and trusting us"<<endl;
		cout<<"do you want another course? " <<"  If yes, press 1   If not press 0 "<<endl;
		cin>>m;
		
		//If the customer wants another course, he will press 1 and if he does not want it, he will press 0
		if (m==1){
			x=Specialties(sp,3);
		}
		else{
			cout<<" Thank you ";
		}
	}
	if(x==0){
		cout<<"do you want another course? " <<"  If yes, press 1   If not press 0 "<<endl;
		cin>>m;
		if (m==1){
			x=Specialties(sp,3);
			if(x==1){
				cout<<"Your course has been confirmed  "<<endl;
		        cout<<"Please check your email for the details "<<endl;
		        cout<<"Thank you for joining us and trusting us"<<endl;	}
		else{
			" Thank you ";}}}
		}
		
		//Function to display majors
int Specialties(string sp[],int size){
    int x;
	cout<<"         Available majors       "<<endl;
	for(int i=0;i<size;i++){
		cout<<i+1<<" - "<<sp[i]<<endl;
	}
	int n;
	cout<<"enter the number of your majors : "<<endl;
	cin>>n;
	x=course(n);
	return x;
}
//Function to display the courses
int course(int x){
		switch(x){
			int course,z;
		case 1:
			cout<<"1- first aid "<<endl;
			cout<<"2- Safety and security of patients "<<endl;
			cout<<"Enter the course number: "<<endl;
			cin>>course;
			z=coursesH(course);
        	break;
        case 2:
			cout<<"1- Professional project management "<<endl;
			cout<<"2- electrical engineering "<<endl;
			cout<<"Enter the course number: "<<endl;
			cin>>course;
			z=coursesE(course);
        	break;
        case 3:
			cout<<"1- programming basics "<<endl;
			cout<<"2- Internet of things "<<endl;
			cout<<"Enter the course number: "<<endl;
			cin>>course;
			z=coursesC(course);
        	break;
	}
}

//Function to display course information "Health specialty"

int coursesH(int courses){
	double total;
	int y;
	if(courses==1){
		cout<<"     first aid     "<<endl;
		int *arrayPointer= arr("first aid",305,3);
		cout<<"Do you want to join the course? If yes, press 1" <<"  If not press 0 "<<endl;
		cin>>y;
		return y;
}
    else if(courses==2){
		cout<<"       Safety and security of patients      "<<endl;
	    int *arrayPointer= arr("Safety and security of patients ",270,2);
		cout<<"Do you want to join the course? If yes, press 1" <<"  If not press 0 "<<endl;
		cin>>y;
		return y;
		
	}
	else{
		cout<<"error ";
	}
	}

//Function to display course information "Engineering Specialization"
 int coursesE(int courses){
 	int y;
	if(courses==1){
		cout<<"      Professional project management     "<<endl;
		int *arrayPointer= arr("Professional project management",400,4 );
		cout<<"Do you want to join the course? If yes, press 1" <<"  If not press 0 "<<endl;
		cin>>y;
		return y;
}
    else if(courses==2){
		cout<<"       electrical engineering      "<<endl;
		int *arrayPointer= arr("electrical engineering",630,8);
		cout<<"Do you want to join the course? If yes, press 1" <<"  If not press 0 "<<endl;
		cin>>y;
		return y;
}
}

//Function to display course information "Computer Specialization"
int coursesC(int courses){
	double total;
	int y;
	if(courses==1){
		cout<<"     programming basics     "<<endl;
		int *arrayPointer= arr(" programming basics",220,4 );
		cout<<"Do you want to join the course? If yes, press 1" <<"  If not press 0 "<<endl;
		cin>>y;
		return y;
	}
	else if(courses==2){
		cout<<"        Internet of things     "<<endl;
		int *arrayPointer= arr("Internet of things",170,2 );
		cout<<"Do you want to join the course? If yes, press 1" <<"  If not press 0 "<<endl;
		cin>>y;
		return y;
		
	}
	else {
		cout<<"error";
	}
}

//Dynamic Arrays Function for course information
int *arr(string course,int price,int days){
	int *p=new int[2];
	p[0]=price;
	p[1]=4;
	
	cout<<"The price of the course: "<<p[0]<<endl;
	cout<<"Duration of the course: "<<p[1]<<" days"<<endl;
	
	 ofstream outFile;
    outFile.open("courses.txt",ios::app);
   if (outFile.fail())
   {cout<< "Fail to Open the  File "<<endl;}
   else{
   	    outFile<<course<<"|";
        outFile<<p[0]<<"|";
        outFile<<p[1]<<"|";
         outFile<<endl;
        }
     outFile.close();
	return 0;
}
