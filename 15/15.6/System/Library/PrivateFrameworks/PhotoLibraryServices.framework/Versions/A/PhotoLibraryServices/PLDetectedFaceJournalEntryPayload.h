@class NSString, NSSet;
@protocol PLJournalEntryPayloadID;

@interface PLDetectedFaceJournalEntryPayload : PLManagedObjectJournalEntryPayload <PLFaceRebuildDescription, PLCloudAssetPayloadRestorePayload>

@property (retain, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic, getter=isHidden) char hidden;
@property (readonly, nonatomic, getter=isManual) char manual;
@property (readonly, nonatomic, getter=isRepresentative) char representative;
@property (readonly, nonatomic) int nameSource;
@property (readonly, nonatomic) int cloudNameSource;
@property (readonly, nonatomic, getter=isClusterRejected) char clusterRejected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PLJournalEntryPayloadID> payloadID;
@property (readonly, nonatomic) NSSet *assetIdentifiers;
@property (readonly, nonatomic) unsigned long long assetIdentifierCount;
@property (readonly, nonatomic) long long assetIdentifierType;

+ (unsigned int)payloadVersion;
+ (char)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (double)bodyHeight;
- (id)additionalDescription;
- (double)bodyCenterX;
- (double)bodyCenterY;
- (double)bodyWidth;
- (id)detectionType;
- (int)faceAlgorithmVersion;
- (id)personUUID;
- (char)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)_insertDeferredRebuildFaceForPersonUUID:(id)a0 inManagedObjectContext:(id)a1;
- (id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)a0;
- (id)_insertDetectedFaceWithAsset:(id)a0 inManagedObjectContext:(id)a1 checkExisting:(char)a2;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (id)clusterRejectedPersonsUUIDs;
- (char)insertFaceFromDataInManagedObjectContext:(id)a0 allowDeferred:(char *)a1;
- (char)insertWithAssets:(id)a0 inManagedObjectContext:(id)a1;
- (char)isDeferrable;
- (char)isKeyFace;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (id)rejectedPersonsUUIDs;
- (void)setLocalAssetIdentifierForCloudIdentifiers:(id)a0;
- (char)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
