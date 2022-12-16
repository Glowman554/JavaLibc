package gq.glowman554;

import java.io.IOException;

import gq.glowman554.libc.Libc;
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
		Libc.init();

		String test = "test123";
		SmartString str = new SmartString(test);

		pstring(str.getSm());

		SmartPointer str2 = new SmartPointer(Sizes.CHAR.getSize() * (test.length() + 1));
		CString.strcpy(str2.getPtr(), str.getPtr());

		pstring(str2);
		
		SmartFile sf = new SmartFile("test.txt", "w");
		sf.fwrite(str2.getPtr(), Sizes.CHAR.getSize(), CString.strlen(str2.getPtr()));
		sf = null;
		System.gc();

		SmartFile sf2 = new SmartFile("test.txt", "r");

		sf2.fseek(0, File.Whence.SEEK_END);
		long size = sf2.ftell();
		sf2.fseek(0, File.Whence.SEEK_SET);

		SmartPointer sm = new SmartPointer((int) (size + 1));
		Memory.memset(sm.getPtr(), (byte) 0, (int) (size + 1));
		sf2.fread(sm.getPtr(), Sizes.CHAR.getSize(), (int) size);
		pstring(sm);
	}
}
