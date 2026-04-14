@class NSMutableData;

@interface FSBlockDeviceBufferResource : FSBlockDeviceResource

@property (readonly) NSMutableData *buffer;
@property (readonly) long long headerLength;
@property (readonly) long long footerLength;
@property (readonly) long long size;

+ (BOOL)supportsSecureCoding;
+ (id)bufferFromResource:(id)a0;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)delayedMetadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (id)initBufferFromResource:(id)a0;
- (void)metadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)readInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)synchronousMetadataClear:(id)a0 wait:(BOOL)a1 replyHandler:(id /* block */)a2;
- (void)synchronousMetadataPurge:(id)a0 replyHandler:(id /* block */)a1;
- (void)synchronousMetadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 readAheadExtents:(const struct { long long x0; unsigned long long x1; } *)a3 readAheadCount:(long long)a4 replyHandler:(id /* block */)a5;
- (void)synchronousMetadataReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)synchronousMetadataWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)synchronousReadInto:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)synchronousWriteFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)writeFrom:(void *)a0 startingAt:(long long)a1 length:(unsigned long long)a2 replyHandler:(id /* block */)a3;

@end
