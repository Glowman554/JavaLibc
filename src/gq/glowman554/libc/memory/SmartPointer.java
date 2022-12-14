package gq.glowman554.libc.memory;

import gq.glowman554.libc.Sizes;

public class SmartPointer {
	private long ptr;

	public SmartPointer(long ptr) {
		this.ptr = ptr;
	}

	public SmartPointer(int sz) {
		this.ptr = Pointer.malloc(sz);
	}

	public void realloc(int newsz) {
		ptr = Pointer.realloc(ptr, newsz);
	}

	public long index(Sizes sz, int el) {
		return Pointer.index(ptr, sz.getSize(), el);
	}

	@Override
	protected void finalize() throws Throwable {
		Pointer.free(ptr);
	}

	public long getPtr() {
		return ptr;
	}
}
