
//{{BLOCK(player)
//=======================================================================
//
//	player, 32x32//4, 
//	+ palette 256 entries, not compressed
//	+ 16 tiles not compressed
//	Total size: 512 + 512 = 1024
//
//	Time-stamp: 2021-07-10, 23:04:09
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.16
//	( http://www.coranac.com/projects/#grit )
//
//=======================================================================

const unsigned short playerPal[256]=
{
	0x01CC,0x20D8,0x4C84,0x4E44,0x0C43,0x18C7,0x7FFF,0x0000,
	0x0421,0x0421,0x0421,0x0421,0x0421,0x0421,0x0421,0x0421,
	0x0842,0x0842,0x0842,0x0842,0x0842,0x0842,0x0842,0x0842,
	0x0C63,0x0C63,0x0C63,0x0C63,0x0C63,0x0C63,0x0C63,0x0C63,
	0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,
	0x14A5,0x14A5,0x14A5,0x14A5,0x14A5,0x14A5,0x14A5,0x14A5,
	0x18C6,0x18C6,0x18C6,0x18C6,0x18C6,0x18C6,0x18C6,0x18C6,
	0x1CE7,0x1CE7,0x1CE7,0x1CE7,0x1CE7,0x1CE7,0x1CE7,0x1CE7,
	0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,
	0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,
	0x294A,0x294A,0x294A,0x294A,0x294A,0x294A,0x294A,0x294A,
	0x2D6B,0x2D6B,0x2D6B,0x2D6B,0x2D6B,0x2D6B,0x2D6B,0x2D6B,
	0x318C,0x318C,0x318C,0x318C,0x318C,0x318C,0x318C,0x318C,
	0x35AD,0x35AD,0x35AD,0x35AD,0x35AD,0x35AD,0x35AD,0x35AD,
	0x39CE,0x39CE,0x39CE,0x39CE,0x39CE,0x39CE,0x39CE,0x39CE,
	0x3DEF,0x3DEF,0x3DEF,0x3DEF,0x3DEF,0x3DEF,0x3DEF,0x3DEF,
	0x4210,0x4210,0x4210,0x4210,0x4210,0x4210,0x4210,0x4210,
	0x4631,0x4631,0x4631,0x4631,0x4631,0x4631,0x4631,0x4631,
	0x4A52,0x4A52,0x4A52,0x4A52,0x4A52,0x4A52,0x4A52,0x4A52,
	0x4E73,0x4E73,0x4E73,0x4E73,0x4E73,0x4E73,0x4E73,0x4E73,
	0x5294,0x5294,0x5294,0x5294,0x5294,0x5294,0x5294,0x5294,
	0x56B5,0x56B5,0x56B5,0x56B5,0x56B5,0x56B5,0x56B5,0x56B5,
	0x5AD6,0x5AD6,0x5AD6,0x5AD6,0x5AD6,0x5AD6,0x5AD6,0x5AD6,
	0x5EF7,0x5EF7,0x5EF7,0x5EF7,0x5EF7,0x5EF7,0x5EF7,0x5EF7,
	0x6318,0x6318,0x6318,0x6318,0x6318,0x6318,0x6318,0x6318,
	0x6739,0x6739,0x6739,0x6739,0x6739,0x6739,0x6739,0x6739,
	0x6B5A,0x6B5A,0x6B5A,0x6B5A,0x6B5A,0x6B5A,0x6B5A,0x6B5A,
	0x6F7B,0x6F7B,0x6F7B,0x6F7B,0x6F7B,0x6F7B,0x6F7B,0x6F7B,
	0x739C,0x739C,0x739C,0x739C,0x739C,0x739C,0x739C,0x739C,
	0x77BD,0x77BD,0x77BD,0x77BD,0x77BD,0x77BD,0x77BD,0x77BD,
	0x7BDE,0x7BDE,0x7BDE,0x7BDE,0x7BDE,0x7BDE,0x7BDE,0x7BDE,
	0x7FFF,0x7FFF,0x7FFF,0x7FFF,0x7FFF,0x7FFF,0x7FFF,0x7FFF,
};

