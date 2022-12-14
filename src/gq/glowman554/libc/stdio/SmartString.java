package gq.glowman554.libc.stdio;

import gq.glowman554.libc.memory.SmartPointer;
import gq.glowman554.libc.string.CString;

public class SmartString {
	private SmartPointer sm;

	public SmartString(String s) {
		sm = new SmartPointer(CString.c_str(s));
	}

	public long getPtr() {
		return sm.getPtr();
	}

	public SmartPointer getSm() {
		return sm;
	}
}
