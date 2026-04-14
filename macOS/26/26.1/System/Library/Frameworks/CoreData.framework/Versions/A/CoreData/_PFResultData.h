@interface _PFResultData : NSData {
    int _cd_rc;
    unsigned int _length;
    id _parentObject;
}

+ (Class)classForKeyedUnarchiver;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)retain;
- (id)mutableCopy;
- (const void *)bytes;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (oneway void)release;
- (void)setParentObject:(id)a0;
- (unsigned long long)retainCount;
- (Class)classForCoder;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (unsigned long long)length;
- (id)description;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqualToData:(id)a0;
- (void)dealloc;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
