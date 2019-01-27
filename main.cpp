#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
double  square(double x){
 //Learning Functions
    return x*x;
}

void print_square(double x){
    cout<<"The square of " << x << " is " << square(x) <<endl;
}

int main() {
    print_square(56);
}*/


/*
int main(){
    //Learning Vectors
    vector <int> numVec = {3, 4, 2, 4, 9, 4, 2,4};

    vector<string> words = {"the", "tall", "black", "sheep", "ran", "over", "me"};

    cout<<numVec[3]<<endl;
    cout<<words[3]<<endl;

    vector <int> numSize(9);  //Vector of 6 ints intialized to 0
    vector <string> stringSize(7); //Vector of 7 strings initialized to "" (empty string)

    for(int i =0; i<numVec.size(); ++i ){ //Transverse through a vector (numVec)
        cout<<numVec[i]<<endl;
    }

    for(int i =0; i < words.size(); ++i){ //Transverse through a vector (words)
        cout<<words[i]<<endl;
    }

    for(int num : numVec)  //for each num in numVec
        cout<<num<<endl;


}*/

/*int main(){
    //Growing a Vector
    vector<string> friends;

    friends.push_back("Kevin");
    friends.push_back("Josh");
    friends.push_back("Syraa");
    friends.push_back("Bree");
    friends.push_back("Chris");
    friends.push_back("Kyle");

    cout<<friends.size()<<endl;

    for(int i =0; i < friends.size(); ++i){
        cout<<"one of my Freind's name is "<<friends[i]<<endl;
    }


}*/

/*int main(){
    //Vector Calculations

    vector<double> scores;
    cout<<"Enter score values use / to indicate end of score input";
    for(double score; cin>> score;)
        scores.push_back(score); //fill the scores vector with student score


        //Calculate Average score
        double sum = 0;
        for(int x: scores)
            sum += x;
        cout<<"Average Score is "<< (sum/scores.size())<<endl;


        //Calulate Median

        sort(scores.begin(), scores.end());
        cout<<"Median Score is "<<scores[scores.size()/2]<<endl;
}*/

/*struct student{
    int studentID;
    int studentYear;
    int numClass;
    float tuition;

};

int main(){

    student johnKerry; //define a new student

    // give values to structure members
    johnKerry.studentID = 527324;
    johnKerry.studentYear = 2019;
    johnKerry.numClass = 4;
    johnKerry.tuition = 4714.56;

    cout<<"You are taking "<<johnKerry.numClass<<" classes"<<endl;
    cout<<"Your Tuition is $"<<johnKerry.tuition<<endl;


}*/


