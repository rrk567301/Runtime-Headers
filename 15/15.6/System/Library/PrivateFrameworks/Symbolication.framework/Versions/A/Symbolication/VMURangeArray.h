@interface VMURangeArray : NSObject <NSCopying> {
    unsigned int _count;
    struct _VMURange { unsigned long long x0; unsigned long long x1; } *_ranges;
    unsigned int _max;
    char _sorted;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (unsigned int)count;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned int)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })range;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; } *)ranges;
- (void)addRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (char)containsLocation:(unsigned long long)a0;
- (char)containsRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithRanges:(const struct _VMURange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned int)a1;
- (void)insertRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned int)a1;
- (void)removeRangeAtIndex:(unsigned int)a0;
- (void)setCapacity:(unsigned int)a0;
- (void)sort;
- (char)intersectsRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAllRanges;
- (void)addRanges:(id)a0;
- (unsigned long long)indexForLocation:(unsigned long long)a0;
- (char)intersectsLocation:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })largestRange;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeForLocation:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })subrangeNotExcludedBySelfForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)sumLengths;

@end
