package gq.glowman554.libc.string;

public class CString {
	public static native long c_str(String str);
	public static native void c_str(long dest, String str);

	public static native void strcat(long a, long b);
	public static native void strcpy(long dest, long src);
	public static native int strlen(long ptr);
}
