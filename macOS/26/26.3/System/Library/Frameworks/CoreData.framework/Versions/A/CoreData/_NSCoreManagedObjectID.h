@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)initialize;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)_release_1;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (id)retain;
+ (id)_storeInfo1;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (BOOL)_usesTaggedPointers;
+ (void)_setStoreInfo1:(id)a0;
+ (id)_retain_1;
+ (void)_storeDeallocated;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (char *)generatedNameSuffix;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (long long)version;
+ (void)release;

- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (unsigned long long)retainCount;
- (id)entityName;
- (id)persistentStore;
- (id)retain;
- (id)_storeInfo1;
- (id)_storeIdentifier;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isTemporaryID;
- (id)URIRepresentation;
- (oneway void)release;

@end
