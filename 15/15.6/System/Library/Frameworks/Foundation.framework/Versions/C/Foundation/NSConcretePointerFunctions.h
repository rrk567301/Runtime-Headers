@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
}

+ (void)initializeBackingStore:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 sentinel:(char)a1 weakAutoreleasing:(char)a2 dynamic:(char)a3;
+ (BOOL)initializeSlice:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 withOptions:(unsigned long long)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void /* function */ *)acquireFunction;
- (void /* function */ *)isEqualFunction;
- (void /* function */ *)descriptionFunction;
- (void /* function */ *)hashFunction;
- (void /* function */ *)relinquishFunction;
- (void)setAcquireFunction:(void /* function */ *)a0;
- (void)setDescriptionFunction:(void /* function */ *)a0;
- (void)setHashFunction:(void /* function */ *)a0;
- (void)setIsEqualFunction:(void /* function */ *)a0;
- (void)setRelinquishFunction:(void /* function */ *)a0;
- (void)setSizeFunction:(void /* function */ *)a0;
- (void)setUsesStrongWriteBarrier:(char)a0;
- (void)setUsesWeakReadAndWriteBarriers:(char)a0;
- (void /* function */ *)sizeFunction;
- (char)usesStrongWriteBarrier;
- (char)usesWeakReadAndWriteBarriers;

@end
