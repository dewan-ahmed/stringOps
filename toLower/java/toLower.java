import java.io.*;
import java.util.Scanner;
public class toLower {

   public static void main(String args[]) {
      Scanner user_input = new Scanner( System.in );
      String input;
      System.out.print("Enter a text to turn into lowercase: ");
      input = user_input.next( );
      System.out.println("Your input is converted to lowercase: "+ input.toLowerCase());
   }
}
