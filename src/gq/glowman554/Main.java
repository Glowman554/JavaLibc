package gq.glowman554;

import java.io.IOException;

import gq.glowman554.libc.NativeUtils;
import gq.glowman554.libc.Sizes;
import gq.glowman554.libc.memory.Pointer;
import gq.glowman554.libc.memory.SmartPointer;
import gq.glowman554.libc.stdio.File;
import gq.glowman554.libc.stdio.SmartFile;
import gq.glowman554.libc.stdio.SmartString;
import gq.glowman554.libc.stdio.Stdio;
import gq.glowman554.libc.string.CString;
import gq.glowman554.libc.string.Memory;

public class Main
{
	public static void pstring(SmartPointer s) {
		int idx = 0;
		byte c;
		while ((c = Pointer.read_8(s.index(Sizes.CHAR, idx++))) != 0) {
			Stdio.putchar(c);
		}
		Stdio.putchar((byte) '\n');
	}

	public static void main(String[] args) throws IOException {
		main2(args);
		System.gc();

		SmartFile sf = new SmartFile("test.txt", "r");

		sf.fseek(0, File.Whence.SEEK_END);
		long size = sf.ftell();
		sf.fseek(0, File.Whence.SEEK_SET);

		SmartPointer sm = new SmartPointer((int) (size + 1));
		Memory.memset(sm.getPtr(), (byte) 0, (int) (size + 1));
		sf.fread(sm.getPtr(), Sizes.CHAR.getSize(), (int) size);
		pstring(sm);
	}

	public static void main2(String[] args) throws IOException {
		NativeUtils.loadLibraryFromJar("/libc." + NativeUtils.getOsEnding());

		Sizes.checkSizes();

		String test = "test123";
		SmartString str = new SmartString(test);

		String test2 = "moretest123";
		SmartPointer str2 = new SmartPointer(Sizes.CHAR.getSize() * (CString.strlen(str.getPtr()) + test2.length() + 1));
		CString.c_str(str2.getPtr(), test2);

		CString.strcat(str2.getPtr(), str.getPtr());

		Stdio.puts(str.getPtr());
		Stdio.puts(str2.getPtr());

		pstring(str.getSm());
		pstring(str2);

		SmartPointer str3 = new SmartPointer(Sizes.CHAR.getSize() * (test.length() + 1));
		CString.strcpy(str3.getPtr(), str.getPtr());

		pstring(str3);
		System.out.println(CString.strlen(str3.getPtr()));

		SmartFile sf = new SmartFile("test.txt", "w");
		sf.fwrite(str2.getPtr(), Sizes.CHAR.getSize(), CString.strlen(str2.getPtr()));
	}
}
