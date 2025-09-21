@class NSString, NSSet;
@protocol PLJournalEntryPayloadID;

@interface PLSuggestionComputeJournalEntryPayload : PLManagedObjectJournalEntryPayload <PLCloudAssetPayloadRestorePayload>

@property (retain, nonatomic) NSString *keyAssetUUID;
@property (readonly, nonatomic) id<PLJournalEntryPayloadID> payloadID;
@property (readonly, nonatomic) NSSet *assetIdentifiers;
@property (readonly, nonatomic) unsigned long long assetIdentifierCount;
@property (readonly, nonatomic) long long assetIdentifierType;

+ (id)entityName;
+ (unsigned int)payloadVersion;
+ (char)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)payloadAdapterForManagedObject:(id)a0;
+ (id)modelProperties;
+ (char)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1 suggestionTypes:(id)a2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)supportedSuggestionTypes;

- (char)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (char)insertWithAssets:(id)a0 inManagedObjectContext:(id)a1;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (void)setLocalAssetIdentifierForCloudIdentifiers:(id)a0;
- (char)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
