@class NSData;

@interface PBDataReader : NSObject {
    BOOL _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (id)data;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (BOOL)isAtEnd;
- (BOOL)hasError;
- (BOOL)hasMoreData;
- (void)updateData:(id)a0;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (unsigned long long)readBigEndianFixed64;
- (id)readProtoBuffer;
- (char)readInt8;
- (long long)readVarInt;
- (double)readDouble;
- (float)readFloat;
- (int)readInt32;
- (long long)readInt64;
- (unsigned int)readUint32;
- (unsigned long long)readUint64;
- (int)readSint32;
- (long long)readSint64;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (int)readSfixed32;
- (long long)readSfixed64;
- (BOOL)readBOOL;
- (id)readString;
- (id)readData;
- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)readBytes:(unsigned int)a0;
- (id)readBigEndianShortThenString;

@end
