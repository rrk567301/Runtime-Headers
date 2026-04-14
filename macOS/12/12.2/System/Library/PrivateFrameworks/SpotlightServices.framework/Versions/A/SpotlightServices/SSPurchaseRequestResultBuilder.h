@class NSArray, NSString, NSDate;

@interface SSPurchaseRequestResultBuilder : SSResultBuilder

@property (nonatomic) int requestStatus;
@property (nonatomic) double starRating;
@property (retain, nonatomic) NSArray *approvers;
@property (retain, nonatomic) NSDate *requestDate;
@property (retain, nonatomic) NSDate *respondDate;
@property (retain, nonatomic) NSString *ageRating;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appPrice;
@property (retain, nonatomic) NSString *appType;
@property (retain, nonatomic) NSString *requesterContactIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *requestStatusString;
@property (retain, nonatomic) NSString *requesterName;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildThumbnail;
- (id)buildInlineCardSection;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildSecondaryTitle;
- (id)buildInlineCardSections;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (BOOL)buildSecondaryTitleIsDetached;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildButtonItems;

@end
