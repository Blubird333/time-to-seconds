class Time{
    public:
        int totalsec(int h,int m,int s){
            int totsec = s+(m)*60+(h)*60*60;
            return totsec;
        }
};
