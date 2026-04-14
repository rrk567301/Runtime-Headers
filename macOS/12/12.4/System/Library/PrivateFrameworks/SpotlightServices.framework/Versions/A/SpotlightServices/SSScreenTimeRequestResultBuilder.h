@class NSArray, NSString, NSDate, NSNumber;

@interface SSScreenTimeRequestResultBuilder : SSResultBuilder

@property (nonatomic) int requestStatus;
@property (retain, nonatomic) NSArray *approvers;
@property (retain, nonatomic) NSDate *expireDate;
@property (retain, nonatomic) NSDate *respondDate;
@property (retain, nonatomic) NSDate *requestDate;
@property (retain, nonatomic) NSString *requestedItemName;
@property (retain, nonatomic) NSString *requestedItemDescription;
@property (retain, nonatomic) NSString *requesterContactIdentifier;
@property (retain, nonatomic) NSNumber *requesterDSID;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *requestStatusString;
@property (retain, nonatomic) NSNumber *requestAmountDuration;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildInlineCardSection;
- (id)buildThumbnail;
- (id)buildInlineCardSections;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildSecondaryTitle;
- (BOOL)buildSecondaryTitleIsDetached;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildButtonItems;

@end
