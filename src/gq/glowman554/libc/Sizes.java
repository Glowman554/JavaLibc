package gq.glowman554.libc;

public enum Sizes {
	INT(4),
	CHAR(1);

	private int size;
	private Sizes(int size) {
		this.size = size;
	}

	public int getSize() {
		return size;
	}

	public static native void checkSizes();
}
