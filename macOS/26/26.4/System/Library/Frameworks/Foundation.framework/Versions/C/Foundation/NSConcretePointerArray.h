@interface NSConcretePointerArray : NSPointerArray {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
    BOOL needsCompaction;
    BOOL hasDynamicSlice;
}

+ (BOOL)supportsSecureCoding;

- (void)compact;
- (void)setCount:(unsigned long long)a0;
- (void)removePointer:(void *)a0;
- (void *)pointerAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)arrayGrow:(unsigned long long)a0;
- (void)replacePointerAtIndex:(unsigned long long)a0 withPointer:(void *)a1;
- (id)pointerFunctions;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)_markNeedsCompaction;
- (void)removePointerAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPointerFunctions:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)count;
- (void)addPointer:(void *)a0;
- (unsigned long long)indexOfPointer:(void *)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)insertPointer:(void *)a0 atIndex:(unsigned long long)a1;

@end
