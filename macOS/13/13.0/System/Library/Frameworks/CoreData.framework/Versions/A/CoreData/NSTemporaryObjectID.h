@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (long long)version;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initWithEntity:(id)a0;
+ (id)_retain_1;
+ (void)_release_1;
+ (BOOL)_usesTaggedPointers;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (void)_storeDeallocated;
+ (Class)classForStore:(id)a0;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)entity;
- (id)URIRepresentation;
- (id)persistentStore;
- (BOOL)_isPersistentStoreAlive;
- (id)initWithEntity:(id)a0;
- (BOOL)isTemporaryID;
- (id)_storeIdentifier;
- (id)_retainedURIString;
- (id)_referenceData;
- (int)_temporaryIDCounter;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (void)_setPersistentStore:(id)a0;

@end
