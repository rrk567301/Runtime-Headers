@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (long long)version;
+ (char)accessInstanceVariablesDirectly;
+ (id)initWithEntity:(id)a0;
+ (void)_release_1;
+ (id)_retain_1;
+ (void)_storeDeallocated;
+ (char)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 forEntity:(id)a1 count:(unsigned int)a2;
+ (Class)classForStore:(id)a0;
+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
+ (void)setObjectStoreIdentifier:(id)a0;

- (oneway void)release;
- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)entity;
- (id)URIRepresentation;
- (id)initWithEntity:(id)a0;
- (id)persistentStore;
- (char)_isPersistentStoreAlive;
- (id)_referenceData;
- (id)_retainedURIString;
- (void)_setPersistentStore:(id)a0;
- (id)_storeIdentifier;
- (int)_temporaryIDCounter;
- (id)initWithEntity:(id)a0 andUUIDString:(id)a1;
- (char)isTemporaryID;

@end
