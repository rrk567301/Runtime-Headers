@interface _PFVMData : NSData {
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (Class)classForCoder;
- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)dealloc;

@end
