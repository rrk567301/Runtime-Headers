@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_storeInfo1;
+ (void)_setStoreInfo1:(id)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (id)alloc;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (void)_storeDeallocated;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;

- (id)entity;
- (id)persistentStore;
- (id)entityName;
- (BOOL)_isPersistentStoreAlive;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_storeInfo1;
- (long long)_referenceData64;
- (unsigned long long)retainCount;
- (id)initWithObject:(id)a0;
- (id)copy;
- (BOOL)isTemporaryID;
- (id)_retainedURIString;
- (oneway void)release;
- (id)initWithPK64:(long long)a0;
- (id)_storeIdentifier;
- (void)dealloc;

@end
