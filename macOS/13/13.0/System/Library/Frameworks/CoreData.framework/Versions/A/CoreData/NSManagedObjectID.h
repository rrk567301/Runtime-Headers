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
- (long long)compare:(id)a0;
- (id)initWithObject:(id)a0;
- (id)entityName;
- (id)URIRepresentation;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (id)_retainedURIString;
- (id)_referenceData;
- (BOOL)_preferReferenceData64;
- (long long)_referenceData64;
- (id)initWithPK64:(long long)a0;
- (int)_temporaryIDCounter;

@end
