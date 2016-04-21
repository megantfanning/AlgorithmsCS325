/* ------------------------------------------------------------------------- *
// Project Name: 	CS325 - Project 2
// File 			Name: Algos.c
// Desc: 			Entry point for project.
// Authors:			Ian Dalrymple, Megan Fanning, Toni York
// Date: 			04/18/2016
*-------------------------------------------------------------------------*/

// Programs accept
//An array V where V[i] is the value of the coin of the ith denomination.
// A value A which is the amount of change we are asked to make

//Algorithms return
// The algorithm should return an array C where C[i] is the number of coins of value V[i] to return as change and m the minimum number of coins it took. 
//if your coin values are [1, 5, 10, 25] then [1,1 ,0, 0] would be 1 penny and 1 nickel = 6 cents.  [6,0,0,0] would also be 6 cents but all six pennies.

//Brute force/Divide and Conquer
int * changeslow(int V[],int A){

}

//Greedy
int * changegreedy(int V[],int A){
    int i=0;
    int totalChange=0;
    int MyCoins[5]={0,0,0,0,0};//TODO fix
    int minCoins=0;
    while(totalChange != A){
        //set i to length of the array
        i=sizeof(V) / sizeof(V[0]);
        //Use the largest value coin possible.
        if(V[i] > 0){
            //check if the value of the coin to ensure we don't give too much change
            if( i+totalChange < A){
                coins= i + coins;
                V[i] = V[i]-1;
                minCoins++;//incriment the number of total coins used
                myCoins[i]=myCoins[i]+i;//incriment my array
                //Subtract the value from the amount of change to be made.
            }else{
                //if the value of i is too great to make change decrease to smaller size coin denomination
                i--;
            }
        }else{
            i--;
        }
    }
}

int B[4]{3,0,0,0,}

//Dynamic
int * changedp(int V[],int A){}
