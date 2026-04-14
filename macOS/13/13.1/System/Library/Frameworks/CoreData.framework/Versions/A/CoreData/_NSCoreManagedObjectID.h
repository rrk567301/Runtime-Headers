@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)retain;
+ (void)release;
+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (long long)version;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)_retain_1;
+ (void)_release_1;
+ (char *)generatedNameSuffix;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (void)_setStoreInfo1:(id)a0;
+ (id)_storeInfo1;
+ (void)_storeDeallocated;

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
- (id)_storeInfo1;
- (BOOL)isTemporaryID;
- (id)_storeIdentifier;

@end
