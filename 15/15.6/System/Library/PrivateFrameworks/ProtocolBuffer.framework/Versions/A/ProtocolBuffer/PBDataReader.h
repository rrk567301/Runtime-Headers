@class NSData;

@interface PBDataReader : NSObject {
    char _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0;
- (unsigned long long)offset;
- (char)isAtEnd;
- (float)readFloat;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)readProtoBuffer;
- (char)hasError;
- (char)hasMoreData;
- (char)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (char)readBOOL;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (unsigned long long)readBigEndianFixed64;
- (id)readBigEndianShortThenString;
- (id)readBytes:(unsigned int)a0;
- (id)readData;
- (double)readDouble;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (int)readInt32;
- (long long)readInt64;
- (char)readInt8;
- (int)readSfixed32;
- (long long)readSfixed64;
- (int)readSint32;
- (long long)readSint64;
- (id)readString;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (unsigned int)readUint32;
- (unsigned long long)readUint64;
- (long long)readVarInt;
- (char)seekToOffset:(unsigned long long)a0;
- (char)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (char)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (void)updateData:(id)a0;

@end
