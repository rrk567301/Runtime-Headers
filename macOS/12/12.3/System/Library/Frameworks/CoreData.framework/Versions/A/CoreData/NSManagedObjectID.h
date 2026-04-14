@class NSString, NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSEntityDescription *entity;
@property (readonly, weak) NSPersistentStore *persistentStore;
@property (readonly, getter=isTemporaryID) BOOL temporaryID;

+ (void)initialize;
+ (long long)version;
+ (BOOL)accessInstanceVariablesDirectly;

- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (long long)compare:(id)a0;
- (id)entityName;
- (id)URIRepresentation;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (long long)_referenceData64;
- (id)_referenceData;
- (id)initWithPK64:(long long)a0;
- (id)_retainedURIString;
- (BOOL)_preferReferenceData64;
- (int)_temporaryIDCounter;

@end
