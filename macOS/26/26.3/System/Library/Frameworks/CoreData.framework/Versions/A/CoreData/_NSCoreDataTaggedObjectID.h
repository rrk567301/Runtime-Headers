@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (id)_storeInfo1;
+ (BOOL)_usesTaggedPointers;
+ (void)_setStoreInfo1:(id)a0;
+ (void)_storeDeallocated;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)setObjectStoreIdentifier:(id)a0;

- (id)copy;
- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (unsigned long long)retainCount;
- (id)initWithPK64:(long long)a0;
- (id)entityName;
- (id)initWithObject:(id)a0;
- (id)persistentStore;
- (id)retain;
- (id)_storeInfo1;
- (long long)_referenceData64;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_storeIdentifier;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isTemporaryID;
- (id)_retainedURIString;
- (oneway void)release;

@end
