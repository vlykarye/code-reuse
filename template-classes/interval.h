template<class T>
class Interval
{
public:
    static Interval Exclusive       (T left, T right) { return Interval(left, right, INCLUSIVE::NONE); }
    static Interval Inclusive       (T left, T right) { return Interval(left, right, INCLUSIVE::BOTH); }
    static Interval Left_Inclusive  (T left, T right) { return Interval(left, right, INCLUSIVE::LEFT); }
    static Interval Right_Inclusive (T left, T right) { return Interval(left, right, INCLUSIVE::RIGHT); }

    T const left;
    T const right;

    bool contains(T value)
    {
        switch (inclusive)
        {
            case NONE:  return left <  value && value <  right;
            case BOTH:  return left <= value && value <= right;
            case LEFT:  return left <= value && value <  right;
            case RIGHT: return left <  value && value <= right;
        }
        return false;
    }

    bool is_exclusive       () { return inclusive == NONE; }
    bool is_inclusive       () { return inclusive == BOTH; }
    bool is_left_inclusive  () { return inclusive == LEFT; }
    bool is_right_inclusive () { return inclusive == RIGHT; }

private:
    enum INCLUSIVE { NONE, BOTH, LEFT, RIGHT } const inclusive;

    Interval(T left, T right, INCLUSIVE inclusive) : left(left), right(right), inclusive(inclusive) {}
};
