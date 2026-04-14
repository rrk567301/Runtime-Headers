@interface NSConcreteMapTable : NSMapTable {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } keys;
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } values;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long keyOptions;
    unsigned long long valueOptions;
    unsigned long long mutations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } growLock;
    BOOL shouldRehash;
    BOOL hasDynamicSlices;
}

+ (BOOL)supportsSecureCoding;

- (id)copy;
- (unsigned long long)rehashAround:(unsigned long long)a0;
- (unsigned long long)count;
- (id)keyPointerFunctions;
- (BOOL)containsKeys:(const void **)a0 values:(const void **)a1 count:(unsigned long long)a2;
- (unsigned long long)realCount;
- (id)dump;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)checkCount:(const char *)a0;
- (id)description;
- (id)init;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (id)allValues;
- (void)removeAllItems;
- (id)keyEnumerator;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (void)assign:(unsigned long long)a0 key:(const void *)a1 value:(const void *)a2 isNew:(BOOL)a3;
- (id)valuePointerFunctions;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;
- (void)_setBackingStore;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (id)objectEnumerator;
- (id)initWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)__capacity;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)grow;
- (unsigned long long)hash;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (void)rehash;
- (void)encodeWithCoder:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)_reclaim;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)raiseCountUnderflowException;

@end
