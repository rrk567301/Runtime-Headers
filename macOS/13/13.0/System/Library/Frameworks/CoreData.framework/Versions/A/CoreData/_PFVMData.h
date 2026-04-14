@interface _PFVMData : NSData {
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
