@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)_retain_1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (void)_storeDeallocated;
+ (BOOL)_usesTaggedPointers;
+ (void)_release_1;
+ (long long)version;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (void)initialize;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (Class)classForStore:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)initWithEntity:(id)a0;

- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (id)_retainedURIString;
- (void)dealloc;
- (id)retain;
- (id)_storeIdentifier;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (unsigned long long)retainCount;
- (id)persistentStore;
- (id)URIRepresentation;
- (oneway void)release;
- (unsigned long long)hash;
- (id)initWithEntity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTemporaryID;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (int)_temporaryIDCounter;

@end
