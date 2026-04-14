@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)alloc;
+ (id)_retain_1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initWithEntity:(id)a0;
+ (void)initialize;
+ (void)_storeDeallocated;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_release_1;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (long long)version;
+ (Class)classForStore:(id)a0;
+ (void)setObjectStoreIdentifier:(id)a0;
+ (BOOL)_usesTaggedPointers;

- (id)initWithEntity:(id)a0;
- (BOOL)_isPersistentStoreAlive;
- (id)entity;
- (id)persistentStore;
- (id)_storeIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)URIRepresentation;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (BOOL)isTemporaryID;
- (id)_retainedURIString;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;
- (int)_temporaryIDCounter;

@end
