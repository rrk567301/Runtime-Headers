@class NSString, NSDictionary, PLManagedAsset, NSNumber, NSManagedObjectID;

@interface PLDuplicateAsset : NSObject {
    NSString *_originalFilename;
    long long _score;
    NSNumber *_hasUserModifiedDateCreated;
    NSNumber *_hasUserModifiedTimezone;
    NSNumber *_hasUserModifiedLocation;
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
@property BOOL enableEXIFDataAccess;
@property BOOL resourceSwapDisabled;
@property BOOL resourceComparisonPropertyUpdateLocation;
@property (readonly) BOOL isMergeReady;
@property (readonly) NSString *shortDescription;
@property (readonly) NSString *veryShortDescription;
@property (readonly) NSString *privateDescription;
@property (readonly) NSDictionary *jsonDescriptionData;
@property (readonly) BOOL hasModifiedUserLocation;
@property (readonly) BOOL hasModifiedUserTimezone;
@property (readonly) BOOL hasModifiedUserDateCreated;
@property (readonly) BOOL hasModifiedUserTitle;
@property (retain) NSString *resourceSwapAssetUUID;
@property BOOL titleUpdated;
@property BOOL dateUpdated;
@property BOOL locationUpdated;
@property BOOL timezoneUpdated;
@property BOOL iptcUpdated;
@property BOOL facesUpdated;

+ (id)relationshipKeyPathsForPrefetching;
+ (id)relationshipKeyPathsForMergePrefetching;
+ (BOOL)isDuplicateAssetSortChangedObject:(id)a0;

- (id)description;
- (id)debugDescription;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (id)initWithAsset:(id)a0 cloudScopedIdentifier:(id)a1 enableEXIFDataAccess:(BOOL)a2;
- (void)_configureInitPropertiesWithAsset:(id)a0;
- (short)_calculateDuplicateAssetVisibilityState;
- (id)duplicateAssetVisibilityStateString;
- (id)_additionalDescriptionDictionaryWithPIIDetails:(BOOL)a0;
- (id)_additionalDescriptionWithPIIDetails:(BOOL)a0;
- (id)_additionalDescriptionState:(id)a0;
- (long long)compare:(id)a0 enabledMergeComparison:(BOOL)a1;
- (long long)_correctedCompareDate:(id)a0 otherDate:(id)a1;
- (void)_tieBreakerComparisonScoreWithOtherAsset:(id)a0 score:(long long *)a1 otherScore:(long long *)a2;
- (void)_mergeComparisonScoreModifierWithOtherAsset:(id)a0 score:(long long *)a1 otherScore:(long long *)a2;
- (BOOL)_validCPLAssetsWithAssets:(id)a0;
- (void)_updateScoresUsingLatestDateWithDate:(id)a0 otherDate:(id)a1 score:(long long *)a2 otherScore:(long long *)a3;
- (long long)compareResource:(id)a0 error:(id *)a1;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesMatchingPlaybackStyleAndKindSubTypeCheckFromOther:(id)a0;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesMatchingKindSubtypeCheckFromOther:(id)a0 error:(id *)a1;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesMatchingPlaybackStyleCheckFromOther:(id)a0 error:(id *)a1;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesNotMatchingPlaybackStyleAndKindSubTypeCheckFromOther:(id)a0 error:(id *)a1;
- (struct PLDuplicateAssetScoreTuple { short x0; short x1; })_compareResourcesAdditionalChecksFromOther:(id)a0;
- (void)_compareResourceTIFFCheckFromAsset:(id)a0 other:(id)a1 scoreProperty:(short *)a2;
- (void)_compareResourceReverseCheckFromOther:(id)a0 score:(struct PLDuplicateAssetScoreTuple { short x0; short x1; } *)a1;
- (void)_compareResourcesResetPropertiesWithOther:(id)a0;
- (long long)_buildBaseScore;
- (long long)_buildUserModifiedScore;

@end
