@interface LASecureData : NSObject {
    unsigned long long _allocatedLength;
    void *_bytes;
    unsigned long long _bytesLength;
}

+ (id)secureDataWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithString:(id)a0;
+ (id)secureDataWithData:(id)a0;
+ (void)resetBytes:(void *)a0 length:(unsigned long long)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (id)data;
- (id)initWithData:(id)a0;
- (void)appendString:(id)a0;
- (id)initWithString:(id)a0;
- (void)appendData:(id)a0;
- (void)reset;
- (void)prepareBuffer:(unsigned long long)a0;
- (void)resize:(unsigned long long)a0;
- (BOOL)removeLastCharacter;

@end
