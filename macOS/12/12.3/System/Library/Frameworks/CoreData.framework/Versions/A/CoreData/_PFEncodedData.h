@class NSData;

@interface _PFEncodedData : NSData {
    NSData *_aData;
    unsigned int _byteCount;
    unsigned int _reserved;
}

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (unsigned long long)length;
- (const void *)bytes;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (Class)classForCoder;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqualToData:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
