package gq.glowman554.libc.memory;

public class Pointer {
	public static native byte read_8(long ptr);
	public static native void write_8(long ptr, byte val);

	public static native char read_16(long ptr);
	public static native void write_16(long ptr, char val);

	public static native int read_32(long ptr);
	public static native void write_32(long ptr, int val);

	public static native long read_64(long ptr);
	public static native void write_64(long ptr, long val);

	public static native long malloc(int size);
	public static native long realloc(long ptr, int newsz);
	public static native void free(long ptr);
	public static native long index(long ptr, int sz, int el);

}
