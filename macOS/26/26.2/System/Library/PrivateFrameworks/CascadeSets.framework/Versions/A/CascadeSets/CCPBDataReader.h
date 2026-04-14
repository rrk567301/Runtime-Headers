@class NSData;

@interface CCPBDataReader : NSObject {
    long long _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (BOOL)hasError;
- (unsigned int)readFixed32;
- (unsigned int)readBigEndianFixed32;
- (int)readSint32;
- (BOOL)hasMoreData;
- (id)readData;
- (double)readDouble;
- (unsigned long long)readFixed64;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (unsigned short)readBigEndianFixed16;
- (long long)readSfixed64;
- (id)initWithData:(id)a0;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (long long)readVarInt;
- (long long)readSint64;
- (int)readSfixed32;
- (long long)readInt64;
- (unsigned int)readUint32;
- (void).cxx_destruct;
- (unsigned long long)readBigEndianFixed64;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)readBigEndianShortThenString;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (BOOL)readBOOL;
- (float)readFloat;
- (id)readBytes:(unsigned int)a0;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (int)readInt32;
- (id)readProtoBuffer;
- (char)readInt8;
- (void)updateData:(id)a0;
- (unsigned long long)offset;
- (id)data;
- (id)readString;
- (unsigned long long)readUint64;
- (BOOL)isAtEnd;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;

@end
