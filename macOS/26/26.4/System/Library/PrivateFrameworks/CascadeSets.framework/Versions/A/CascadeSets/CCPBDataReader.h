@class NSData;

@interface CCPBDataReader : NSObject {
    long long _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)hasError;
- (id)readString;
- (BOOL)hasMoreData;
- (int)readInt32;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (int)readSfixed32;
- (id)readBigEndianShortThenString;
- (unsigned int)readBigEndianFixed32;
- (long long)readInt64;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (long long)readSint64;
- (id)initWithData:(id)a0;
- (BOOL)readBOOL;
- (unsigned long long)readFixed64;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (unsigned long long)readBigEndianFixed64;
- (void).cxx_destruct;
- (id)readBytes:(unsigned int)a0;
- (BOOL)isAtEnd;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readFixed32;
- (id)readData;
- (long long)readVarInt;
- (unsigned long long)readUint64;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (int)readSint32;
- (long long)readSfixed64;
- (void)updateData:(id)a0;
- (id)data;
- (float)readFloat;
- (char)readInt8;
- (unsigned long long)offset;
- (id)readProtoBuffer;
- (double)readDouble;
- (unsigned int)readUint32;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;

@end
