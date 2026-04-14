@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)initialize;
+ (void)_setStoreInfo1:(id)a0;
+ (BOOL)_usesTaggedPointers;
+ (id)_storeInfo1;
+ (void)_storeDeallocated;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;

- (id)copy;
- (id)entityName;
- (id)retain;
- (BOOL)_isPersistentStoreAlive;
- (unsigned long long)hash;
- (oneway void)release;
- (id)entity;
- (BOOL)isTemporaryID;
- (unsigned long long)retainCount;
- (id)initWithObject:(id)a0;
- (id)_storeInfo1;
- (id)persistentStore;
- (void)dealloc;
- (id)initWithPK64:(long long)a0;
- (id)_retainedURIString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_storeIdentifier;
- (long long)_referenceData64;

@end
