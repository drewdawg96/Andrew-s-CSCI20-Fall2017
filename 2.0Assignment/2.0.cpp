/* 
This program is to calculate and intake a runner's time and speed. Each
runner's time is to measure in minutes and seconds, while their speed should measure
in FPS and MPS.  Each participant's time will compare their difference to the first 
place winner. These splits will be measured by the fourth mile as well. 
Creator: Andrew Vargas
Date: 10/4/2017
*/

#include <iostream>
#include <string> 
#include <cmath>
using namespace std;

class RunnerStats { // Runner's Statistics in a class
    public: 
        void setTime( double run_time);
        void setMinutes( int run_minutes); // initializing the Runner's stats... time, speed(mph), top speed, and the split
        void setMinutes( int run_seconds); 
        void setSpeed( double run_Mph); // speed run set in MPH
        void setTop( double top_time); // top runner's time 
        void setsplitMinutes( int run_splitMinutes); // split of runner's time
        void setsplitSeconds( int run_splitSeconds);
        void setfps(double run_Fps); // runner's fps
        void setmps(double run_Mps); // runner's mps
        void printFunc();
        
            
        double getTime();
        int getMinutes();
        int getSeconds();
        double getSpeed();
        double getTop();
        double getfps();
        double getmps();
        int getsplitMinutes();
        int getsplitSeconds(); 
    
    private:
        double user_Time;
        int user_Minutes;
        int user_Seconds;
        double user_Speed;
        double user_fps; 
        double user_mps; 
        double win_Time;
        int splitMinutes;
        int splitSeconds; 
    
};

void RunnerStats::printFunc() {
    
    cout <<  "Your initial run time was: "<< getTime() << " you ran a total of " << getSpeed()   <<  "miles." <<endl;  // User's input of total run time, distance, split and top runner's time
    cout << "The 1/4 mile split time was: " << getsplitMinutes() << " minutes and " << getsplitSeconds() << " seconds" endl;
    cout << "The difference between your time and the top time was: " <<  << endl;

}

void RunnerStats::setTime( double run_time) { // setTime is a RunnerStats member function along w/ the rest down below 
    user_Time = run_time;
}

void RunnerStats::setMinutes( int run_minutes) {
    user_Minutes = run_minutes;
}

void RunnerStats::setSeconds( int run_seconds) {
    user_Seconds = run_seconds;
}

void RunnerStats::setSpeed( double run_Mph) { // member function
    user_Speed = run_Mph;
}

void RunnerStats::setfps( double run_Fps) { // member function
    user_fps = run_Fps;
}

void RunnerStats::setmps( double run_Mps) {
    user_mps = run_Mps;
}

void RunnerStats::setTop( double top_time) { 
    win_Time = top_time;
}

void RunnerStats::setsplitMinutes( int run_splitMinutes) { 
    splitMinutes = run_splitMinutes;
}

void RunnerStats::setsplitSeconds( int run_splitSeconds) { 
    splitSeconds = run_splitSeconds;
}

double RunnerStats:: getTime() {
    return user_Time; 
}

int RunnerStats:: getMinutes() {
    return user_Minutes;
} 

int RunnerStats:: getSeconds() {
    return user_Seconds;
} 

double RunnerStats:: getSpeed() {
    return user_Speed; 
}

double RunnerStats:: getTop() {
    return win_Time; 
}

int RunnerStats::getsplitMinutes() {
    return splitMinutes;
}

int RunnerStats::getsplitSeconds() {
    return splitSeconds;
}

int main () { // where the user's information are put through the appropiate equations
    
    RunnerStats user;
    RunnerStats top; 
        
        int runnerMinutes = 0; 
        int runnerSeconds = 0; 
        double runnerMiles = 0; 
        double topRunner = 0;
        double topRunnersec = 0; 
        double runnerSplit = 0;
        double runnerSpeed = 0;
        double runnerfps = 0; 
        double runnermps = 0;
        int userTime = 0; 
         
        cout << "Please enter your run time minutes: " << endl;
        cin >> runnerMinutes
        
        cout << "Please enter your run time seconds: " << endl;
        cin >> runnerSeconds
        user.setTime(runnerTime);
        user.setSeconds(runnerSeconds);
        
        
        cout << "How many miles did you achieve? " << endl; 
        cin >> runnerMiles;
        user.setSpeed(runnerMiles);
        top.setSpeed(runnerMiles);
        
        cout << "What was the top winning time? " << endl; 
        cin >> topRunner;
        
        cout << " "
        
        
        runnerTime = runnerSeconds / 60;
        runnerfps = (runnerTime / runnerMiles) * 88; 
        runnermps = (runnerTime / runnerMiles) * 26.8224;  
        
        userTime = (runnerTime / 60) / runnerMiles; 
        user.split((userTime / 4) / 60); // the mile time initializing 1/4 split times
        user.printFunc();
        
        return 0;
    
}
    
// 1 mile per min = 88 feet per second
// 1 mile per min = 26.8224 meters per second
//miles / run time = mile time

