@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
}

+ (BOOL)initializeSlice:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 withOptions:(unsigned long long)a1;
+ (void)initializeBackingStore:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 sentinel:(BOOL)a1 weakAutoreleasing:(BOOL)a2 dynamic:(BOOL)a3;

- (void)setIsEqualFunction:(void /* function */ *)a0;
- (void)setRelinquishFunction:(void /* function */ *)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)setAcquireFunction:(void /* function */ *)a0;
- (void)setHashFunction:(void /* function */ *)a0;
- (void /* function */ *)acquireFunction;
- (id)init;
- (void)setDescriptionFunction:(void /* function */ *)a0;
- (BOOL)usesStrongWriteBarrier;
- (void)setSizeFunction:(void /* function */ *)a0;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)a0;
- (void)setUsesStrongWriteBarrier:(BOOL)a0;
- (void /* function */ *)descriptionFunction;
- (void /* function */ *)sizeFunction;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void /* function */ *)isEqualFunction;
- (void /* function */ *)hashFunction;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void /* function */ *)relinquishFunction;
- (BOOL)usesWeakReadAndWriteBarriers;

@end
