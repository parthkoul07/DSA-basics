#include<bits/stdc++.h>
using namespace std;

//Q1
void pattern1(int n) {
        for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

//Q2
void pattern2(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

//Q3
void pattern3(int n) {
    for (int i=0; i<n; i++) {
        for (int j=1; j<=i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

//Q4
void pattern4(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

//Q5
void pattern5(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=0; j<n-i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
} 

//Q6
void pattern6(int n) {
     for (int i=1; i<=n; i++) {
        for (int j=0; j<n-i+1; j++) {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

//Q7
void pattern7(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for (int k=0; k<2*i+1; k++) {
            cout << "*";
        }
    cout << endl;
    }
}

//Q8
void pattern8(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        for (int k=0; k<2*n-(2*i+1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

//Q9
void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}

//Q10**
void pattern10(int n) {
    pattern2(n);
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

//Q11**
void pattern11(int n) {
    int start;
    for (int i=0; i<n; i++) {
        if (i%2 == 0) start=1;
        else start=0;
        for (int j=0; j<=i; j++){
            cout << start;
            start = 1-start;
        }
    cout << endl;
    }
}

//Q12****
void pattern12(int n) {
    for (int i=0; i<=n; i++) {
        for (int j=0; j<i; j++) {
            cout << j+1;
        }

        for (int j=0; j<2*(n-i); j++) {
            cout << " ";
        }

        for (int j=i; j>0; j--) {
            cout << j;
            
        }
    cout << endl;
    }
}

//Q13
void pattern13(int n) {
    int start = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << start << " ";
            start++;
        }    
    cout << endl;
    }
}

//Q14******
void pattern14(int n) {
    for (int i=0; i<n; i++) {
        for (char ch='A'; ch <= 'A' + i ; ch++) {   //'A' + 2, for example, means 'C'...looping is done on the ch.
            cout << ch << " ";
        }
        cout << endl;
    }
}

//Q15
void pattern15(int n) {
    for (int i=1; i<=n; i++) {
        for (char ch='A'; ch <= 'A'+(n-i); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

//Q16 
void pattern16(int n) {
    char start = 'A';
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << start;
        }
        start++;
        cout << endl;
    }
}

//Q17
void pattern17(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for (char ch='A'; ch <= 'A' + i; ch++){
            cout << ch;
        }
        for (char chh='A'+i-1; chh >= 'A'; chh--) {
            cout << chh;
        }
        cout << endl;
    }
}

//Q17 alternate****
void pattern17alt(int n) {
    for (int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        
        char ch='A';
        int breakpoint=(2*i + 1)/2;
        for (int j=1; j<=2*i+1; j++) {      //the lines of code below this will run until j<=2i+1
            cout << ch;                     //print the alphabet at j=1 (i.e., A), then go the if else condition 
            if (j<=breakpoint) ch++;        //check the j<=breakpoint condition after printing each character
            else ch--;                      //if else statement tells if ch++ will occur or ch--
        }                                   //after ch++ or ch--, go back to the for loop...j increments...and ch is printed at j=2, depending on whether ch++ occured or ch--
        cout << endl;
    }
}

//Q18** 
void pattern18(int n) {
    for (int i=0; i<n; i++) {
        for (char ch = 'A'+(n-1)- i ; ch <= 'A'+(n-1); ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

//Q19********
void pattern19(int n) {
    for (int i=0; i<n/2; i++) {
        for (int j=0; j<(n-2*i)/2 ; j++) {
            cout << "*"; 
        }
        for (int j=0; j<(2*i); j++) {
            cout << " ";
        }
        for (int j=0; j<(n-2*i)/2 ; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
    for (int i=n/2; i>0; i--) {
        for (int j=0; j<=(n-2*i)/2 ; j++) {
            cout << "*"; 
        }
        for (int j=0; j<(2*(i-1)); j++) {
            cout << " ";
        }
        for (int j=0; j<=(n-2*i)/2 ; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
}

//Q20
void pattern20(int n) {
    int stars;
    for (int i=1; i<=n; i++) {
 
        if (i<=(n+1)/2) stars = i;
        else stars = n+1-i;

        for (int j=0; j<stars; j++) {
            cout << "*";
        }
        for (int j=0; j<n+1-2*stars; j++) {
            cout << " ";            
        }
        for (int j=0; j<stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

//Q21
void pattern21(int n) {
    int stars;
    for (int i=0; i<n; i++) {
        if (i==0 || i==n-1) {
            for (int j=0; j<n; j++) {
            cout << "*";    
        }
        }
        else {
            for (int j=0; j<1; j++) {
            cout << "*";    
        }
            for (int j=0; j<n-2; j++) {
            cout << " ";
        }
            for (int j=0; j<1; j++) {
            cout << "*";
        }
        }
        cout << endl;
    }
}

//Q21alternate******
void pattern21alt(int n) {
    for  (int i=0; i<n; i++) {                       //basically, i am considering all (i,j) pairs and then putting
        for (int j=0; j<n; j++) {                    //conditions on them using if statement
            if (i==0 || i==n-1 || j==0 || j==n-1) {  //the beautiful thing is that it doesnt matter what i,j 
                cout << "*";                         //physically represnt...the machine doesnt know...its purely
            }                                        // mathematical for the machine...this also means
            else cout << " ";                        //whenever smth can be represented in a mathematical way,
        }                                            //the machine WILL understand it.
        cout << endl;
    }
}

//Q22*************************
void pattern22(int n) {
    for  (int i=0; i<2*n-1; i++) {
        for (int j=0; j<2*n-1; j++) {     
           int top = i;
           int left = j;
           int right = (2*n - 2) - j;
           int bottom = (2*n - 2) - i;
           cout << n-min(min(top, left),min(right, bottom));
        }
        cout << endl;
    }
}

int main() {

    int n;
    cin >> n;
    pattern22(n);

    return 0;
}
