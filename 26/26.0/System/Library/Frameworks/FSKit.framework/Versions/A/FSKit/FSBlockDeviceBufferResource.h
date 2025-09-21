@class NSMutableData;

@interface FSBlockDeviceBufferResource : FSBlockDeviceResource

@property (readonly) NSMutableData *buffer;
@property (readonly) long long headerLength;
@property (readonly) long long footerLength;
@property (readonly) long long size;

+ (BOOL)supportsSecureCoding;
+ (id)bufferFromResource:(id)a0;
+ (id)dynamicCast:(id)a0;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)asynchronousMetadataFlushWithError:(id *)a0;
- (BOOL)delayedMetadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (id)initBufferFromResource:(id)a0;
- (BOOL)metadataClear:(id)a0 withDelayedWrites:(BOOL)a1 error:(id *)a2;
- (BOOL)metadataFlushWithError:(id *)a0;
- (BOOL)metadataPurge:(id)a0 error:(id *)a1;
- (BOOL)metadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (BOOL)metadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 readAheadExtents:(const struct { long long x0; unsigned long long x1; } *)a3 readAheadCount:(long long)a4 error:(id *)a5;
- (BOOL)metadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (void)readInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)readInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (void)writeFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)writeFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;

@end