const unsigned int playerTiles[512]=
{
	0x00000011,0x00001133,0x00111330,0x11133300,0x13333000,0x33330000,0x33300000,0x33000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000011,0x00001112,0x00111223,0x11122233,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x30000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x12222333,0x22223333,0x22233330,0x22333300,0x23333000,0x33330000,0x33300000,0x33000000,
	0x00000011,0x00001112,0x00111222,0x11122222,0x12222222,0x22222222,0x22222223,0x22222233,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000011,0x00001112,0x00111222,0x11111111,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x30000000,
	0x33000000,0x33300000,0x33330000,0x23333000,0x22333300,0x22233330,0x22223333,0x12222333,
	0x22222233,0x22222223,0x22222222,0x12222222,0x11122222,0x00111222,0x00001112,0x00000011,
	0x11111111,0x00111222,0x00001112,0x00000011,0x00000000,0x00000000,0x00000000,0x00000000,
	0x33000000,0x33300000,0x33330000,0x13333000,0x11133300,0x00111330,0x00001133,0x00000011,
	0x11122233,0x00111223,0x00001112,0x00000011,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x11000000,0x21110000,0x32211100,0x33222111,
	0x11000000,0x33110000,0x03311100,0x00333111,0x00033331,0x00003333,0x00000333,0x00000033,
	0x00000000,0x00000000,0x00000000,0x00000000,0x11000000,0x21110000,0x22211100,0x11111111,
	0x11000000,0x21110000,0x22211100,0x22222111,0x22222221,0x22222222,0x32222222,0x33222222,
	0x33322221,0x33332222,0x03333222,0x00333322,0x00033332,0x00003333,0x00000333,0x00000033,
	0x00000003,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x11111111,0x22211100,0x21110000,0x11000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x33222222,0x32222222,0x22222222,0x22222221,0x22222111,0x22211100,0x21110000,0x11000000,
	0x00000033,0x00000333,0x00003333,0x00033332,0x00333322,0x03333222,0x33332222,0x33322221,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000003,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x33222111,0x32211100,0x21110000,0x11000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000033,0x00000333,0x00003333,0x00033331,0x00333111,0x03311100,0x33110000,0x11000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x10000000,0x10000000,0x11000000,0x11000000,0x11100000,0x12100000,0x12110000,0x12210000,
	0x00000001,0x00000001,0x00000011,0x00000011,0x00000111,0x00000121,0x00001121,0x00001221,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x22211000,0x22221000,0x22221100,0x22222100,0x22222110,0x22222210,0x32222211,0x33222221,
	0x00011222,0x00012222,0x00112222,0x00122222,0x01122222,0x01222222,0x11222223,0x12222233,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x10000000,0x10000000,0x11000000,0x21000000,0x21100000,0x22100000,0x32110000,0x33210000,
	0x33322221,0x33332222,0x03333222,0x00333322,0x00033332,0x00003333,0x00000333,0x00000033,
	0x12222333,0x22223333,0x22233330,0x22333300,0x23333000,0x33330000,0x33300000,0x33000000,
	0x00000001,0x00000001,0x00000011,0x00000012,0x00000112,0x00000122,0x00001123,0x00001233,
	0x33311000,0x33331000,0x03331100,0x00333100,0x00033110,0x00003310,0x00000331,0x00000031,
	0x00000003,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x30000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00011333,0x00013333,0x00113330,0x00133300,0x01133000,0x01330000,0x13300000,0x13000000,
	0x00000031,0x00000331,0x00003310,0x00033110,0x00333100,0x03331100,0x33331000,0x33311000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000003,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x30000000,
	0x13000000,0x13300000,0x01330000,0x01133000,0x00133300,0x00113330,0x00013333,0x00011333,
	0x33210000,0x32110000,0x22100000,0x21100000,0x21000000,0x11000000,0x10000000,0x10000000,
	0x00000033,0x00000333,0x00003333,0x00033332,0x00333322,0x03333222,0x33332222,0x33322221,
	0x33000000,0x33300000,0x33330000,0x23333000,0x22333300,0x22233330,0x22223333,0x12222333,
	0x00001233,0x00001123,0x00000122,0x00000112,0x00000012,0x00000011,0x00000001,0x00000001,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x33222221,0x32222211,0x22222210,0x22222110,0x22222100,0x22221100,0x22221000,0x22211000,
	0x12222233,0x11222223,0x01222222,0x01122222,0x00122222,0x00112222,0x00012222,0x00011222,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x12210000,0x12110000,0x12100000,0x11100000,0x11000000,0x11000000,0x10000000,0x10000000,
	0x00001221,0x00001121,0x00000121,0x00000111,0x00000011,0x00000011,0x00000001,0x00000001,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

//}}BLOCK(player)
//{{BLOCK(obstacle)
//=======================================================================
//
//	obstacle, 32x32//4, 
//	+ palette 256 entries, not compressed
//	+ 16 tiles not compressed
//	Total size: 512 + 512 = 1024
//
//	Time-stamp: 2021-07-10, 23:04:25
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.16
//	( http://www.coranac.com/projects/#grit )
//
//=======================================================================

const unsigned int obstacleTiles[128]=
{
	0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x44000000,0x44400000,0x54440000,
	0x00000000,0x00000000,0x44444000,0x44444444,0x55554444,0x55555554,0x55555555,0x65656665,
	0x00000000,0x44440000,0x44444444,0x45544444,0x55555555,0x55555555,0x55555555,0x55665565,
	0x00000000,0x00000000,0x00000004,0x00000044,0x00000044,0x00000044,0x00000444,0x00000445,
	0x55440000,0x55444000,0x55544000,0x55544400,0x55554400,0x55555440,0x55555440,0x55544440,
	0x65655655,0x66655655,0x65655655,0x55555555,0x55566556,0x55556656,0x55565556,0x55556656,
	0x55566565,0x55655565,0x55566565,0x55555555,0x55555666,0x55555656,0x55555666,0x55555656,
	0x00000445,0x00000445,0x00000445,0x00004445,0x00044455,0x00044555,0x00444555,0x00445555,
	0x55444400,0x55440000,0x54440000,0x54400000,0x54400000,0x54400000,0x54400000,0x54400000,
	0x55555555,0x55555555,0x66656665,0x65656565,0x65655665,0x66656565,0x55555555,0x55555555,
	0x55555555,0x55555555,0x65656665,0x65655565,0x56655565,0x65656665,0x55555555,0x55555555,
	0x00445555,0x00445555,0x00445555,0x00445555,0x00445555,0x00445555,0x00445555,0x00445555,
	0x54400000,0x54400000,0x54400000,0x54400000,0x44400000,0x44000000,0x00000000,0x00000000,
	0x56565655,0x56565555,0x56655655,0x55555555,0x44444444,0x44444444,0x00000000,0x00000000,
	0x55555555,0x55555555,0x44555555,0x44444445,0x04444444,0x00000044,0x00000000,0x00000000,
	0x00445555,0x00445555,0x00444444,0x00044444,0x00000000,0x00000000,0x00000000,0x00000000,
};

const unsigned short obstaclePal[4]=
{
	0x0000,0x7FFF,0x0C64,0x18C7//,0x0000,0x0000,0x0000,0x0000,
	//0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(obstacle)
//{{BLOCK(obstacle_big)
//=======================================================================
//
//	obstacle_big, 64x64//4, 
//	+ palette 256 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 512 + 2048 = 2560
//
//	Time-stamp: 2021-07-10, 23:04:35
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.16
//	( http://www.coranac.com/projects/#grit )
//
//=======================================================================

const unsigned int obstacle_bigTiles[512]=
{
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x44000000,0x44000000,0x44444444,0x44444444,
	0x00000000,0x00000000,0x00000000,0x00000000,0x44444444,0x44444444,0x44444444,0x44444444,
	0x00000000,0x00000000,0x00000000,0x00000000,0x44444444,0x44444444,0x44444444,0x44444444,
	0x00000000,0x00000000,0x44444444,0x44444444,0x44444444,0x44444444,0x44555544,0x44555544,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000044,0x00000044,0x00004444,0x00004444,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x44000000,0x44000000,0x44440000,0x44440000,0x44444400,0x44444400,0x55444444,0x55444444,
	0x44444444,0x44444444,0x55555544,0x55555544,0x55555555,0x55555555,0x66666655,0x66666655,
	0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x66556655,0x66556655,
	0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55556655,0x55556655,
	0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55556666,0x55556666,
	0x00004444,0x00004444,0x00004444,0x00004444,0x00444444,0x00444444,0x00444455,0x00444455,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x44000000,0x44000000,0x44000000,0x44000000,0x44440000,0x44440000,
	0x55554444,0x55554444,0x55554444,0x55554444,0x55555544,0x55555544,0x55555544,0x55555544,
	0x55665555,0x55665555,0x55665555,0x55665555,0x55665555,0x55665555,0x55555555,0x55555555,
	0x66556655,0x66556655,0x66666655,0x66666655,0x66556655,0x66556655,0x55555555,0x55555555,
	0x66556655,0x66556655,0x55556655,0x55556655,0x66556655,0x66556655,0x55555555,0x55555555,
	0x55555566,0x55555566,0x55556655,0x55556655,0x55555566,0x55555566,0x55555555,0x55555555,
	0x00444455,0x00444455,0x00444455,0x00444455,0x00444455,0x00444455,0x44444455,0x44444455,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x44440000,0x44440000,0x55444400,0x55444400,0x55444400,0x55444400,0x44444400,0x44444400,
	0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555544,0x55555544,
	0x66555566,0x66555566,0x66665566,0x66665566,0x55555566,0x55555566,0x66665566,0x66665566,
	0x55555566,0x55555566,0x55555555,0x55555555,0x55555566,0x55555566,0x55555555,0x55555555,
	0x55666666,0x55666666,0x55665566,0x55665566,0x55666666,0x55666666,0x55665566,0x55665566,
	0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,
	0x44445555,0x44445555,0x44555555,0x44555555,0x44555555,0x44555555,0x55555555,0x55555555,
	0x00000044,0x00000044,0x00000044,0x00000044,0x00004444,0x00004444,0x00004444,0x00004444,
	0x44440000,0x44440000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55554444,0x55554444,0x55554444,0x55554444,0x55444444,0x55444444,0x55444400,0x55444400,
	0x55555555,0x55555555,0x55555555,0x55555555,0x66666655,0x66666655,0x66556655,0x66556655,
	0x55555555,0x55555555,0x55555555,0x55555555,0x66666655,0x66666655,0x66556655,0x66556655,
	0x55555555,0x55555555,0x55555555,0x55555555,0x66666655,0x66666655,0x55556655,0x55556655,
	0x55555555,0x55555555,0x55555555,0x55555555,0x66556655,0x66556655,0x66556655,0x66556655,
	0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,
	0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55444400,0x55444400,0x55444400,0x55444400,0x55444400,0x55444400,0x55444400,0x55444400,
	0x55666655,0x55666655,0x66556655,0x66556655,0x55555555,0x55555555,0x55555555,0x55555555,
	0x66556655,0x66556655,0x66666655,0x66666655,0x55555555,0x55555555,0x55555555,0x55555555,
	0x55556655,0x55556655,0x66666655,0x66666655,0x55555555,0x55555555,0x55555555,0x55555555,
	0x55666655,0x55666655,0x66556655,0x66556655,0x55555555,0x55555555,0x55555555,0x55555555,
	0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,
	0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55444400,0x55444400,0x55444400,0x55444400,0x55444400,0x55444400,0x55444400,0x55444400,
	0x55665555,0x55665555,0x55555555,0x55555555,0x55665555,0x55665555,0x55555555,0x55555555,
	0x55665566,0x55665566,0x55665566,0x55665566,0x55666655,0x55666655,0x55555555,0x55555555,
	0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x44444455,0x44444455,
	0x55555555,0x55555555,0x55555555,0x55555555,0x44445555,0x44445555,0x44444444,0x44444444,
	0x55555555,0x55555555,0x55555555,0x55555555,0x44444444,0x44444444,0x44444444,0x44444444,
	0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,0x00004444,0x00000044,0x00000044,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x44444400,0x44444400,0x44440000,0x44440000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x44444444,0x44444444,0x44444444,0x44444444,0x00000000,0x00000000,0x00000000,0x00000000,
	0x44444444,0x44444444,0x44444444,0x44444444,0x00000000,0x00000000,0x00000000,0x00000000,
	0x44444444,0x44444444,0x00004444,0x00004444,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00444444,0x00444444,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

const unsigned short obstacle_bigPal[4]=
{
	0x0000,0x7FFF,0x0C64,0x18C7//,0x0000,0x0000,0x0000,0x0000,
	//0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(obstacle_big)