@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
}

+ (BOOL)initializeSlice:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 withOptions:(unsigned long long)a1;
+ (void)initializeBackingStore:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 sentinel:(BOOL)a1 weakAutoreleasing:(BOOL)a2 dynamic:(BOOL)a3;

- (void /* function */ *)sizeFunction;
- (unsigned long long)hash;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)usesWeakReadAndWriteBarriers;
- (void)setAcquireFunction:(void /* function */ *)a0;
- (void)setSizeFunction:(void /* function */ *)a0;
- (void)setDescriptionFunction:(void /* function */ *)a0;
- (void)dealloc;
- (void /* function */ *)hashFunction;
- (void /* function */ *)isEqualFunction;
- (void)setUsesStrongWriteBarrier:(BOOL)a0;
- (void /* function */ *)descriptionFunction;
- (BOOL)usesStrongWriteBarrier;
- (void)setRelinquishFunction:(void /* function */ *)a0;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void /* function */ *)acquireFunction;
- (BOOL)isEqual:(id)a0;
- (void /* function */ *)relinquishFunction;
- (void)setIsEqualFunction:(void /* function */ *)a0;
- (void)setHashFunction:(void /* function */ *)a0;
- (id)init;

@end
