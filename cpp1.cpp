
class calculator
{
public:
    int floor(double number)
    {
        return static_cast<int>(number);
    }
    int add(int a, int b)
    {
        return a + b;
    }
    double max1(double a, double b)
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    bool find1(const std::string &str, char c)
    {
        for (char ch : str)
        {
            if (ch == c)
            {
                return true;
            }
        }
        return false;
    }
};