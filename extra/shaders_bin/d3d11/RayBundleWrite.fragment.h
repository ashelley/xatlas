static const uint8_t RayBundleWrite_fragment_d3d11[508] =
{
	0x46, 0x53, 0x48, 0x06, 0xe3, 0xc2, 0x5c, 0x65, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x09, 0x75, // FSH....e.......u
	0x5f, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x75, // _diffuse.......u
	0x5f, 0x65, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x0a, // _emission.......
	0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x44, 0x69, 0x72, 0x12, 0x00, 0x20, 0x00, 0x01, 0x00, // u_lightDir.. ...
	0xb4, 0x01, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xf8, 0xb6, 0xf8, 0xb9, 0x55, 0xd9, 0x79, 0xde, // ....DXBC....U.y.
	0x13, 0xd6, 0x33, 0xf2, 0x79, 0x9a, 0x71, 0x44, 0x01, 0x00, 0x00, 0x00, 0xb4, 0x01, 0x00, 0x00, // ..3.y.qD........
	0x04, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, // ....0...........
	0xa4, 0x01, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ....ISGNL.......
	0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....8...........
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x03, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, // ............D...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x07, 0x07, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, // ....SV_POSITION.
	0x4e, 0x4f, 0x52, 0x4d, 0x41, 0x4c, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x08, 0x00, 0x00, 0x00, // NORMAL..OSGN....
	0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x53, 0x48, 0x45, 0x58, 0x08, 0x01, 0x00, 0x00, // ........SHEX....
	0x50, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x6a, 0x08, 0x00, 0x01, 0x59, 0x00, 0x00, 0x04, // P...B...j...Y...
	0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x9c, 0x18, 0x00, 0x04, // F. .............
	0x00, 0xe0, 0x11, 0x00, 0x11, 0x00, 0x00, 0x00, 0x11, 0x11, 0x00, 0x00, 0x64, 0x20, 0x00, 0x04, // ............d ..
	0x32, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, // 2...........b...
	0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, // r.......h.......
	0x10, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, // ............F...
	0x01, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ....F. .........
	0x32, 0x00, 0x00, 0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // 2...............
	0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x01, 0x40, 0x00, 0x00, // .....@.....?.@..
	0x00, 0x00, 0x00, 0x3f, 0x32, 0x00, 0x00, 0x0b, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ...?2...r.......
	0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, // F. .............
	0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....F. .........
	0x1b, 0x00, 0x00, 0x05, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x15, 0x10, 0x00, // ............F...
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....6...........
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0xa4, 0x00, 0x00, 0x07, 0xf2, 0xe0, 0x11, 0x00, // .@.....?........
	0x11, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, // ....F.......F...
	0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x53, 0x46, 0x49, 0x30, 0x08, 0x00, 0x00, 0x00, // ....>...SFI0....
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,                         // ..........0.
};