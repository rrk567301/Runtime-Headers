@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)alloc;
+ (id)_retain_1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (void)_storeDeallocated;
+ (void)_setStoreInfo1:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_release_1;
+ (id)retain;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (long long)version;
+ (char *)generatedNameSuffix;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (void)release;
+ (BOOL)_usesTaggedPointers;
+ (id)_storeInfo1;

- (id)entityName;
- (BOOL)_isPersistentStoreAlive;
- (id)entity;
- (id)persistentStore;
- (id)_storeIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)URIRepresentation;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (BOOL)isTemporaryID;
- (unsigned long long)retainCount;
- (id)_storeInfo1;

@end
