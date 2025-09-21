@class NSString, NSDictionary, PLManagedAsset, NSNumber, NSManagedObjectID;

@interface PLDuplicateAsset : NSObject {
    NSString *_originalFilename;
    long long _score;
    NSNumber *_hasUserModifiedDateCreated;
    NSNumber *_hasUserModifiedTimezone;
    NSNumber *_hasUserModifiedLocation;
    NSNumber *_isCPLEnabled;
}

@property (retain) PLManagedAsset *asset;
@property (retain) NSManagedObjectID *assetObjectID;
@property (retain) NSString *assetUUID;
@property (retain) NSString *assetObjectIDDescription;
@property (retain) NSString *assetCloudScopedIdentifier;
@property (nonatomic) short duplicateAssetVisibilityState;
@property (nonatomic) long long mergeStatus;
@property (nonatomic) long long originalResolution;
@property (readonly) long long score;
@property char enableEXIFDataAccess;
@property char resourceSwapDisabled;
@property char resourceComparisonPropertyUpdateLocation;
@property (readonly) char isMergeReady;
@property (readonly) char isCPLEnabled;
@property (readonly) NSString *shortDescription;
@property (readonly) NSString *veryShortDescription;
@property (readonly) NSString *privateDescription;
@property (readonly) NSDictionary *jsonDescriptionData;
@property (readonly) char hasModifiedUserLocation;
@property (readonly) char hasModifiedUserTimezone;
@property (readonly) char hasModifiedUserDateCreated;
@property (readonly) char hasModifiedUserTitle;
@property (retain) NSString *resourceSwapAssetUUID;
@property char titleUpdated;
@property char dateUpdated;
@property char locationUpdated;
@property char timezoneUpdated;
@property char iptcUpdated;
@property char facesUpdated;

+ (id)relationshipKeyPathsForPrefetching;
+ (char)isDuplicateAssetSortChangedObject:(id)a0;
+ (id)relationshipKeyPathsForMergePrefetching;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithAsset:(id)a0;
- (long long)_buildBaseScore;
- (long long)compare:(id)a0 enabledMergeComparison:(char)a1;
- (id)_additionalDescriptionDictionaryWithPIIDetails:(char)a0;
- (id)_additionalDescriptionState:(id)a0;
- (id)_additionalDescriptionWithPIIDetails:(char)a0;
- (long long)_buildUserModifiedScore;
- (short)_calculateDuplicateAssetVisibilityState;
- (void)_compareResourceReverseCheckFromOther:(id)a0 score:(struct PLDuplicateAssetScoreTuple { short x0; short x1; } *)a1;
- (void)_compareResourceTIFFCheckFromAsset:(id)a0 other:(id)a1 scoreProperty:(short *)a2;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesAdditionalChecksFromOther:(id)a0;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesMatchingKindSubtypeCheckFromOther:(id)a0 error:(id *)a1;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesMatchingPlaybackStyleAndKindSubTypeCheckFromOther:(id)a0;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesMatchingPlaybackStyleCheckFromOther:(id)a0 error:(id *)a1;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesNotMatchingPlaybackStyleAndKindSubTypeCheckFromOther:(id)a0 error:(id *)a1;
- (void)_compareResourcesResetPropertiesWithOther:(id)a0;
- (void)_compareUTICheckFromOther:(id)a0 scoreTuple:(struct PLDuplicateAssetScoreTuple { short x0; short x1; } *)a1;
- (void)_configureInitPropertiesWithAsset:(id)a0;
- (long long)_correctedCompareDate:(id)a0 otherDate:(id)a1;
- (void)_fileFormatIncrementScore:(long long *)a0;
- (void)_mergeComparisonScoreModifierWithOtherAsset:(id)a0 score:(long long *)a1 otherScore:(long long *)a2;
- (void)_tieBreakerComparisonScoreWithOtherAsset:(id)a0 score:(long long *)a1 otherScore:(long long *)a2;
- (void)_updateScoreOnCondition:(char)a0 incrementOtherScore:(char)a1 scoreTuple:(struct PLDuplicateAssetScoreTuple { short x0; short x1; } *)a2 other:(id)a3 propertyName:(id)a4 additionalLogString:(id)a5;
- (void)_updateScoresUsingLatestDateWithDate:(id)a0 otherDate:(id)a1 score:(long long *)a2 otherScore:(long long *)a3;
- (char)_validCPLAssetsWithAssets:(id)a0;
- (long long)compareResource:(id)a0 error:(id *)a1;
- (id)duplicateAssetVisibilityStateString;
- (id)initWithAsset:(id)a0 cloudScopedIdentifier:(id)a1 enableEXIFDataAccess:(char)a2;

@end
