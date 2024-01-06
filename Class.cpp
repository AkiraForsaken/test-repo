#include <iostream>

using namespace std;

class Abstraction{
	virtual void Verify()=0;
};
class Song:Abstraction /*Song class signing Abstraction contract, provide for Verify*/  {
	private:
	string Name;
	string nationality;
	int views;
	int date;

	public:
	void setName(string name){ //setter
		Name = name;}
	string getname(){ //getter
		return Name;}
	void setNationality(string country){
		nationality = country;}
	string getNationality(){
		return nationality;
	}
	void setdate(int year){
		if (year>=1800)
		date = year;
	}
	int getdate(){
		return date;
	}
	void setviews(int view){
		views = view;
	}
	int getviews(){
		return views;
	}
	
	void Intro(){
		cout << "Name :"<<Name<<endl;
		cout << "Country :"<<nationality<<endl;
		cout << "Date of origin :"<<date<<endl;
		cout << "Views :"<<views<<endl;
	};
	
	void Verify(){
		if (views > 1000000){
			cout<<getname()<<" is verified!\n";}
		else {
			cout<<getname()<<" is not verified!\n";
		}
	}
	Song(string name, string country, int year, int view){ //constructor
		Name = name;
		nationality = country;
		date = year;
		views = view;
	};
};
int main(){
	Song song1("La Lung","Viet",2015,1000000);
	Song song2("Photograph","English",2014,20000000);

	song1.setName("Stay");
	song1.setNationality("Murica");
	song1.setdate(2020);
	cout << song1.getNationality();
	
//	song1.Name = "La lung";
//	song1.nationality = "Viet";
//	song1.date =2015;
	
//	song2.Name = "Photograph";
//	song2.nationality = "English";
//	song2.date = 2014;
	
	// song1.Verify(); //one button to invoke Verify, doesnt care about how complex the verify function is
	song2.Verify();
	return 0;
}