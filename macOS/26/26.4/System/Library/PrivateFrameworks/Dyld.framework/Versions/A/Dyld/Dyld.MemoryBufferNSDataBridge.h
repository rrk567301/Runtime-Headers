@interface Dyld.MemoryBufferNSDataBridge : NSData {
    void /* unknown type, empty encoding */ memoryBuffer;
}

@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) void *bytes;

- (id)initWithContentsOfURL:(id)a0;
- (id)initWithBytes:(void *)a0 length:(long long)a1;
- (id)initWithBase64EncodedString:(id)a0 options:(unsigned long long)a1;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithContentsOfMappedFile:(id)a0;
- (void).cxx_destruct;
- (id)initWithBytesNoCopy:(void *)a0 length:(long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithBytesNoCopy:(void *)a0 length:(long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(long long)a1 deallocator:(id /* block */)a2;
- (id)init;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithBase64EncodedData:(id)a0 options:(unsigned long long)a1;

@end
