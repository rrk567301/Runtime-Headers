@class MPModelPlaybackPosition, NSString, NSArray, NSDictionary, NSDate, MPModelStoreAsset, MPModelFileAsset;

@interface MPModelMovie : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *clips;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic) long long explicitRating;
@property (copy, nonatomic) NSString *tagline;
@property (copy, nonatomic) NSDictionary *movieInfoDictionary;
@property (copy, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) MPModelFileAsset *localFileAsset;
@property (retain, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (retain, nonatomic) MPModelStoreAsset *storeAsset;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) BOOL hasCloudSyncSource;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;
@property (readonly, copy, nonatomic) NSDate *lastDevicePlaybackDate;

+ (id)kindWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)kindWithVariants:(unsigned long long)a0;
+ (id)__title_KEY;
+ (id)__duration_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__lastDevicePlaybackDate_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__hasCloudSyncSource_KEY;
+ (id)__storeAsset_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__explicitRating_KEY;
+ (id)__releaseDate_KEY;
+ (id)classesForSecureCoding;
+ (id)__tagline_KEY;
+ (id)__movieInfoDictionary_KEY;
+ (id)__clips_KEY;
+ (long long)genericObjectType;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)humanDescription;
- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
- (id)mediaItemPropertyValues;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;

@end
