@interface TSWPDirtyRangeArray : NSObject <NSCopying, NSMutableCopying> {
    struct vector<TSWPDirtyRange, std::allocator<TSWPDirtyRange>> { struct *__begin_; struct *__end_; struct { struct *__cap_; } ; } _rangeVector;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) unsigned long long count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)delta;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (id)initWithRangeVector:(const void *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superRange;
- (struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; })dirtyRangeAtIndex:(unsigned long long)a0;
- (id)dirtyRangesIntersecting:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)inclusiveDirtyRangesIntersecting:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)indexForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithDirtyRange:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; })a0;
- (BOOL)isEqualToDirtyRangeArray:(id)a0;

@end
