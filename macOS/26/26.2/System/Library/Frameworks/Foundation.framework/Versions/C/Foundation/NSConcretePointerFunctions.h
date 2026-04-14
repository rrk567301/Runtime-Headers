@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
}

+ (void)initializeBackingStore:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 sentinel:(BOOL)a1 weakAutoreleasing:(BOOL)a2 dynamic:(BOOL)a3;
+ (BOOL)initializeSlice:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 withOptions:(unsigned long long)a1;

- (void)setRelinquishFunction:(void /* function */ *)a0;
- (void)setUsesStrongWriteBarrier:(BOOL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)usesStrongWriteBarrier;
- (void /* function */ *)hashFunction;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void /* function */ *)acquireFunction;
- (void)setHashFunction:(void /* function */ *)a0;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)a0;
- (void /* function */ *)sizeFunction;
- (void)setAcquireFunction:(void /* function */ *)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)setIsEqualFunction:(void /* function */ *)a0;
- (id)init;
- (BOOL)usesWeakReadAndWriteBarriers;
- (void /* function */ *)isEqualFunction;
- (void)setDescriptionFunction:(void /* function */ *)a0;
- (void /* function */ *)relinquishFunction;
- (void)setSizeFunction:(void /* function */ *)a0;
- (void /* function */ *)descriptionFunction;
- (void)dealloc;

@end
