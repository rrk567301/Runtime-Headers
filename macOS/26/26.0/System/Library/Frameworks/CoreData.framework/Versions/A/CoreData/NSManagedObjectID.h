@class NSString, NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSEntityDescription *entity;
@property (readonly, weak) NSPersistentStore *persistentStore;
@property (readonly, getter=isTemporaryID) BOOL temporaryID;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)_generateTemporaryIDForEntity:(id)a0;
+ (long long)version;
+ (void)initialize;

- (id)storeIdentifier;
- (BOOL)_isPersistentStoreAlive;
- (id)_retainedURIString;
- (BOOL)_isDeallocating;
- (id)initWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (id)initWithPK64:(long long)a0;
- (id)entityName;
- (long long)compare:(id)a0;
- (id)_storeIdentifier;
- (long long)_referenceData64;
- (id)URIRepresentation;
- (BOOL)_preferReferenceData64;
- (id)_referenceData;
- (int)_temporaryIDCounter;

@end
