
public class Color extends  Main{
	private String color;//String color
	
	public Color(String color) throws RedColorException{
		//this.Color=c;
		if(!color.equals("Red")) {
			this.color=color;
		}// End If Statement
		else {
			throw new RedColorException(color);
		}//End Else
	}//End Public Color 
	//Get Method for Color
	public String getColor() {
		return color;
	}
	
	@Override
	//toString Method
	public String toString() {
		return "Color" + color ;
	}
	
}