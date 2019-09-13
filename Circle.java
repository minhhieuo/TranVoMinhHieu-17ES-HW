
public class Circle {
	private	float radius;
	public void setR(float x)
	{
		radius=x;
	}
	public float area()
	{
		return (float)(radius*radius*Math.PI);
	}
	public static void main(String[] args) {
		Circle O= new Circle();
		O.setR(3);
		System.out.println("Area of circle O is "+O.area());
	}
}
