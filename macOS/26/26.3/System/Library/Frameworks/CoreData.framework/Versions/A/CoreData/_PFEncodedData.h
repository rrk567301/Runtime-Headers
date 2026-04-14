@class NSData;

@interface _PFEncodedData : NSData {
    NSData *_aData;
    unsigned int _byteCount;
    unsigned int _reserved;
}

+ (Class)classForKeyedUnarchiver;

- (const void *)bytes;
- (id)mutableCopy;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)retain;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)init;
- (BOOL)_tryRetain;
- (BOOL)isEqualToData:(id)a0;
- (Class)classForCoder;
- (BOOL)_isDeallocating;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (oneway void)release;

@end
