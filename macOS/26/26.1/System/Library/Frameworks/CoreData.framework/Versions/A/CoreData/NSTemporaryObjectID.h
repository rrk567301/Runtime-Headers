@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)initWithEntity:(id)a0;
+ (long long)version;
+ (void)initialize;
+ (void)_release_1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (void)_storeDeallocated;
+ (id)_retain_1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (Class)classForStore:(id)a0;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;

- (id)initWithEntity:(id)a0;
- (id)retain;
- (BOOL)_isPersistentStoreAlive;
- (unsigned long long)hash;
- (oneway void)release;
- (id)entity;
- (BOOL)isTemporaryID;
- (unsigned long long)retainCount;
- (id)URIRepresentation;
- (id)persistentStore;
- (void)dealloc;
- (id)_retainedURIString;
- (BOOL)isEqual:(id)a0;
- (id)_storeIdentifier;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (int)_temporaryIDCounter;

@end
