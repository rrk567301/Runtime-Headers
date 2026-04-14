@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (id)initWithEntity:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (void)_release_1;
+ (BOOL)_usesTaggedPointers;
+ (long long)version;
+ (id)alloc;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (void)_storeDeallocated;
+ (id)_retain_1;
+ (Class)classForStore:(id)a0;

- (id)entity;
- (id)persistentStore;
- (id)initWithEntity:(id)a0;
- (BOOL)_isPersistentStoreAlive;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (unsigned long long)retainCount;
- (BOOL)isTemporaryID;
- (id)_retainedURIString;
- (oneway void)release;
- (id)_storeIdentifier;
- (id)URIRepresentation;
- (void)dealloc;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (int)_temporaryIDCounter;

@end
