class Rect{
  private:
    double x, y;
  public:
    Rect();
    Rect operator+(Rect val);
    Rect operator-(Rect val);
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
};