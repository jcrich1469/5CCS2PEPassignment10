// TODO: implement romanToInteger in here
#include <string>
using std::string;

// to delete

#include <iostream>

int romanToInteger(const string & s){
	
	int sumInteger = 0;

	int nextIndex = 0;
	int prevIndex = 0;
	
	for (int i = s.size()-1, j = s.size(); i>= 0; --i,--j){

		if(i < s.size()-1){

			nextIndex = s.at(i);
			prevIndex = s.at(j);

			switch(nextIndex) {

    				case 'I' : nextIndex = 1;
            			break;       
    				case 'V' : nextIndex = 5;
             			break;
    				case 'X' : nextIndex = 10;
             			break;
    				case 'L' : nextIndex = 50; 
            			break;       
    				case 'C' : nextIndex = 100;
             			break;
				case 'D' : nextIndex = 500;
             			break;
				case 'M' : nextIndex = 1000;
             			break;
		
		  		default : -1;
      
			}
		
			switch(prevIndex) {

    				case 'I' : prevIndex = 1;
            			break;       
    				case 'V' : prevIndex = 5;
             			break;
    				case 'X' : prevIndex = 10;
             			break;
    				case 'L' : prevIndex = 50; 
            			break;       
    				case 'C' : prevIndex = 100;
             			break;
				case 'D' : prevIndex = 500;
             			break;
				case 'M' : prevIndex = 1000;
             			break;
		
		  		default : -1;

			}
		
			if(nextIndex >= prevIndex){
				//cout<<"next"<<endl;
				sumInteger += nextIndex;

			} else if(nextIndex < prevIndex){
				//cout<<"lt"<<endl;
				sumInteger -= nextIndex;
					
			}

			//cout<<"at "<<s.at(i)<<", index "<<i<<", sum = :"<<sumInteger<<endl;
            	} else {// the first case, unmoved.
			
			nextIndex = s.at(i);
			switch(nextIndex) {

    			case 'I' : nextIndex = 1;
            		break;       
    			case 'V' : nextIndex = 5;
             		break;
    			case 'X' : nextIndex = 10;
             		break;
    			case 'L' : nextIndex = 50; 
            		break;       
    			case 'C' : nextIndex = 100;
             		break;
			case 'D' : nextIndex = 500;
             		break;
			case 'M' : nextIndex = 1000;
             		break;
		
		  	default : -1;
      
			}
			sumInteger += nextIndex;	
					
		}
        }

	return sumInteger;
	
}
