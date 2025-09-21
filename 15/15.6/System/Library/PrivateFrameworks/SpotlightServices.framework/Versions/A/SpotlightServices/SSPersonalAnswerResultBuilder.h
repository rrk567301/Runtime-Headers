@class NSString, NSDate;

@interface SSPersonalAnswerResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) char isFlight;
@property (nonatomic) char isHotel;
@property (nonatomic) char isRestaurant;

+ (id)bundleId;
+ (char)isCoreSpotlightResult;
+ (char)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildAction;
- (id)buildButtonItems;
- (char)buildButtonItemsAreTrailing;
- (id)buildDescriptions;
- (id)buildInlineCardSections;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)processRawTitleString:(id)a0;

@end
