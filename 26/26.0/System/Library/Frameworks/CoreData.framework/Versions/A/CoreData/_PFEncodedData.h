@class NSData;

@interface _PFEncodedData : NSData {
    NSData *_aData;
    unsigned int _byteCount;
    unsigned int _reserved;
}

+ (Class)classForKeyedUnarchiver;

- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToData:(id)a0;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_isDeallocating;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (const void *)bytes;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (unsigned long long)length;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;

@end
