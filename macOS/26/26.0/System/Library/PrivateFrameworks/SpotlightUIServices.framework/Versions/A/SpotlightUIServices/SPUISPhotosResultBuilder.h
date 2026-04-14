@class NSString, NSArray;

@interface SPUISPhotosResultBuilder : SPUISResultBuilder

@property (nonatomic) BOOL isSyndicated;
@property (retain, nonatomic) NSString *photoIdentifier;
@property (retain, nonatomic) NSArray *peopleInPhoto;
@property (retain, nonatomic) NSArray *matchedPeople;
@property (retain, nonatomic) NSArray *scenePhotoIdentifiers;
@property (retain, nonatomic) NSArray *photoSceneTypes;
@property (retain, nonatomic) NSArray *sceneSynonymsIndex;
@property (retain, nonatomic) NSArray *sceneSynonymsCounts;
@property (retain, nonatomic) NSArray *sceneLabelsIndex;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)appBundleId;
- (id)scenes;
- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildImageCardSection;
- (id)buildInlineCardSections;
- (id)buildOneUpCommand;
- (id)buildPreviewCommand;
- (id)buildResult;
- (id)buildThumbnail;
- (id)createSceneFrom:(id)a0;
- (int)sfSceneTypeFrom:(long long)a0;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
