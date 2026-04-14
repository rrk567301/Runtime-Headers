@class NSData;

@interface CCPBDataReader : NSObject {
    long long _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (long long)readSint64;
- (BOOL)hasError;
- (BOOL)isAtEnd;
- (double)readDouble;
- (unsigned long long)readBigEndianFixed64;
- (id)readBigEndianShortThenString;
- (long long)readInt64;
- (int)readSfixed32;
- (int)readSint32;
- (unsigned long long)offset;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (void)updateData:(id)a0;
- (char)readInt8;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)readUint64;
- (float)readFloat;
- (id)readString;
- (id)data;
- (id)readData;
- (id)readBytes:(unsigned int)a0;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (unsigned long long)readFixed64;
- (void).cxx_destruct;
- (long long)readSfixed64;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (unsigned int)readFixed32;
- (int)readInt32;
- (BOOL)hasMoreData;
- (unsigned int)readUint32;
- (long long)readVarInt;
- (unsigned int)readBigEndianFixed32;
- (unsigned short)readBigEndianFixed16;
- (id)readProtoBuffer;
- (BOOL)readBOOL;

@end
