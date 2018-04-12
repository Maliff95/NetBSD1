import java.net.Socket;
import java.io.*;

public class client {
	public static void main(String args[]){
	try 
	{
		System.out.println("client started");
		Socket soc = new Socket("192.168.44.131",5549);
		BufferedReader input = new 
BufferedReader(new InputStreamReader(System.in));
		System.out.println("Put a some text : ");
		String str = input.readLine();
		PrintWriter out = new 
PrintWriter(soc.getOutputStream(),true);
		out.println(str);
		BufferedReader in = new 
BufferedReader(new InputStreamReader(soc.getInputStream()));
		System.out.println(in.readLine());
	}
	catch(Exception e){e.printStackTrace();
	}
 }
}
