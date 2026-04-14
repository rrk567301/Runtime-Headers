@class NSData;

@interface _PFEncodedData : NSData {
    NSData *_aData;
    unsigned int _byteCount;
    unsigned int _reserved;
}

+ (Class)classForKeyedUnarchiver;

- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)retain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const void *)bytes;
- (BOOL)isEqualToData:(id)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)description;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopy;
- (oneway void)release;
- (id)init;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;

@end
