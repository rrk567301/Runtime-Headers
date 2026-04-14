@class NSData;

@interface PBDataReader : NSObject {
    BOOL _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (int)readSfixed32;
- (long long)readSint64;
- (unsigned int)readBigEndianFixed32;
- (unsigned long long)offset;
- (BOOL)hasError;
- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (long long)readVarInt;
- (id)initWithData:(id)a0;
- (unsigned long long)readFixed64;
- (long long)readSfixed64;
- (id)readData;
- (BOOL)isAtEnd;
- (int)readSint32;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)readString;
- (unsigned long long)readBigEndianFixed64;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (id)data;
- (int)readInt32;
- (id)readProtoBuffer;
- (long long)readInt64;
- (double)readDouble;
- (unsigned long long)readUint64;
- (id)readBytes:(unsigned int)a0;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (unsigned int)readUint32;
- (void).cxx_destruct;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (BOOL)hasMoreData;
- (unsigned int)readFixed32;
- (char)readInt8;
- (void)updateData:(id)a0;
- (id)readBigEndianShortThenString;
- (unsigned short)readBigEndianFixed16;
- (void)_setError;
- (BOOL)readBOOL;
- (float)readFloat;

@end
