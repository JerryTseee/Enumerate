//this is a pseudo code
// Given a set T of n numbers (represented by an array X[1..n]), design a
// recursive algorithm to enumerate all subsets of T with size = k (k ≤ n) and
// analyze its time complexity. If T = {-4, 1, 3} and k = 2, the output should be
// as follows (can be in any order):
// -4, 1
// -4, 3
// 1, 3

//x is the input set, k is the size of the combinations to generate, n is the number of elements in set x
enumerate(x, k, n){
    if k == 0{
        print(A);
        return;
    }
    else{
        for i=1 to n{
            
            A[k] = x[i];

            //create a new set by removing the i-th element x[1:i] from x, to ensure same element is not used again
            x_new = delete(x, x[1:i]);
            //then call the recursion
            enumerate(x_new, k-1, length(x_new))

        }
    }
}