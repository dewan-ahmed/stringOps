import java.io.*;
import java.util.Scanner;
public class toLower {

   public static void main(String args[]) {
      Scanner user_input = new Scanner( System.in );
      String input;
      System.out.print("Enter a text to turn into lowercase: ");
      // Use user_input.nextLine() instead of user_input.next() to get all words. Else texts after space will be neglected
      input = user_input.nextLine();
      System.out.println("Your input is converted to lowercase: "+ input.toLowerCase());
   }
}
