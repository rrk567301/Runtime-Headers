@interface NSConcreteHashTable : NSHashTable <NSSecureCoding> {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long mutations;
    unsigned long options : 63;
    unsigned char hasDynamicSlice : 1;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copy;
- (void)removeItem:(const void *)a0;
- (unsigned long long)rehashAround:(unsigned long long)a0;
- (unsigned long long)count;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void *)getItem:(const void *)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (id)description;
- (void)insertItem:(const void *)a0;
- (id)init;
- (void)removeAllItems;
- (id)allObjects;
- (id)initWithPointerFunctions:(id)a0 capacity:(unsigned long long)a1;
- (id)initWithOptions:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (void)addObject:(id)a0;
- (id)objectEnumerator;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)pointerFunctions;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)rehash;
- (void)encodeWithCoder:(id)a0;
- (void)assign:(unsigned long long)a0 key:(const void *)a1;
- (void)hashGrow;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)raiseCountUnderflowException;

@end
