@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)retain;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (long long)version;
+ (void)initialize;
+ (char *)generatedNameSuffix;
+ (void)release;
+ (void)_setStoreInfo1:(id)a0;
+ (void)_release_1;
+ (BOOL)_usesTaggedPointers;
+ (id)_storeInfo1;
+ (void)_storeDeallocated;
+ (id)_retain_1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;

- (id)entityName;
- (id)retain;
- (BOOL)_isPersistentStoreAlive;
- (unsigned long long)hash;
- (oneway void)release;
- (id)entity;
- (BOOL)isTemporaryID;
- (unsigned long long)retainCount;
- (id)URIRepresentation;
- (id)_storeInfo1;
- (id)persistentStore;
- (BOOL)isEqual:(id)a0;
- (id)_storeIdentifier;

@end
