import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) throws Exception{
		
		String file = "colors.in";//New Color  //args[0]
		String line; 
		System.out.println("Colors: \n");

		try{
			FileInputStream file_in = new FileInputStream(file);
			Scanner lineScanner = new Scanner(file_in);
			while (lineScanner.hasNextLine()){
				line=lineScanner.nextLine();
				try { //TRY
					Color obj= new Color(line);
					System.out.println(line);
				} // end try    
				catch (RedColorException ex) { 
					System.out.println("Red Color Exception");         

				}//End Catch
			}//End While
		}//End Try


		catch (FileNotFoundException ex) { 
			System.out.println("Something isn't not found");            
		}//End Catch

	}//End Main

}//End Class


