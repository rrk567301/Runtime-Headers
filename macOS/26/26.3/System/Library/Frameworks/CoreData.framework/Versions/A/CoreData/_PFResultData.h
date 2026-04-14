@interface _PFResultData : NSData {
    int _cd_rc;
    unsigned int _length;
    id _parentObject;
}

+ (Class)classForKeyedUnarchiver;

- (const void *)bytes;
- (id)mutableCopy;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (void)setParentObject:(id)a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)retain;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)init;
- (BOOL)isEqualToData:(id)a0;
- (Class)classForCoder;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (oneway void)release;

@end
