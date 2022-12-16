package gq.glowman554.libc;

import java.io.IOException;

public class Libc {
	public static void init() throws IOException {
		NativeUtils.loadLibraryFromJar("/libc." + NativeUtils.getOsEnding());
		Sizes.checkSizes();
	}
}
