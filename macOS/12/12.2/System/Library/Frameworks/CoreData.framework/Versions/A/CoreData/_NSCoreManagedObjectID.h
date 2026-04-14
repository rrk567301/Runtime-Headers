@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)retain;
+ (void)release;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)alloc;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (long long)version;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)_storeDeallocated;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (char *)generatedNameSuffix;
+ (id)_retain_1;
+ (void)_release_1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)_setStoreInfo1:(id)a0;
+ (id)_storeInfo1;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)entityName;
- (id)entity;
- (id)URIRepresentation;
- (id)persistentStore;
- (BOOL)_isPersistentStoreAlive;
- (BOOL)isTemporaryID;
- (id)_storeIdentifier;
- (id)_storeInfo1;

@end
