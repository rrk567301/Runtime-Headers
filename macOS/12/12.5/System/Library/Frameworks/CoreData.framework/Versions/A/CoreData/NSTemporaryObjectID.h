@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)alloc;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (long long)version;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)_storeDeallocated;
+ (Class)classForStore:(id)a0;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (id)initWithEntity:(id)a0;
+ (id)_retain_1;
+ (void)_release_1;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)entity;
- (id)URIRepresentation;
- (id)persistentStore;
- (BOOL)_isPersistentStoreAlive;
- (BOOL)isTemporaryID;
- (void)_setPersistentStore:(id)a0;
- (id)_storeIdentifier;
- (id)initWithEntity:(id)a0;
- (id)_referenceData;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (id)_retainedURIString;
- (int)_temporaryIDCounter;

@end
