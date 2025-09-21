@class NSIndexSet;

@interface TSWPRangeArray : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) unsigned long long rangeCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } superRange;
@property (readonly, nonatomic) unsigned long long indexCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } lastRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } firstRange;
@property (readonly, nonatomic) NSIndexSet *indexes;
@property (readonly, nonatomic) struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } rangeVector;

+ (id)rangeArray;
+ (id)rangeArrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)rangeArrayWithIndexSet:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (id)initWithIndexSet:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)containsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)intersectsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)intersection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateRanges:(id /* block */)a0;
- (char)containsCharacterAtIndex:(unsigned long long)a0;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithRangeVector:(const void *)a0;
- (id)rangesByIntersectingWithRanges:(id)a0;
- (unsigned long long)indexOfRangeContainingPosition:(unsigned long long)a0;
- (unsigned long long)p_start;
- (char)containsAllRanges:(id)a0;
- (char)containsCharacterAtIndex:(unsigned long long)a0 inclusive:(BOOL)a1;
- (unsigned long long)indexForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)isEqualToRangeArray:(id)a0;
- (unsigned long long)p_finish;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeContainingPosition:(unsigned long long)a0;
- (id)rangesByCollapsingEmptyRanges;
- (id)rangesByRemovingRangesInIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)rangesByXoringWithRanges:(id)a0;
- (id)rangesIntersecting:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)reverseEnumerateRanges:(id /* block */)a0;

@end
