@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)alloc;
+ (void)_storeDeallocated;
+ (BOOL)_usesTaggedPointers;
+ (id)_storeInfo1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (void)initialize;
+ (void)_setStoreInfo1:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (id)_retainedURIString;
- (id)_storeInfo1;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPK64:(long long)a0;
- (id)entityName;
- (id)copy;
- (id)retain;
- (id)_storeIdentifier;
- (unsigned long long)retainCount;
- (long long)_referenceData64;
- (id)persistentStore;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTemporaryID;

@end
