
public class Rectangle {
	private float length;
	private float width;
	public void setN(float x,float y)
	{
		length=x;
		width=y;
	}
	public float area()
	{
		return (float)(length*width);
	}
	public static void main(String[] args) {
		Rectangle P= new Rectangle();
		P.setN(3,7);
		System.out.println("Area of Rectangle P is "+P.area());
	}
}
