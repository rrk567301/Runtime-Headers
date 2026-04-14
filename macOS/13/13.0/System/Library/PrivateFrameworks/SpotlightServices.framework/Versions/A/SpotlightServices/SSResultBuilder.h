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
+ (id)resultBuilderWithResult:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultThumbnailSize;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;
+ (Class)resultBuilderClassForResult:(id)a0;
+ (id)richTextsFromStrings:(id)a0;
+ (void)setMaxLinesForDescriptions:(id)a0;
+ (id)whiteSpaceCondensedStringForString:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildResult;
- (id)buildCompactCard;
- (id)buildCompactCardSection;
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
- (id)buildInlineCard;
- (id)buildHorizontallyScrollingCardSection;
- (id)buildTitle;
- (id)buildTrailingThumbnail;
- (id)buildDetailedRowCardSection;
- (id)buildSecondaryTitleImage;
- (id)buildPreviewCommand;
- (id)buildCompactCardSections;
- (id)buildPunchouts;
- (id)resultAppBundleId;
- (void)buildDefaultPropertiesForCardSection:(id)a0;
- (id)buildPreviewButtonItems;
- (id)buildTrailingTopText;
- (id)buildTrailingMiddleText;
- (id)buildTrailingBottomText;
- (id)buildAction;
- (id)buildHighlightedMatchedTextWithTitle:(id)a0 headTruncation:(BOOL)a1;
- (BOOL)buildPreventThumbnailImageScaling;

@end
