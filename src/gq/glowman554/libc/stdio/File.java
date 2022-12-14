package gq.glowman554.libc.stdio;

public class File {
	public static native long fopen(long name_ptr, long mode_ptr);
	public static native int fclose(long ptr);
	
	public static native int fwrite(long data_ptr, int ellement_size, int num_elements, long file_ptr);
	public static native int fread(long data_ptr, int ellement_size, int num_elements, long file_ptr);

	public static native long ftell(long ptr);
	public static native void fseek(long ptr, long offset, int whence);

	public static enum Whence {
		SEEK_SET(0),
		SEEK_CUR(1),
		SEEK_END(2);

		private int val;

		private Whence(int val) {
			this.val = val;
		}

		public int getVal() {
			return val;
		}
	}
}
