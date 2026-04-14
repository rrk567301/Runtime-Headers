@interface Foundation.__NSSwiftData : NSData {
    void /* unknown type, empty encoding */ _backing;
    void /* unknown type, empty encoding */ _range;
}

@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) void *bytes;

- (id)initWithContentsOfURL:(id)a0;
- (id)mutableCopyWithZone:(void *)a0;
- (id)initWithData:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithContentsOfMappedFile:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_providesConcreteBacking;
- (id)init;
- (id)initWithBytes:(void *)a0 length:(long long)a1;
- (BOOL)_isCompact;
- (id)initWithBytesNoCopy:(void *)a0 length:(long long)a1;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithBase64EncodedData:(id)a0 options:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(long long)a1 deallocator:(id /* block */)a2;
- (id)initWithContentsOfMappedFile:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithContentsOfFile:(id)a0 error:(id *)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(long long)a1 freeWhenDone:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithBase64EncodedString:(id)a0 options:(unsigned long long)a1;

@end
