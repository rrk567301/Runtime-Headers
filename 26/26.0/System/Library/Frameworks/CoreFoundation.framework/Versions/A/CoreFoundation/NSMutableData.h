@interface NSMutableData : NSData

@property (readonly) void *mutableBytes;
@property unsigned long long length;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)dataWithLength:(unsigned long long)a0;
+ (id)dataWithCapacity:(unsigned long long)a0;
+ (id)_newZeroingDataWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)dataWithRandomBytes:(int)a0;

- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (Class)classForCoder;
- (void)setData:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)_isCompact;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithLength:(unsigned long long)a0;
- (void)appendData:(id)a0;
- (void)increaseLengthBy:(unsigned long long)a0;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1 length:(unsigned long long)a2;
- (BOOL)decompressUsingAlgorithm:(long long)a0 error:(id *)a1;
- (BOOL)_compressUsingCompressionAlgorithm:(int)a0 error:(id *)a1;
- (BOOL)_decompressUsingCompressionAlgorithm:(int)a0 error:(id *)a1;
- (BOOL)compressUsingAlgorithm:(long long)a0 error:(id *)a1;
- (void)serializeAlignedBytes:(void *)a0 length:(unsigned int)a1;
- (void)serializeAlignedBytesLength:(unsigned int)a0;
- (void)serializeDataAt:(const void *)a0 ofObjCType:(const char *)a1 context:(id)a2;
- (void)serializeInt:(int)a0;
- (void)serializeInt:(int)a0 atIndex:(unsigned int)a1;
- (void)serializeInts:(int *)a0 count:(unsigned int)a1;
- (void)serializeInts:(int *)a0 count:(unsigned int)a1 atIndex:(unsigned int)a2;
- (void)replaceTrailingWith7LSB:(unsigned long long)a0;

@end
