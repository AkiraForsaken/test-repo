#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//switch(expression)
// case x:  code block ; BREAK; xong qua case moi
//value of switch is compared with each case
//key word: default: if no case match

/* int main(){
	int day;
	cout << "Enter day: " << endl;
	cin >> day;
	switch(day){
		case 3:
	    	cout << "Wednesday";
	    	break;
	    case 4:
	    	cout << "Thursday";
	    		break;
	  	case 9:
	    	cout << "Friday";
	    		break;
	  	case 6:
	    	cout << "Saturday";
				break;
	  	case 7:
	  	  	cout << "Sunday";
	    		break;
		default:
            cout << "Looking forward to the Weekend";
	}
} */ 

int main(){
	int month, year;
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter month: ";
	cin >> month;
	switch(month){
		case 1 : case 3 : case 5 : case 7: case 8: case 10: case 12:
			printf("31\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("30\n");
			break;
		case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 ==0) ?
			printf("29\n"): printf("28\n");
			break;
		default: 
		cout << "you stupid";
	}
	return 0;
}