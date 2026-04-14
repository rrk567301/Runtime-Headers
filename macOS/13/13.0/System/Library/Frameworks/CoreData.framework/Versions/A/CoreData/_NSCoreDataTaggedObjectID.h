@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (void)_setStoreInfo1:(id)a0;
+ (id)_storeInfo1;
+ (void)_storeDeallocated;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (id)entityName;
- (id)entity;
- (id)persistentStore;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeInfo1;
- (BOOL)isTemporaryID;
- (id)_storeIdentifier;
- (id)_retainedURIString;
- (long long)_referenceData64;
- (id)initWithPK64:(long long)a0;

@end
