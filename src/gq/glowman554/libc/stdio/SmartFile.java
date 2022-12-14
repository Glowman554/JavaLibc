package gq.glowman554.libc.stdio;

public class SmartFile {
	private long ptr;

	public SmartFile(String file, String mode) {
		SmartString c_file = new SmartString(file);
		SmartString c_mode = new SmartString(mode);

		ptr = File.fopen(c_file.getPtr(), c_mode.getPtr());
	}

	public int fwrite(long data_ptr, int element_size, int num_elements) {
		return File.fwrite(data_ptr, element_size, num_elements, ptr);
	}

	public int fread(long data_ptr, int element_size, int num_elements) {
		return File.fread(data_ptr, element_size, num_elements, ptr);
	}

	public long ftell() {
		return File.ftell(ptr);
	}

	public void fseek(long offset, File.Whence whence) {
		File.fseek(ptr, offset, whence.getVal());
	}

	@Override
	protected void finalize() throws Throwable {
		File.fclose(ptr);
	}
}
