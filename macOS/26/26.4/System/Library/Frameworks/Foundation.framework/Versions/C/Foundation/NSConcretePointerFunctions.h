@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
}

+ (void)initializeBackingStore:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 sentinel:(BOOL)a1 weakAutoreleasing:(BOOL)a2 dynamic:(BOOL)a3;
+ (BOOL)initializeSlice:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 withOptions:(unsigned long long)a1;

- (void)setUsesStrongWriteBarrier:(BOOL)a0;
- (void /* function */ *)relinquishFunction;
- (void)setIsEqualFunction:(void /* function */ *)a0;
- (void)setDescriptionFunction:(void /* function */ *)a0;
- (void /* function */ *)descriptionFunction;
- (void /* function */ *)acquireFunction;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)usesWeakReadAndWriteBarriers;
- (void /* function */ *)isEqualFunction;
- (BOOL)isEqual:(id)a0;
- (void)setSizeFunction:(void /* function */ *)a0;
- (void)setAcquireFunction:(void /* function */ *)a0;
- (void /* function */ *)hashFunction;
- (BOOL)usesStrongWriteBarrier;
- (void /* function */ *)sizeFunction;
- (unsigned long long)hash;
- (void)setRelinquishFunction:(void /* function */ *)a0;
- (id)init;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)a0;
- (void)setHashFunction:(void /* function */ *)a0;
- (void)dealloc;

@end
