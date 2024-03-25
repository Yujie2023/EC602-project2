#include <iostream>
#include <limits>
/*
public class Percolation {

    // creates n-by-n grid, with all sites initially blocked
    public Percolation(int n)

    // opens the site (row, col) if it is not open already
    public void open(int row, int col)

    // is the site (row, col) open?
    public boolean isOpen(int row, int col)

    // is the site (row, col) full?
    public boolean isFull(int row, int col)

    // returns the number of open sites
    public int numberOfOpenSites()

    // does the system percolate?
    public boolean percolates()

    // test client (optional)
    public static void main(String[] args)
}
*/

class Percolation {
private:
    int size;     //size * size square
    int* P;     //the array of 
    int* SZ;
    int opennum = 0;   //the number of open
    const int MaxInt = std::numeric_limits<int>::max();

public:
    void Percolation_set(int n) {
        size = n;
        P = new int[(n * n + 2)];   //add two for virtual head and end
        SZ = new int[(n * n + 2)];

        for (int i = 0; i < (n * n + 2); i++) {
            P[i] = MaxInt;      //0 means it is a block
            SZ[i] = 1;      //each block's original size is 1
        }
    }

    void Percolation_open(int row, int col) {
        P[row * size + col] = row * size + col;    //P[0]=0, P[n]=n
        opennum ++ ;
        //use the connective

        if (row==0 && P[size * size] == (size * size)) {     //connect the head to the block
            P[size*size] = row * size + col;
            SZ[row * size + col] = SZ[row * size + col] + SZ[size * size];
        }

        if (row == size - 1 && P[size * size + 1] == (size * size + 1)) {     //connect the end to the block
            P[size * size + 1] = row * size + col;
            SZ[row * size + col] = SZ[row * size + col] + SZ[size * size+1];
        }


        //up
        if (row - 1 >= 0 && P[(row-1)*size+col]!=MaxInt) {
            //make if connect, the small tree should be the sub tree of bigger tree

            int m = (row - 1) * size + col;
            while (P[m] != m) {    //becasue 0 means the block is full
                m = P[m];
            }//find the root of the nearby block

            int n = row * size + col;
            while (P[n] != n) {    //becasue 0 means the block is full
                n = P[n];
            }//find the root of the nearby block


            if (SZ[m] > SZ[n]) {   //the size of tree is bigger than the new block
                P[n] = P[m];        //connect the new block to be the subtree of bigger tree
                SZ[m] = SZ[m] + SZ[n];  //add the size
            }
            else {
                P[m] = P[n];
                SZ[n] = SZ[n] + SZ[m];
            }    
        }

        //down
        if (row + 1 < size && P[(row+1)*size+col]!=MaxInt) {

            int m = (row + 1) * size + col;
            while (P[m] != m) {    //becasue 0 means the block is full
                m = P[m];
            }//find the root of the nearby block

            int n = row * size + col;
            while (P[n] != n) {    //becasue 0 means the block is full
                n = P[n];
            }//find the root of the nearby block

            if (SZ[m] > SZ[n]) {   //the size of tree is bigger than the new block
                P[n] = P[m];        //connect the new block to be the subtree of bigger tree
                SZ[m] = SZ[m] + SZ[n];  //add the size
            }
            else {
                P[m] = P[n];
                SZ[n] = SZ[n] + SZ[m];
            }
        }

        //left
        if (col - 1 >= 0 && P[(row * size + col - 1)] != MaxInt) {

            int m = (row * size + col - 1);
            while (P[m] != m) {    //becasue 0 means the block is full
                m = P[m];
            }//find the root of the nearby block

            int n = row * size + col;
            while (P[n] != n) {    //becasue 0 means the block is full
                n = P[n];
            }//find the root of the nearby block

            if (SZ[m] > SZ[n]) {   //the size of tree is bigger than the new block
                P[n] = P[m];        //connect the new block to be the subtree of bigger tree
                SZ[m] = SZ[m] + SZ[n];  //add the size
            }
            else {
                P[m] = P[n];
                SZ[n] = SZ[n] + SZ[m];
            }
        }

        //right
        if (col + 1 < size && P[(row * size + col + 1)] != MaxInt) {
            int m = (row * size + col + 1);
            while (P[m] != m) {    //becasue 0 means the block is full
                m = P[m];
            }//find the root of the nearby block

            int n = row * size + col;
            while (P[n] != n) {    //becasue 0 means the block is full
                n = P[n];
            }//find the root of the nearby block

            if (SZ[m] > SZ[n]) {   //the size of tree is bigger than the new block
                P[n] = P[m];        //connect the new block to be the subtree of bigger tree
                SZ[m] = SZ[m] + SZ[n];  //add the size
            }
            else {
                P[m] = P[n];
                SZ[n] = SZ[n] + SZ[m];
            }
        }

    }

    bool Percolation_ifopen(int row, int col) {
        if (P[row * size + col] != MaxInt) return true;
        else return false;
    }

    bool Percolation_iffull(int row, int col) {
        if (P[row * size + col] != MaxInt) return false;
        else return true;
    }

    int Numberofopen() {
        return opennum;
    }

public:
    /*bool If_Percolates() {

        return true;
    }*/

    void PrintPercolation() {
        for (int i = 0; i < (size * size + 2); i++) {
            std::cout << P[i] << ' ';
        }
    }

};

int main() {
    Percolation p1;
    p1.Percolation_set(3);
    p1.PrintPercolation();
    std::cin.get();
}