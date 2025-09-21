@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
}

+ (BOOL)initializeSlice:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 withOptions:(unsigned long long)a1;
+ (void)initializeBackingStore:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 sentinel:(BOOL)a1 weakAutoreleasing:(BOOL)a2 dynamic:(BOOL)a3;

- (void /* function */ *)acquireFunction;
- (void)dealloc;
- (void)setIsEqualFunction:(void /* function */ *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)setRelinquishFunction:(void /* function */ *)a0;
- (void)setDescriptionFunction:(void /* function */ *)a0;
- (void /* function */ *)hashFunction;
- (void)setAcquireFunction:(void /* function */ *)a0;
- (id)init;
- (void)setSizeFunction:(void /* function */ *)a0;
- (void /* function */ *)sizeFunction;
- (void)setHashFunction:(void /* function */ *)a0;
- (void)setUsesStrongWriteBarrier:(BOOL)a0;
- (void /* function */ *)descriptionFunction;
- (unsigned long long)hash;
- (void /* function */ *)relinquishFunction;
- (void /* function */ *)isEqualFunction;
- (BOOL)isEqual:(id)a0;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)a0;
- (BOOL)usesWeakReadAndWriteBarriers;
- (BOOL)usesStrongWriteBarrier;

@end
