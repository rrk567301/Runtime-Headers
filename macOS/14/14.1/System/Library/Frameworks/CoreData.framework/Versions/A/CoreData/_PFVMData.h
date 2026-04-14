@interface _PFVMData : NSData {
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
