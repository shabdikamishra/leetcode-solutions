class Solution {
public:
    std::string intToRoman(int num) {
        // Map values to their respective Roman numeral symbols in descending order
        std::vector<std::pair<int, std::string>> romanMap = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
            {1, "I"}
        };
        
        std::string result = "";
        
        // Loop through each value-symbol pair
        for (const auto& [value, symbol] : romanMap) {
            // Determine how many times the value fits into the remaining number
            while (num >= value) {
                result += symbol;
                num -= value;
            }
        }
        
        return result;
    }
};