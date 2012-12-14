SECTIONS {
	.rodata :
	{
		*(.rodata)
		_cb_start = .;
		*(.cb_data)
		_cb_end = .;
	}
}

