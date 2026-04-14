@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)alloc;
+ (void)initialize;
+ (void)_storeDeallocated;
+ (void)_setStoreInfo1:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (BOOL)_usesTaggedPointers;
+ (id)_storeInfo1;

- (id)entityName;
- (BOOL)_isPersistentStoreAlive;
- (id)initWithObject:(id)a0;
- (id)entity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)persistentStore;
- (id)_storeIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (id)retain;
- (unsigned long long)hash;
- (long long)_referenceData64;
- (oneway void)release;
- (BOOL)isTemporaryID;
- (id)_retainedURIString;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithPK64:(long long)a0;
- (id)_storeInfo1;

@end
