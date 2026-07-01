class Solution 
{   public:
    int reverseBits(int n) 
    {   int reversedResult = 0;
        int totalBits = 32;

        for (int count = 1; count <= totalBits; ++count) 
        {
            // Shift the accumulated result to the left to make room for the next bit
            reversedResult = reversedResult << 1;

            // Extract the rightmost bit of the input using a bitwise AND mask
            int extractedBit = n & 1;

            // Combine the extracted bit into the rightmost position of the result
            reversedResult = reversedResult | extractedBit;

            n = n >> 1;
        }//end of for loop

        return reversedResult;
    }//end of reverseBits()
};
