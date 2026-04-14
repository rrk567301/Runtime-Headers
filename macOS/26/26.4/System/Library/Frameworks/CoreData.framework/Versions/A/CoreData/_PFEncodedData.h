@class NSData;

@interface _PFEncodedData : NSData {
    NSData *_aData;
    unsigned int _byteCount;
    unsigned int _reserved;
}

+ (Class)classForKeyedUnarchiver;

- (id)mutableCopy;
- (BOOL)_tryRetain;
- (BOOL)isEqualToData:(id)a0;
- (const void *)bytes;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)retain;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)init;
- (id)description;
- (oneway void)release;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (unsigned long long)retainCount;

@end
