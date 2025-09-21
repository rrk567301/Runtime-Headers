@interface OITSURangeList : NSObject {
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct _NSRange *__cap_; } mRangeList;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)stringValue;
- (id)initWithString:(id)a0;
- (id).cxx_construct;
- (void)reverse;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1;
- (void)removeRangeAtIndex:(unsigned long long)a0;
- (void)consolidate;
- (id)initWithRangeList:(id)a0;
- (void)replaceWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1;

@end
