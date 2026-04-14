@interface LACSecureData : NSObject {
    unsigned long long _allocatedLength;
    void *_bytes;
    unsigned long long _bytesLength;
}

+ (void)resetBytes:(void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithData:(id)a0;
+ (id)secureDataWithString:(id)a0;

- (void)appendData:(id)a0;
- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithData:(id)a0;
- (id)init;
- (id)data;
- (void)appendString:(id)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithString:(id)a0;
- (void)dealloc;
- (void)reset;
- (BOOL)isEqual:(id)a0;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)resize:(unsigned long long)a0;
- (id)nullTerminatedCopy;
- (void)prepareBuffer:(unsigned long long)a0;
- (BOOL)removeLastCharacter;

@end
