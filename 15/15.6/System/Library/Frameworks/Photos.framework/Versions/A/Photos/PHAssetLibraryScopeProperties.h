@interface PHAssetLibraryScopeProperties : PHAssetPropertySet

@property long long pl_shareState;
@property (readonly, nonatomic) short suggestedByClientType;
@property (readonly, nonatomic) char assetIsInOnboardingPreviewState;
@property (readonly, nonatomic) char assetIsInPhotosSuggestedPreviewState;
@property (readonly, nonatomic) char assetIsPublishedToLibraryScope;
@property (readonly, nonatomic) char assetManuallyAddedByUser;
@property (readonly, nonatomic) char assetManuallyRejectedByUser;
@property (readonly, nonatomic) char assetRejectedByCamera;
@property (readonly, nonatomic) char assetRejectedByPhotosSuggester;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
