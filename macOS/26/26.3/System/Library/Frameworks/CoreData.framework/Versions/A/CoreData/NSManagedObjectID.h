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
+ (void)initialize;
+ (long long)version;

- (BOOL)_isPersistentStoreAlive;
- (id)storeIdentifier;
- (id)initWithPK64:(long long)a0;
- (id)entityName;
- (id)initWithObject:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (long long)_referenceData64;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_storeIdentifier;
- (id)_retainedURIString;
- (id)URIRepresentation;
- (BOOL)_preferReferenceData64;
- (id)_referenceData;
- (int)_temporaryIDCounter;

@end
