@class NSArray, NSString, NSDictionary;

@interface PLAssetJournalEntryPayload : PLJournalEntryPayload {
    NSDictionary *_keywordUUIDRemapping;
}

@property (readonly, nonatomic) NSArray *resources;
@property (readonly, nonatomic) short savedAssetType;
@property (readonly, nonatomic) NSString *mediaGroupUUID;

+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)snapshotSortDescriptors;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;

- (void).cxx_destruct;
- (id)directory;
- (short)kind;
- (id)filename;
- (void)setLocation:(id)a0;
- (id)latitude;
- (id)longitude;
- (id)dateCreated;
- (BOOL)isImage;
- (BOOL)isVideo;
- (id)uniformTypeIdentifier;
- (BOOL)hasAdjustments;
- (short)kindSubtype;
- (id)adjustmentFormatVersion;
- (id)adjustmentFormatIdentifier;
- (id)locationData;
- (id)hdrGain;
- (unsigned short)bundleScope;
- (BOOL)isDefaultAdjustedSlomo;
- (id)originalOrientation;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)highFrameRateState;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (void)mergePayload:(id)a0;
- (id)initWithAdditionalAssetAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithAssetDescription:(id)a0 changedKeys:(id)a1;
- (id)initWithUnmanagedAdjustment:(id)a0 changedKeys:(id)a1;
- (id)initWithInternalResource:(id)a0 filesystemBookmark:(id)a1 changedKeys:(id)a2;
- (id)initWithCloudMaster:(id)a0 payloadID:(id)a1 changedKeys:(id)a2;
- (id)initWithCloudMasterMediaMetadata:(id)a0 payloadID:(id)a1 changedKeys:(id)a2 modelProperties:(id)a3;
- (id)initWithExtendedAttributes:(id)a0 changedKeys:(id)a1;
- (id)initWithEditedIPTCAttributes:(id)a0 changedKeys:(id)a1;
- (id)insertAssetFromDataInManagedObjectContext:(id)a0 keywordUUIDRemapping:(id)a1 payloadAttributesToUpdate:(id)a2;
- (id)cloudMasterGUID;
- (id)originalResourceRelativePathsWithPathManager:(id)a0;
- (id)extendedAttributesLatitude;
- (id)extendedAttributesLongitude;
- (unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
- (id)_loadOriginalVideoMetadataWithPathManager:(id)a0 timezoneLookup:(id)a1;
- (void)_filterNonPersistedResources;
- (void)_copyAssetDescriptionToAccessibilityDescription;
- (void)_convertCustomRenderedValueToHDRType;
- (void)_convertDepthStatesToDepthType;
- (void)_fixHDRGainZeroValueToNULL;
- (void)_fixOriginalAlternateImageOrientation;
- (void)_fixResourceTypeUnknownValues;
- (void)_fixXMPSidecarUTI;
- (void)_fixLocationData;
- (void)_fixAdjustedAssetUTI;

@end
