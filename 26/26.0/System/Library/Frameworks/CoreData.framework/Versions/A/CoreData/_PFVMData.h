@interface _PFVMData : NSData {
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (Class)classForCoder;
- (const void *)bytes;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)length;

@end
