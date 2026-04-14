@class NSString, NSSet, NSOrderedSet;

@interface PLMemoryJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSString *keyAssetUUID;
@property (readonly, nonatomic) NSSet *curatedAssetUUIDs;
@property (readonly, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property (readonly, nonatomic) NSSet *movieCuratedAssetUUIDs;
@property (readonly, nonatomic) NSSet *userCuratedAssetUUIDs;
@property (readonly, nonatomic) NSSet *representativeAssetUUIDs;
@property (readonly, nonatomic) NSOrderedSet *customUserAssetUUIDs;

+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;

- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)insertMemoryFromDataInManagedObjectContext:(id)a0;
- (BOOL)updateAssetsInMemory:(id)a0 includePendingAssetChanges:(BOOL)a1;
- (BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)a0 includePendingAssetChanges:(BOOL)a1;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (id)initWithUserFeedback:(id)a0 changedKeys:(id)a1;

@end
