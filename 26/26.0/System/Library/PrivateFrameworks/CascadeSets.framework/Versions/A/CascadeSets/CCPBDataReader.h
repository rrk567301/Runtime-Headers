@class NSData;

@interface CCPBDataReader : NSObject {
    long long _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (BOOL)hasError;
- (id)initWithData:(id)a0;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (int)readInt32;
- (char)readInt8;
- (double)readDouble;
- (BOOL)hasMoreData;
- (unsigned long long)readBigEndianFixed64;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (unsigned long long)readFixed64;
- (long long)readSfixed64;
- (long long)readSint64;
- (id)readProtoBuffer;
- (unsigned int)readFixed32;
- (int)readSint32;
- (id)readString;
- (long long)readVarInt;
- (BOOL)isAtEnd;
- (id)readBigEndianShortThenString;
- (unsigned short)readBigEndianFixed16;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (long long)readInt64;
- (unsigned long long)offset;
- (unsigned long long)readUint64;
- (int)readSfixed32;
- (id)readData;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (unsigned int)readUint32;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (float)readFloat;
- (id)readBytes:(unsigned int)a0;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (unsigned int)readBigEndianFixed32;
- (BOOL)readBOOL;
- (void).cxx_destruct;
- (id)data;
- (void)updateData:(id)a0;

@end
