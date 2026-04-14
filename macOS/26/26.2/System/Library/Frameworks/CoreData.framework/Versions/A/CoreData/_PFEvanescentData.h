@class NSURL;

@interface _PFEvanescentData : NSData {
    unsigned long long _length;
    NSURL *_fileURL;
    int _openfd;
    const void *_activeMap;
    int _mapRefCount;
}

+ (Class)classForKeyedUnarchiver;

- (void)invalidate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0;
- (const void *)bytes;
- (BOOL)isEqualToData:(id)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)length;
- (id)description;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getBytes:(void *)a0;
- (id)initWithPath:(id)a0;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (void)dealloc;

@end
