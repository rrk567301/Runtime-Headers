@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long *_indexes;
    unsigned long long _length;
    void *_reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long length;

+ (void)initialize;
+ (id)indexPathWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;
+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;
- (unsigned long long)indexAtPosition:(unsigned long long)a0;
- (void)getIndexes:(unsigned long long *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithIndex:(unsigned long long)a0;
- (void)getIndexes:(unsigned long long *)a0;
- (id)indexPathByRemovingLastIndex;
- (id)indexPathByAddingIndex:(unsigned long long)a0;

@end
