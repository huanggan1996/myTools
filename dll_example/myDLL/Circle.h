class Circle
{
public:
	Circle();
	~Circle();

	void setRadius(int r);
	int getRadius();
	double getArea();

private:
	int radius;
};