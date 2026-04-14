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
+ (void)initialize;
+ (id)_generateTemporaryIDForEntity:(id)a0;
+ (long long)version;

- (id)entityName;
- (id)storeIdentifier;
- (BOOL)_isPersistentStoreAlive;
- (id)initWithObject:(id)a0;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (BOOL)_isDeallocating;
- (id)_storeIdentifier;
- (id)URIRepresentation;
- (long long)_referenceData64;
- (id)_retainedURIString;
- (id)initWithPK64:(long long)a0;
- (BOOL)_preferReferenceData64;
- (id)_referenceData;
- (int)_temporaryIDCounter;

@end
