class RomanToInteger {
    public int romanToInt(String s) {
        int currentIdx = s.length() - 1; 
        int total = 0;
        int current = letterToInt(s.charAt(currentIdx));
        total += current;
        currentIdx--;
        while(currentIdx >= 0){
            int ant = current;
            current = letterToInt(s.charAt(currentIdx));
            if(current < ant){
                total -= current;
            }else{
                total += current;
            }
            currentIdx--;
        }
        return total;
    }
    private int letterToInt(char c){
        switch(c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            default:
                return 1000;
        }
    }
}
