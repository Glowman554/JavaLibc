package gq.glowman554.libc.string;

public class Memory {
	public static native void memcpy(long dest, long src, int sz);
	public static native void memset(long dest, byte i, int sz);
	public static native int memcmp(long a, long b, int sz);
}
