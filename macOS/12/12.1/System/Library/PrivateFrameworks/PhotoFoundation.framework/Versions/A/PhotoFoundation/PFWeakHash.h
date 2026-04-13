@class NSPointerArray;
@protocol PFWeakHashDelegate;

@interface PFWeakHash : PFWeakContainer {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _serializer;
    BOOL _objectHashing;
    _Atomic struct _opaque_pthread_t *_serializedThread;
    id *_objects;
    unsigned long long _capacity;
    NSPointerArray *_payload;
    unsigned long long _payloadPurgeCounter;
    unsigned long long *_inUse;
    unsigned long long _count;
    long long _nilledWeakCount;
}

@property (weak) id<PFWeakHashDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (BOOL)removeObject:(id)a0;
- (id)member:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)capacity;
- (void)_serialize:(id /* block */)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (unsigned long long)_addObject:(id)a0;
- (void)weakReferenceBecameNil;
- (void)_dumpBuckets;
- (BOOL)_onSerializedThread;
- (id)initWithObjectHashing;
- (id)initWithPointerHashing;
- (void)postDelegateBecameEmptyNotice;
- (BOOL)_removeAllObjects;
- (void)_rehashWithNewCapacity:(unsigned long long)a0;
- (unsigned long long)_bucketForObject:(id)a0 foundInHash:(BOOL *)a1;
- (BOOL)_shouldGrow;
- (BOOL)_shouldShrink;
- (void)_resize;
- (void)_purgeOrphanedPayloads;
- (void)_processNilledWeakReferences;
- (void)_doEnumeration:(id /* block */)a0;
- (unsigned long long)countEstimate;
- (unsigned long long)countByVerifyingWeakObjects;
- (void)_setPayload:(id)a0 inBucket:(unsigned long long)a1;
- (void)addObject:(id)a0 withPayload:(id)a1;
- (void)setPayload:(id)a0 forObject:(id)a1;
- (id)payloadForObject:(id)a0;
- (void)enumerateObjectsAndPayloadsWithBlock:(id /* block */)a0;

@end
