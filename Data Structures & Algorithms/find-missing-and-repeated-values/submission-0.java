class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length;
        int totalNumbers = n*n;
        int[] count = new int[totalNumbers+1];

        int missing = -1;
        int repeated = -1;

        for(int row = 0;row<n;row++){
            for(int col=0;col<n;col++){
                count[grid[row][col]]++;
            }
        }

        for(int i=0;i<=totalNumbers;i++){
            if(count[i]==2){
                repeated = i;
            } else if(count[i]==0){
                missing = i;
            }
        }
        return new int[]{repeated,missing};
    }
}