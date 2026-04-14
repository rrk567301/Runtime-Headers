@class SPSearchQueryContext, NSString, NSArray, SFSearchResult_SpotlightExtras;

@interface SSResultBuilder : NSObject

@property (retain, nonatomic) SFSearchResult_SpotlightExtras *result;
@property (retain, nonatomic) NSString *coreSpotlightId;
@property (retain, nonatomic) NSArray *matchedStrings;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) BOOL hasTextContentMatch;
@property (nonatomic) BOOL isTopHit;
@property (retain, nonatomic) SPSearchQueryContext *queryContext;

+ (id)bundleId;
+ (id)fetchAttributes;
+ (BOOL)isCoreSpotlightResult;
+ (id)resultBuilderWithResult:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultThumbnailSize;
+ (BOOL)supportsResult:(id)a0;
+ (Class)resultBuilderClassForResult:(id)a0;
+ (id)richTextsFromStrings:(id)a0;
+ (void)setMaxLinesForDescriptions:(id)a0;
+ (id)whiteSpaceCondensedStringForString:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildCompactCard;
- (id)buildResult;
- (id)buildInlineCard;
- (id)buildAction;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildCompactCardSection;
- (id)buildCompactCardSections;
- (void)buildDefaultPropertiesForCardSection:(id)a0;
- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildHighlightedMatchedTextWithTitle:(id)a0 headTruncation:(BOOL)a1;
- (id)buildHorizontallyScrollingCardSection;
- (id)buildInlineCardSection;
- (id)buildInlineCardSections;
- (BOOL)buildPreventThumbnailImageScaling;
- (id)buildPreviewButtonItems;
- (id)buildPreviewCommand;
- (id)buildPunchouts;
- (id)buildSecondaryTitle;
- (id)buildSecondaryTitleImage;
- (BOOL)buildSecondaryTitleIsDetached;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)buildTrailingBottomText;
- (id)buildTrailingMiddleText;
- (id)buildTrailingThumbnail;
- (id)buildTrailingTopText;
- (id)resultAppBundleId;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
