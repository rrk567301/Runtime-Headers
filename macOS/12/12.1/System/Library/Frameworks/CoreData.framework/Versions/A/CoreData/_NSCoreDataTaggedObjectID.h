@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)alloc;
+ (void)_storeDeallocated;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)_setStoreInfo1:(id)a0;
+ (id)_storeInfo1;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithObject:(id)a0;
- (id)entityName;
- (id)entity;
- (id)persistentStore;
- (BOOL)_isPersistentStoreAlive;
- (BOOL)isTemporaryID;
- (id)_storeIdentifier;
- (long long)_referenceData64;
- (id)initWithPK64:(long long)a0;
- (id)_retainedURIString;
- (id)_storeInfo1;

@end
