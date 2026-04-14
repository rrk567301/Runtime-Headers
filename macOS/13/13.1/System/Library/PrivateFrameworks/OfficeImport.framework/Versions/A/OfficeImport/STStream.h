@interface STStream : STSStgObject

@property (readonly, nonatomic) struct _Stream { } *cStream;

- (void)dealloc;
- (void)close;
- (id)readBytes:(unsigned int)a0;
- (id)initWithCStream:(struct _Stream { } *)a0;
- (void)releaseCStream;
- (id)getInfo;
- (void)seek:(int)a0 fromOrigin:(int)a1;
- (unsigned int)getPos;
- (void)setClass:(struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; })a0;
- (char)readChar8;
- (unsigned char)readUInt8;
- (unsigned char)readBool8;
- (short)readSInt16;
- (unsigned short)readUInt16;
- (int)readSInt32;
- (unsigned int)readUInt32;
- (unsigned long long)readUInt64;
- (float)readFloat32;
- (double)readFloat64;
- (unsigned short)readChar16;
- (id)readString16:(unsigned int)a0;
- (void)writeBytes:(id)a0;
- (void)writeUInt8:(unsigned char)a0;
- (void)writeChar8:(char)a0;
- (void)writeBool8:(unsigned char)a0;
- (void)writeSInt16:(short)a0;
- (void)writeUInt16:(unsigned short)a0;
- (void)writeSInt32:(int)a0;
- (void)writeUInt32:(unsigned int)a0;
- (void)writeFloat32:(float)a0;
- (void)writeFloat64:(double)a0;
- (void)writeChar16:(unsigned short)a0;
- (void)writeString16:(id)a0;
- (void)writeString16NoTerminator:(id)a0;

@end
