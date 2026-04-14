@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)initialize;
+ (void)_release_1;
+ (Class)classForStore:(id)a0;
+ (BOOL)_usesTaggedPointers;
+ (id)initWithEntity:(id)a0;
+ (id)_retain_1;
+ (void)_storeDeallocated;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (long long)version;

- (id)entity;
- (BOOL)_isPersistentStoreAlive;
- (unsigned long long)retainCount;
- (id)persistentStore;
- (id)retain;
- (id)initWithEntity:(id)a0;
- (void)dealloc;
- (id)_storeIdentifier;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isTemporaryID;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (id)_retainedURIString;
- (id)URIRepresentation;
- (oneway void)release;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (int)_temporaryIDCounter;

@end
