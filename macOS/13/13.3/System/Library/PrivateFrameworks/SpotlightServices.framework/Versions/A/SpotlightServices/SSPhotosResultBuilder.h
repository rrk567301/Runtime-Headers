@class NSString, NSArray;

@interface SSPhotosResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isSyndicated;
@property (retain, nonatomic) NSString *photoIdentifier;
@property (retain, nonatomic) NSArray *namesOfPeopleInPhoto;
@property (retain, nonatomic) NSArray *personPhotoIdentifiersOfPeopleInPhoto;
@property (retain, nonatomic) NSArray *peopleInPhoto;
@property (retain, nonatomic) NSArray *matchedPeople;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)appBundleId;
- (id)buildResult;
- (id)buildImageCardSection;
- (id)buildInlineCardSections;
- (id)buildPreviewCommand;
- (id)buildThumbnail;
- (void)populateMatchedPeopleInPhoto;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
