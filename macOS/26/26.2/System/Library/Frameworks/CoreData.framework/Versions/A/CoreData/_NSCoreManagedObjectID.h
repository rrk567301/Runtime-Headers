@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (id)retain;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)_storeInfo1;
+ (void)_setStoreInfo1:(id)a0;
+ (void)_release_1;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (char *)generatedNameSuffix;
+ (BOOL)_usesTaggedPointers;
+ (long long)version;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (id)alloc;
+ (void)release;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (void)_storeDeallocated;
+ (id)_retain_1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;

- (id)entity;
- (id)persistentStore;
- (id)entityName;
- (BOOL)_isPersistentStoreAlive;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_storeInfo1;
- (unsigned long long)retainCount;
- (BOOL)isTemporaryID;
- (oneway void)release;
- (id)_storeIdentifier;
- (id)URIRepresentation;

@end
