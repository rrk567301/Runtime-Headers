@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)_retain_1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (void)_storeDeallocated;
+ (BOOL)_usesTaggedPointers;
+ (void)_release_1;
+ (id)_storeInfo1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (char *)generatedNameSuffix;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (long long)version;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (id)retain;
+ (void)initialize;
+ (void)_setStoreInfo1:(id)a0;
+ (void)release;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeInfo1;
- (id)entityName;
- (id)retain;
- (id)_storeIdentifier;
- (unsigned long long)retainCount;
- (id)persistentStore;
- (id)URIRepresentation;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTemporaryID;

@end
